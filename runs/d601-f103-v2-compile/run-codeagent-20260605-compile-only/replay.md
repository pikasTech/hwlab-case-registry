# Replay

This audit record came from HWLAB Code Agent trace `trc_mq103g5n_fkk4typc`.

The runner started from HWLAB v0.2 resource bundle `318df8597d9aff82ff7033c14d47c4af5a8b08ec`, applied HWLAB PR #929 by GitHub API diff, then executed:

```bash
HWLAB_RUNTIME_API_URL=http://74.48.78.17:19667 \
HWLAB_RUNTIME_ENDPOINT_LOCKED=1 \
bun tools/hwlab-cli/bin/hwlab-cli.ts case run d601-f103-v2-compile \
  --case-repo /tmp/hwpod-cases-codeagent \
  --run-id run-codeagent-20260605-compile-only \
  --job-timeout-ms 50000 \
  --poll-interval-ms 1000
```

Expected result: `action=case.run`, `status=succeeded`, Keil job `20260605_221025_55887d0b`, download skipped.
