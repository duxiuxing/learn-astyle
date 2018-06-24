// --indent-classes ��ʹ��
class Foo
{
public:
  Foo();
  virtual ~Foo();
};

// --indent-modifiers ��ʹ��
class Foo
{
public:
  Foo();
  virtual ~Foo();
};

// --indent-switches ��ʹ��
// --indent-cases case�������µĴ���Ҫ����
switch ( foo )
{
case 1:
  a += 1;
  break;
case 2:
  {
    a += 2;
    break;
  }
}

// --indent-namespaces ��ʹ��
namespace foospace {

class Foo
{
public:
  Foo();
  virtual ~Foo();
};

}

// --indent-after-parens ��������������ж��������е�ʱ��Ҫ����
void Foo( bool bar1,
  bool bar2 )
{
  isLongFunction( bar1,
    bar2 );

  isLongVariable = foo1
    || foo2;
}

// --indent-after-parens ��������ʱ�򣬶�������������н�����ôд
void Foo2(
  bool bar1, // param1
  bool bar2  // param2
)
{
  // --indent-after-parens �ڵ��õ�ʱ�򣬶�������������н�����ôд
  isLongVariable = isLongFunction( bar1,
      bar2 );
}

// --indent-continuation ��ʹ��
// --indent-labels ��ʹ��

// --indent-preproc-block ��Ƕ�׵�ʱ��Ҫ����
#ifdef _WIN32
  #include <windows.h>
  #ifndef NO_EXPORT
    #define EXPORT
  #endif
#endif

// --indent-preproc-define �����Ҫ����
#define Is_Bar(arg,a,b) \
  (Is_Foo((arg), (a)) \
    || Is_Foo((arg), (b)))

// --indent-preproc-cond ����겻����
void Foo()
{
  isFoo = true;
#ifdef UNICODE
  text = wideBuff;
#else
  text = buff;
#endif
}

// --indent-col1-comments ע�����������
void Foo()
{
  // comment
  if ( isFoo )
  {
    bar();
  }
}

// --min-conditional-indent ��ʹ��
// --max-continuation-indent ��ʹ��

// ��������������ôд
fooArray[] =
{
  red,
  green,
  blue
};

// ö������������ôд
enum COLOR
{
  red,
  green,
  blue
};
