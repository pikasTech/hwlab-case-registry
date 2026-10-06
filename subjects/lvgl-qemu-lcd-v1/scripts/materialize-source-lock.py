#!/usr/bin/env python3
"""Materialize the registered LVGL dependency at its locked commit."""
import json
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
lock = json.loads((root / "source-lock.json").read_text())
source = lock["sources"]["lvgl"]
destination = root / source["destination"]
commit = source["commit"]


def git(*args):
    return subprocess.check_output(["git", *args], text=True).strip()


if not (destination / ".git").exists():
    destination.mkdir(parents=True, exist_ok=True)
    git("init", str(destination))
    git("-C", str(destination), "remote", "add", "origin", source["repository"])
try:
    actual = git("-C", str(destination), "rev-parse", "HEAD")
except subprocess.CalledProcessError:
    # A failed first fetch leaves a valid repository without a checkout.
    git("-C", str(destination), "fetch", "--depth=1", "origin", commit)
    git("-C", str(destination), "checkout", "--detach", "FETCH_HEAD")
    actual = git("-C", str(destination), "rev-parse", "HEAD")
if actual != commit:
    raise SystemExit(f"LVGL source lock mismatch: expected {commit}, observed {actual}")
print(json.dumps({"ok": True, "dependency": "lvgl", "commit": actual, "destination": source["destination"]}))
