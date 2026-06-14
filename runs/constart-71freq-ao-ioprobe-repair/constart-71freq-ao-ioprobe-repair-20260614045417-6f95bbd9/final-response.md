# CaseRun Final Response

- caseId: constart-71freq-ao-ioprobe-repair
- runId: constart-71freq-ao-ioprobe-repair-20260614045417-6f95bbd9
- traceId: trc_case_constart-71freq-ao-ioprobe-repair_8094dbca70b4404e870228deb6592202
- present: false

finalResponse=null

reasonCode: agent_task_timeout
status: timeout
terminalStatus: running
naturalEnd: false
timedOut: true
timeoutMs: 900000
agentResultStatus: failed
agentRunStatus: claimed
commandState: acknowledged

reason: CaseRun agent polling timed out after 900000ms; result status=failed, AgentRun runStatus=claimed, commandState=acknowledged at archive time, so no authoritative final assistant response was returned.

## Terminal/Error Rows
- **04:59:26 total=00:04:45 fail agentrun:error:provider-stream-disconnected**

```text
AgentRun error
```

- **05:10:17 total=00:15:36 fail agentrun:cancel:canceled**

```text
HWLAB forwarded cancel to AgentRun command cancel API.
```

- **05:10:18 total=00:15:37 fail agentrun:terminal:cancelled**

```text
cancel requested
```
