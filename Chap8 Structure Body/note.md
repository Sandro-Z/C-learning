# 结构体的构建
语法：
```
struct <name>{
    int <property1>;
    char <property2>;
    ......
};//注意最后有分号
```
# 结构体变量的定义
```
struct <类名> <变量1>，<变量2>；
```
或者将变量表append在结构体构建的后面
# 成员（属性）的访问
`<结构体名>.<属性名>`

# 共用体
语法：
```
union <name>{
    <properties......>
};
union <name> a,b,c...;
```
一个时间只能有一个属性有值

# `typedef`定义新类型
`typedef oldtype newtype;`
把原来声明变量的语句中变量变成新类型名即可