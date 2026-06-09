# HWPOD CaseRun d601-f103-v2-arm2d-integration

- runId: issue1032-applypatch-final4-20260609053900
- status: recorded
- autoEvaluation: false
- compileOnly: true
- subjectRepoLocalPath: F:\Work\HWLAB-CASE-F103
- subjectCommitId: 14a414da470013914b2a19229c36f2e9f8e2da4f
- subjectWorktreePath: F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900
- agentTraceId: trc_case_d601-f103-v2-arm2d-integration_47950eb828814adfb44cb0c86967cb1d
- agentSessionId: ses_ef1c806d-e603-407e-b276-0938177835ed
- traceLookupStrategy: id_plus_existing_cli
- traceCommand: hwlab-cli client agent trace trc_case_d601-f103-v2-arm2d-integration_47950eb828814adfb44cb0c86967cb1d --render web
- resultCommand: hwlab-cli client agent result trc_case_d601-f103-v2-arm2d-integration_47950eb828814adfb44cb0c86967cb1d
- inspectCommand: hwlab-cli client agent inspect --trace-id trc_case_d601-f103-v2-arm2d-integration_47950eb828814adfb44cb0c86967cb1d
- agentTraceCommandCount: 30
- agentTraceHwpodCommandCount: 23
- agentTraceHwpodBuildCommandCount: 1
- agentStageCommandCount: 23
- agentStageKinds: spec-validate, workspace-edit, build, hwpod-other
- diffPatchPath: /root/hwlab-v02/.state/hwlab-cli/caserun/issue1032-applypatch-final4-20260609053900/agent-diff.patch
- runnerHwpodSource: case-run-runner-post-agent-compile-check
- hwpodExitCode: 0
- agentBuildJobIds: 20260609_134232_43ee238d
- postAgentCompileJobId: 20260609_134304_b7f9b10a
- buildJobRelationship: agent-build-observed-plus-runner-post-agent-check
- jobId: 20260609_134304_b7f9b10a
- runnerPostAgentCompileCheck: recorded

## Agent HWPOD Raw Steps

| Step | Status | Exit | Command | Raw detail |
|---|---:|---:|---|---|
| spec-validate |  | 0 | `hwpod-ctl spec validate --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900` | stdout: { "ok": true, "action": "hwpod-ctl.spec.validate", "status": "succeeded", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-veri ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" --re ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| build |  | 0 | `hwpod build --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| workspace-edit |  | 0 | `hwpod workspace apply-patch --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" --re ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: commandExecution completed: /bin/sh -lc "hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path \"F:\\Work\\HWLAB-CASE-F103\\.worktree\\caserun-issue1032-applypatch- ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: 86: "content": "/*\r\n * Copyright (C) 2022 Arm Limited or its affiliates. All rights reserved.\r\n *\r\n * SPDX-License-Identifier: Apache-2.0\r\n *\r\n * Licensed under t ... clipped ... |
| hwpod-other |  | 0 | `hwpod job status 20260609_134232_43ee238d --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-202606 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "Middleware ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "Projects/0 ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 1 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "Middleware ... clipped ...` | stdout: { "ok": false, "action": "hwpod-cli.invoke", "status": "failed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-spec ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
| hwpod-other |  | 0 | `hwpod workspace read --hwpod-id d601-f103-v2 --workspace-path "F:\Work\HWLAB-CASE-F103\.worktree\caserun-issue1032-applypatch-final4-20260609053900" "projects/0 ... clipped ...` | stdout: { "ok": true, "action": "hwpod-cli.invoke", "status": "completed", "specPath": "hwpod://d601-f103-v2", "hwpodId": "d601-f103-v2", "specAuthority": "preinstalled-verified-sp ... clipped ... |
