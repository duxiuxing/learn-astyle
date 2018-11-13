/*
本文件的样本代码来自于astyle.html中的Formatting Options部分

1. 不使用--break-closing-braces，验证过用不用效果都一样；
2. 不使用--break-elseifs，避免增加换行和缩进；
3. 使用--break-one-line-headers，不把if、while和else里面的条件代码和执行代码放一行；
4. 不使用--add-braces，验证过用不用效果都一样；：
5. 不使用--add-one-line-braces，避免破坏代码的段落关系；
6. 不使用--remove-braces，避免破坏代码的段落关系；
7. 不使用--break-return-type和--attach-return-type，没有必要要求统一；
8. 使用--keep-one-line-blocks，避免破坏代码的段落关系；
9. 使用--keep-one-line-statements，避免破坏代码的段落关系；
10.使用--convert-tabs，这样一来，代码中所有的Tab都会转成空格；
11.不使用--close-templates，没有必要要求统一；
12.使用--remove-comment-prefix，有助于优化块注释的排版；
13.不使用--max-code-length和--break-after-logical，避免破坏代码的段落关系；
14.使用--mode=c，C/C++代码需要使用这个参数。

最后强调一下：执行代码（即使只有一行）都放在{}内是一个好习惯，
如果苹果公司的程序员能贯彻这种做法，可能就不会出现gotofail安全漏洞了。
*/

// 1. --break-closing-braces的代码片段
void Foo(bool isFoo) {
	if (isFoo) {
		bar();
	} else {
		anotherBar();
	}
}

// 2. --break-elseifs的代码片段
if (isFoo) {
	bar();
}
else
	if (isFoo1()) {
		bar1();
	}
	else
		if (isFoo2()) {
			bar2();
		}

// 3. --break-one-line-headers的代码片段
void Foo(bool isFoo)
{
	if (isFoo1) bar1();
	
	if (isFoo2) { bar2(); }
}

// 4. --add-braces的代码片段
if (isFoo)
	isFoo = false;

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

// 10.--convert-tabs的代码片段
struct FooStruct
{
	FooStruct()
	{
		foo1	= 1;
		foo22	= "22";
		foo333	= 3.33;
	}
	int			foo1;
	std::string	foo22;
	float		foo333;
};

// 11.--close-templates的代码片段
Stack< int, List< int > > stack1;
Stack< int, List< int >> stack1;

// 12.--remove-comment-prefix的代码片段
/*
 * comment line 1
 * comment line 2
 */

 /*
	comment line 1
	comment line 2
*/

// 13.--max-code-length和--break-after-logical的代码片段
if (thisVariable1 == thatVariable1 || thisVariable2 == thatVariable2 || thisVariable3 == thatVariable3)
	bar();

if (thisVariable1 == thatVariable1
		|| thisVariable2 == thatVariable2
		|| thisVariable3 == thatVariable3)
	bar();

if (thisVariable1 == thatVariable1 ||
		thisVariable2 == thatVariable2 ||
		thisVariable3 == thatVariable3)
	bar();
