# Post-run UART Recovery Evidence

CaseRun `issue1077-stage-d-20260609-124742` completed and archived normally at `2026-06-09T13:04:33Z`, but the in-agent UART read attempts failed because the D601 `serial-monitor` service was not running.

The failing original UART path was still the standard HWPOD path:

```text
hwpod uart read --port uart1 --max-bytes 8192 --hwpod-id d601-f103-v2 --workspace-path 'F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1077-stage-d-20260609-124742'
Serial monitor server is unreachable: Port 3003 is free and no tracked server state exists
```

After the run completed, I used the same HWPOD `/v1/hwpod-node-ops` chain to start the D601 serial-monitor service, without changing the subject repository or bypassing HWPOD:

```text
bun tools/hwpod-cli.ts --hwpod-id d601-f103-v2 --workspace-path "C:\Users\liang\.agents\skills\serial-monitor" cmd bun scripts/serial-monitor-cli.ts server start --force
server_start success=true pid=84256 port=3003 logFile=C:\Users\liang\.agents\skills\serial-monitor\logs\20260609\serial_monitor_20260609_210825.jsonl
```

The monitor then reported the expected COM binding:

```text
monitor_status success=true port=COM9 baudRate=115200 isMonitoring=true startTime=2026-06-09T21:09:16.246+0800
```

The recovered UART stream contained the current run id and Arm-2D heartbeat lines:

```text
[ARM2D-D] run=issue1077-stage-d-20260609-124742 hb=474 loop=37060906 frame=1896 tick=474191
[ARM2D-D] hb tile=80x56 sum=F3CDC93E
[ARM2D-D] pix p0=1931 pc=FFE0 pe=B5B1 cache=none
```

Latest lightweight fetch after recovery also confirmed live `[ARM2D-D]` traffic on COM9:

```text
fetch_latest success=true timestamp=2026-06-09T21:09:47.139+0800 port=COM9 data="[ARM2D-D] pix p0=192F pc=001F pe=B5B0 cache=none"
```

This file is supplemental post-run evidence. The generated CaseRun manifest remains unchanged and continues to describe only the automatic CaseRun artifacts.
