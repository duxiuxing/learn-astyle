// --style=allman {����һ��
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

// --style=java
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

// --style=google
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