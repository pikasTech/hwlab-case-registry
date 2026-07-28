# CaseRun Final Response

- caseId: d601-vm-vexpress-a9-qemu-gui-arm2d-binocular-eyes-pfb-fix
- runId: run_arm2d_binocular_eyes_pfb_fix_l1_20260728_13
- traceId: trc_harnessrl_d6d2b7c3b0b4914116d7349f
- present: true

已完成四次 `spin_zoom_widget_show` 参数修正并核对：

- 左右 socket：`(ptTile, NULL, &tLeft/RightPivot, 255)`
- 左右 eyeball：`(ptTile, &tLeft/RightEyeBallRegion, &tLeft/RightPivot, 255)`
- 两个独立 eyeball region 与 PFB 作用域均保留。

修复后串行执行 `hwpod build`，但构建命令持续无输出、未返回退出码；因此无法如实报告成功构建。
