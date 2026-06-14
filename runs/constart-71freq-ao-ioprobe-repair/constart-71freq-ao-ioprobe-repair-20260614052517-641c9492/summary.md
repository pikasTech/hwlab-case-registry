# HWPOD CaseRun constart-71freq-ao-ioprobe-repair

- runId: constart-71freq-ao-ioprobe-repair-20260614052517-641c9492
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\ConStart
- subjectCommitId: de223ab80ddf80e5ba092dcf2d20f9df7ec91a60
- subjectWorktreePath: F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9492
- agentTraceId: trc_case_constart-71freq-ao-ioprobe-repair_9f25ef24dfd6410ab64396cf1195d51b
- agentSessionId: ses_b7677e50-06d1-4190-87d2-491ff2a13c64
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_constart-71freq-ao-ioprobe-repair_9f25ef24dfd6410ab64396cf1195d51b --render web
- resultCommand: hwlab-cli client agent result trc_case_constart-71freq-ao-ioprobe-repair_9f25ef24dfd6410ab64396cf1195d51b
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_constart-71freq-ao-ioprobe-repair_9f25ef24dfd6410ab64396cf1195d51b
- agentTerminalStatus: completed
- agentCommandStatus: completed
- agentToolCallSummaryCount: 
- agentToolCallStatusCounts: 
- agentToolCallExitCodeCounts: 
- agentTraceCommandCount: 38
- agentTraceHwpodCommandCount: 38
- agentTraceHwpodBuildCommandCount: 2
- agentStageSource: agent-trace-commands
- agentStageCommandCount: 22
- agentStageKinds: spec-validate, inspect, workspace-edit, build, download, io-probe-read, board-comm, hwpod-other, job-status
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/constart-71freq-ao-ioprobe-repair-20260614052517-641c9492/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260614_133010_6556c51f, 20260614_133440_911c8f8c, 20260614_133529_669d9a04, 20260614_133114_9274c252
- agentReportedBuildJobId: 20260614_133010_6556c51f
- agentReportedReturnCode: 0
- agentReportedWarningCount: 4
- postAgentCompileJobId: 20260614_134113_b4b389aa
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260614_134113_b4b389aa
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/cons ... clipped ... |
| inspect |  | 0 | `hwpod inspect --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9492` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --reason "model bad AO current calibration baseline" --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caser ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9492` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| download |  | 0 | `hwpod download --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c9492` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| io-probe-read |  | 0 | `hwpod io-probe read main41.ai0.current --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/8000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopro ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/4000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopro ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| hwpod-other |  | 0 | `hwpod io-probe inspect main41.ai0.current --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.io-probe.inspect", "status": "succeeded", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/c ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace --help --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517-641c94 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.workspace.help", "status": "succeeded", "contractVersion": "hwpod-node-ops-v1", "command": "workspace", "subcommand": null, "applyPatchEx ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git rev-parse HEAD --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20260614052517- ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| hwpod-other |  | 0 | `hwpod cmd git -C projects/71-00075-11 rev-parse HEAD --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprob ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/71-00075-11/FirmWare/APP/driver/aout.c --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-7 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace cat projects/71-00075-11/FirmWare/APP/user_config.h --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-7 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/4000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopro ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/12000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopr ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/20000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopr ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| board-comm |  | 0 | `hwpod board-comm jrpctcp put hardware/ao/current/4000 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-iopro ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| job-status |  | 0 | `hwpod job status 20260614_133010_6556c51f --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| job-status |  | 0 | `hwpod job status 20260614_133010_6556c51f --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| job-status |  | 0 | `hwpod job status 20260614_133114_9274c252 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
| job-status |  | 0 | `hwpod job status 20260614_133114_9274c252 --hwpod-id constart-71freq-c --workspace-path "F:\Work\ConStart\.worktree\caserun-constart-71freq-ao-ioprobe-repair-20 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "/home/agentrun/workspaces/gitbundle-bd8af3b3e5f52f99/workspace/tools/hwpod-specs/constart-71 ... clipped ... |
