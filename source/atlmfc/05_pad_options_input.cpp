/*
本文件的样本代码来自于astyle.html中的Padding Options部分

1. 不使用--break-blocks，避免引入多余的空行；
2. 使用--pad-oper，在操作符前后加空格；
3. 根据文档，使用了--pad-oper就不需要使用--pad-comma了；
4. 小括号内外不需要自动加空格，因此：
    4.1 不使用--pad-paren；
    4.2 不使用--pad-paren-out；
    4.3 不使用--pad-first-paren-out；
    4.4 不使用--pad-paren-in。
5. 使用--pad-header，if、for和while后面自动加空格；
6. 使用--unpad-paren，删除括号内多余的空格；
7. 不使用--delete-empty-lines，避免破坏代码的段落关系；
8. 不使用--fill-empty-lines，没有必要这么做；
9. 使用--align-pointer=type，指针声明中的*靠近类型；
10.使用--align-reference=type，引用声明中的&靠近类型；
*/

// 1. --break-blocks的代码片段
isFoo = true;
if (isFoo) {
    bar();
} else {
    anotherBar();
}
isBar = false;

// 2. --pad-oper的代码片段
if (foo==2)
	a=bar((b-c)*a,d--);

// 3. --pad-comma的代码片段
if (isFoo(a,b))
	bar(a,b);

// 4.1 --pad-paren的代码片段
if ( isFoo ( ( a+2 ), b ) )
    bar ( a, b );

// 4.2 --pad-paren-out的代码片段
if (isFoo ( (a+2), b) )
    bar (a, b);

// 4.3 --pad-first-paren-out的代码片段
if (isFoo ((a+2), b))
    bar (a, b);

// 4.4 --pad-paren-in的代码片段
if ( isFoo( ( a+2 ), b ) )
    bar( a, b );

// 5. --pad-header的代码片段
if(isFoo((a+2), b))
	bar(a,b);

// 6. --unpad-paren的代码片段
if ( isFoo( ( a+2 ), b ) )
    bar( a, b );

// 7. --delete-empty-lines的代码片段
void Foo()
{

    foo1 = 1;

    foo2 = 2;

}

// 9. --align-pointer=type的代码片段
int * foo()
{
    char * foo1 = NULL;
    return foo1;
}

// 10.--align-reference=type的代码片段
char & foo2;
