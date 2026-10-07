# Arm-2D 上游来源

- 仓库：`https://github.com/ARM-software/Arm-2D.git`。
- 分支：`develop`。
- 提交：`9439667a9055df47caf948b16a3865bd63820ac6`。
- 上游版本标识：`1.3.0-dev`；分支可移动，复现以提交为准。
- 许可：Apache-2.0，见 `LICENSE`。
- 保留原文的范围：Library、Helper、Basic 场景、所需控件头和 DigitsFont 生成源码。
- 数学支持取自同提交的 `examples/[template][pc][vscode]/platform/math`。
- 省略未使用的原始图片和其他完整 demo；不改写上游 API。
- Cortex-A9/Newlib 的裸机适配位于项目 `src/`，不放入上游目录。
