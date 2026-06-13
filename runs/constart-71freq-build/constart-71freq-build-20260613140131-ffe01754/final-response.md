# CaseRun Final Response

- caseId: constart-71freq-build
- runId: constart-71freq-build-20260613140131-ffe01754
- traceId: trc_case_constart-71freq-build_1c92c0aa29f149d7a3e257b3c9b1d254
- present: true

BLOCKER：当前 CaseRun runtime registry 找不到指定 HWPOD。

已按给定参数执行：

- `hwpod-ctl spec validate`: 失败，`hwpod_id_not_found`
- `hwpod inspect`: 失败，`hwpod_id_not_found`
- `hwpod build`: 失败，`hwpod_id_not_found`

错误中的 HWPOD id 是 `constart-71freq-c`，runtime endpoint 是 `http://hwlab-cloud-api.hwlab-v02.svc.cluster.local:6667`。由于 HWPOD 未注册，无法通过标准入口确认 `subjectWorkspacePath`、`projectRootPath` 或 submodule HEAD，也无法启动编译 job。

编译结果：

- job id：未生成
- returnCode：未生成；`hwpod build` 命令进程退出码为 `1`
- warningCount：未生成
- artifact 路径：未生成

未修改源码，未下载，未访问串口或 board-comm。
