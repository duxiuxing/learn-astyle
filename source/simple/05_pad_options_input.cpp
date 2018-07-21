// --break-blocks 不使用

// --pad-oper 操作符前后加空格
if (foo==2)
	a=bar((b-c)*a,d--);

// --pad-comma 不使用
if (isFoo(a,b))
	bar(a,b);

// --pad-paren 括号内外加空格，不使用
// --pad-paren-out 仅括号外加空格，不使用
// --pad-first-paren-out 仅第一层括号外加空格，不使用
// --pad-paren-in 仅括号内加空格，不使用

// --pad-header if, for, while后面加空格
if(isFoo((a+2), b))
	bar(a,b);

// --unpad-paren 删除括号内多余的空格
if ( isFoo( ( a+2 ), b ) )
    bar( a, b );

// --delete-empty-lines 不使用

// --align-pointer=name
// --align-reference=name
char * foo1;
char & foo2;

int* foo()
{
	bar(a, b);
}
