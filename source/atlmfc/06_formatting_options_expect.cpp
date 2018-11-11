/*
    本文件的样本代码来自于astyle.html中的Formatting Options部分

    1. 不使用--break-closing-braces，验证过用不用效果都一样；
    2. 不使用--break-elseifs，避免增加换行和缩进；
    3. 使用--break-one-line-headers和--add-braces，目的在于：
    3.1 不把if、while和else里面的条件代码和执行代码放一行；
    3.2 执行代码（即使只有一行）都放在{}内，如果苹果公司的程序员能贯彻这种做法，可能就不会发生gotofail安全漏洞了；
*/

// 1. --break-closing-braces的代码片段
void Foo(bool isFoo)
{
    if (isFoo)
    {
        bar();
    }
    else
    {
        anotherBar();
    }
}

// 2. --break-elseifs的代码片段
if (isFoo)
{
    bar();
}
else if (isFoo1())
{
    bar1();
}
else if (isFoo2())
{
    bar2();
}

// 3. --break-one-line-headers和--add-braces的代码片段
void Foo(bool isFoo)
{
    if (isFoo1)
    {
        bar1();
    }

    if (isFoo2)
    {
        bar2();
    }
}

// 4. --add-braces的代码片段
if (isFoo)
{
    isFoo = false;
}

// 5. --add-one-line-braces的代码片段
if (isFoo)
{ isFoo = false; }

// 7. --break-return-type和--attach-return-type的代码片段
void
Foo(bool isFoo);

// 8. --keep-one-line-blocks的代码片段
if (isFoo)
{ isFoo = false; cout << isFoo << endl; }

// 9. --keep-one-line-statements的代码片段
if (isFoo)
{
    isFoo = false; cout << isFoo << endl;
}

// --convert-tabs 把除了缩进以外的tab都转换成空格
struct FooStruct
{
	FooStruct()
	{
		foo1    = 1;
		foo22   = "22";
		foo333  = 3.33;
	}
	int         foo1;
	std::string foo22;
	float       foo333;
};

// --close-templates 不使用
Stack< int, List< int > > stack1;
Stack< int, List< int >> stack1;

// --remove-comment-prefix 以*开头的注释，去掉*
/*
    comment line 1
    comment line 2
*/
