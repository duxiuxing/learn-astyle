// --break-blocks ��ʹ��

// --pad-oper ������ǰ��ӿո�
if ( foo == 2 )
{
  a = bar( ( b - c ) * a, d-- );
}

// --pad-comma ��ʹ��
if ( isFoo( a, b ) )
{
  bar( a, b );
}

// --pad-paren ��������ӿո� ��ʹ��
// --pad-paren-out ��������ӿո� ��ʹ��
// --pad-first-paren-out ����һ��������ӿո� ��ʹ��

// --pad-paren-in �������ڼӿո�
if ( isFoo( ( a + 2 ), b ) )
{
  bar( a, b );
}


// --pad-header if, for, while����ӿո�
if ( isFoo( ( a + 2 ), b ) )
{
  bar( a, b );
}

// --unpad-paren ��ʹ��
// --delete-empty-lines ��ʹ��

// --align-pointer=name
// --align-reference=name
char *foo1;
char &foo2;

int *foo()
{
  bar( a, b );
}
