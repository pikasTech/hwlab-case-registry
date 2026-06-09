# HWPOD CaseRun d601-f103-v2-arm2d-stage-d

- runId: issue1082-real-arm2d-rerun2-20260609-1533
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 76bce7c2d73b687473223bbbdebc7d69124ebac6
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rerun2-20260609-1533
- agentTraceId: trc_case_d601-f103-v2-arm2d-stage-d_5512303117b748a9b479852691b4f35e
- agentSessionId: ses_5d76bcd4-8598-46d7-a927-b640a5bf78e6
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-stage-d_5512303117b748a9b479852691b4f35e --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-stage-d_5512303117b748a9b479852691b4f35e
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-stage-d_5512303117b748a9b479852691b4f35e
- agentTraceCommandCount: 1
- agentTraceHwpodCommandCount: 1
- agentTraceHwpodBuildCommandCount: 0
- agentStageCommandCount: 1
- agentStageKinds: spec-validate
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1082-real-arm2d-rerun2-20260609-1533/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 
- agentReportedBuildJobId: 
- agentReportedReturnCode: 
- agentReportedWarningCount: 
- postAgentCompileJobId: 20260609_233924_f6865a31
- runnerPostAgentCompileReturnCode: 0
- runnerPostAgentCompileWarningCount: 0
- buildJobRelationship: runner-post-agent-check-only
- jobId: 20260609_233924_f6865a31
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1082-real-arm2d-rerun2-20260609-1533` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
