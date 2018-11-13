/*
    本文件的样本代码来自于astyle.html中的Brace Style Options部分

    使用--style=allman和--add-brackets来控制大括号的排版，即：
    1. {新起一行；
    2. if、for和while后面的作用域都加大括号
*/

// allman style的代码片段
int Foo(bool isBar)
{
    if (isBar)
    {
        bar();
        return 1;
    }
    else
    {
        return 0;
    }
}

// java style的代码片段
int Foo(bool isBar)
{
    if (isBar)
    {
        bar();
        return 1;
    }
    else
    {
        return 0;
    }
}

// google style的代码片段
int Foo(bool isBar)
{
    if (isBar)
    {
        bar();
        return 1;
    }
    else
    {
        return 0;
    }
}

// 空函数的{}可以在一行，且{不用新起一行
int Foo() {}

// 单行的枚举定义
enum { IDD = IDD_FOO };

// 多行的枚举定义
enum COLOR
{
    red,
    green,
    blue
};

// 数组
int fooArray[] =
{
    red,
    green,
    blue
};
