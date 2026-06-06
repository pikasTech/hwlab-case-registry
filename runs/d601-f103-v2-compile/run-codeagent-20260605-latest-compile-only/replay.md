# Code Agent CaseRun Replay

This run was executed by HWLAB v0.2 Code Agent through AgentRun with the DeepSeek backend.

- traceId: `trc_mq122ci1_n92hiivi`
- sessionId: `ses_89d4cb24-3c80-4047-a465-baee741691d2`
- conversationId: `cnv_1cbc77b7-6010-409f-a5e3-7757be23519a`
- AgentRun run: `run_56b694ab9790467f9fa9ec72f1b60e58`
- AgentRun command: `cmd_58265170200d4276a9c2fb285198f2bd`
- runner job: `agentrun-v01-runner-213112380936`
- runner pod: `agentrun-v01-runner-213112380936-pqppg`
- HWLAB bundle source commit: `26ca9e515f2c54f80f64ff2f3a23a1ba8db41ee8`
- Applied PR diff before running CaseRun: `pikasTech/HWLAB#929`

The Code Agent applied the PR #929 diff, cloned this case repo branch, then executed:

```bash
HWLAB_RUNTIME_API_URL=${HWLAB_RUNTIME_API_URL:-http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667} \
HWLAB_RUNTIME_ENDPOINT_LOCKED=1 \
bun tools/hwlab-cli/bin/hwlab-cli.ts case run d601-f103-v2-compile \
  --case-repo /tmp/hwpod-cases-codeagent-latest \
  --run-id run-codeagent-20260605-latest-compile-only \
  --job-timeout-ms 50000 \
  --poll-interval-ms 1000
```

Result: `succeeded`. Keil job `20260605_230515_8010fe20` returned code `0`, produced the expected hex/axf artifact paths, and download/flash was skipped by the compile-only case contract.
