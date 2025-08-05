# C语言是一种有类型的语言，变量先声明（说明类型）后调用

# 4种基本数据类型
## 整数

char，short，int，long，long long

int，long表达是计算机寄存器字长，会随计算机和编译器有差别

sizeof（char）等于1，short等于2，long long等于8

数据范围：char-128~127，short -32768~32767，
 
声明时前面加上关键字“unsigned”可以将其表达范围扩大一倍，但是不能表达负数 

### 整数的格式化输入输出

只能作为int 或者 long long 输出

%d:int %u:unsigned %ld:long long %lu:unsigned long long

0开头：八进制，0x开头：16进制

* 没有特殊需要，都用int

## 浮点数

float，double，long double

* float：32字长，7位有效数字

* double：64字长，15位有效数字

靠近0的非常小数字无法表达

### 浮点的格式化输入输出
float：scanf %f，printf %f %.<保留小数位数>f

* 注意，float的数后面必须加f后缀，直接写小数是double

double：scanf %lf printf %f

%e：科学计数法输出（只有输出）

* inf：无穷大（非0除以0）整数除以0直接编译不通过

* nan：不存在（0/0）

* 精度问题，整数永远是准确的，浮点不准确

没有特殊需要，浮点数一律用double

## 字符
char，单引号括起来的一个字符（''啥都不括也可以）

字符和其ASCII码一一对应，可以据此计算（类比python中的ord）

%c做IO

%d只能处理int，不能处理char，即：%c可以填入char或int，但是%d只能填入int
## 类型转换
运算符两边出现不一致的类型，会自动转换为表示范围大的类型

`int->float->double`

对于printf，小于int会自动转成int，float则会自动转成double，scanf则需要准确指定变量大小

* 强制类型转换

语法：`(类型)值/变量`,如：
```
(int)3.0
(short)a
```
通常是将大类型转换为小类型，此表达式本身具有一个值，不改变变量值

优先级大于四则运算
## 逻辑

bool

需要`#import <stdbool.h>`才能使用bool，true，false
### 逻辑运算
逻辑量：关系运算和逻辑运算产生，表示是否，只能0或1

！逻辑非，&&逻辑与，||逻辑或

左边能决定值了，就不会进行右边，因此不要把赋值组合进表达式

逗号表达式，运算等级最低（低于赋值），连接两个表达式并且以右边的作为结果（基本上只在for循环中使用，达到同时操作两个变量的作用）
## 指针（后面再写)

## `sizeof()`函数可以输出一个变量或者一个数据类型在内存中占用字节数