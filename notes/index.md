纯 C 特性
- type.restrict-qualifier `restrict`
- type.complex `_Complex` `_Imaginary`
- decl.flexible-array 柔型数组
- decl.vla VLA
- expr.compound-literal 复合字面量
- decl.modifier-in-arr-param 数组形参的 cv 限定、static 修饰
- type.atomic `_Atomic`
- expr.generic `_Generic`
- type.bigint `_BigInt`
- type.decimal-float `_Decimalxx`
- decl.typeof `typeof`


C23 但 C++26 未跟进：
- cpp.embed `#embed`
- support.va-start `va_start` 可省略第二参数


老旧 C 特性
- decl.kr-func-decl 无原型函数声明

其它
- gram.key C++ 关键字

C++ \[diff.iso\]
- expr.comma-decay.c 逗号表达式引发 C 数组退化
- class.volatile-copy-ctor C++ 不允许 volatile 复制
- class.typedef-name-in-mem C++ 不允许成员名为已 typedef 名（无法演示）
