// -break-closing-braces ��ʹ��
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

// --break-elseifs ��ʹ��
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
	bar2;
}

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

// --break-one-line-headers if, while, else���棬������������ִ������һ��
// --add-braces һ�е�ִ������Զ�����{}
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

if (isFoo)
{
	isFoo = false;
}

// --add-one-line-braces ��ʹ��
// --remove-braces ��ʹ��

// --keep-one-line-blocks ��ʹ��
if (isFoo)
{
	isFoo = false;
	cout << isFoo << endl;
}

// --keep-one-line-statements ��ʹ��
if (isFoo)
{
	isFoo = false;
	cout << isFoo << endl;
}

// --convert-tabs �������ȫ��ʹ�ÿո����Tab���Ǿ��ð�

// --close-templates ��ʹ��
Stack< int, List< int > > stack1;
Stack< int, List< int >> stack1;

// --remove-comment-prefix ��*��ͷ��ע�ͣ�ȥ��*
/*
    comment line 1
    comment line 2
*/
