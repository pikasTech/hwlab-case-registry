# CaseRun Final Response

- caseId: d601-f103-v2-arm2d-integration
- runId: d601-f103-v2-arm2d-integration-20260608131320-fb185fb4
- traceId: trc_case_d601-f103-v2-arm2d-integration_810928d3107f4e339df8f64bc6d7f525
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
- **13:14:03 total=00:00:31 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **13:14:10 total=00:00:39 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **13:14:20 total=00:00:48 fail agentrun:error:provider-unavailable**

```text
AgentRun error
```

- **13:14:20 total=00:00:48 fail agentrun:terminal:failed**

```text
unexpected status 502 Bad Gateway: upstream stream error: Insufficient Balance, url: http://hwlab-deepseek-proxy.hwlab-v02.svc.cluster.local:4000/v1/responses
```

- **13:14:20 total=00:00:48 fail agentrun:result:failed**

```text
unexpected status 502 Bad Gateway: upstream stream error: Insufficient Balance, url: http://hwlab-deepseek-proxy.hwlab-v02.svc.cluster.local:4000/v1/responses
```
