# CaseRun Final Response

- caseId: constart-71freq-build
- runId: constart-71freq-build-20260613125409-793beb3b
- traceId: trc_case_constart-71freq-build_18477133e5cd4822827728efd3e6449a
- present: false

finalResponse=null

reasonCode: final_response_missing
status: result
terminalStatus: failed
naturalEnd: true
timedOut: false
agentResultStatus: result
agentRunStatus: claimed
commandState: failed

reason: finalResponse=null; no authoritative final assistant response was returned by the trace/result payload

## Terminal/Error Rows
- **12:55:05 total=00:00:32 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **12:55:13 total=00:00:39 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **12:55:22 total=00:00:48 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **12:55:22 total=00:00:48 fail agentrun:terminal:failed**

```text
unexpected status 502 Bad Gateway: upstream stream error: Insufficient Balance, url: http://hwlab-deepseek-proxy.hwlab-v02.svc.cluster.local:4000/v1/responses
```

- **12:55:22 total=00:00:48 fail agentrun:result:failed**

```text
unexpected status 502 Bad Gateway: upstream stream error: Insufficient Balance, url: http://hwlab-deepseek-proxy.hwlab-v02.svc.cluster.local:4000/v1/responses
```
