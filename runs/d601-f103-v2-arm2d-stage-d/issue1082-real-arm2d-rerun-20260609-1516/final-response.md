# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-stage-d
- runId: issue1082-real-arm2d-rerun-20260609-1516
- traceId: trc_case_d601-f103-v2-arm2d-stage-d_e1de4587de0d43a3bb2203200f1c605f
- present: false

finalResponse=null

reasonCode: final_response_missing
status: canceled
terminalStatus: cancelled
naturalEnd: true
timedOut: false
agentResultStatus: canceled
agentRunStatus: claimed
commandState: cancelled

reason: finalResponse=null; no authoritative final assistant response was returned by the trace/result payload

## Terminal/Error Rows
- **15:16:24 total=00:00:09 fail agentrun:error:backend-failed**

```text
AgentRun error
```

- **15:16:25 total=00:00:10 fail agentrun:error:backend-failed**

```text
AgentRun error
```

- **15:30:52 total=00:14:37 fail agentrun:cancel:canceled**

```text
HWLAB forwarded cancel to AgentRun command cancel API.
```

- **15:30:52 total=00:14:37 fail agentrun:terminal:cancelled**

```text
cancel requested
```

- **15:30:52 total=00:14:37 fail agentrun:result:canceled**

```text
cancel requested
```
