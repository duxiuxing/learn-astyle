// --indent-classes 不使用
class Foo
{
public:
  Foo();
  virtual ~Foo();
};

// --indent-modifiers 不使用
class Foo
{
public:
  Foo();
  virtual ~Foo();
};

// --indent-switches 不使用
// --indent-cases case作用域下的代码要缩进
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

// --indent-namespaces 不使用
namespace foospace {

class Foo
{
public:
  Foo();
  virtual ~Foo();
};

}

// --indent-after-parens 多个方法参数和判断条件分行的时候要缩进
void Foo( bool bar1,
          bool bar2 )
{
  isLongFunction( bar1,
                  bar2 );

  isLongVariable = foo1
                   || foo2;
}

// --indent-after-parens 在声明的时候，多个方法参数分行建议这么写
void Foo2(
  bool bar1, // param1
  bool bar2  // param2
)
{
  // --indent-after-parens 在调用的时候，多个方法参数分行建议这么写
  isLongVariable = isLongFunction( bar1,
                                   bar2 );
}

// --indent-continuation 不使用
// --indent-labels 不使用

// --indent-preproc-block 宏嵌套的时候要缩进
#ifdef _WIN32
  #include <windows.h>
  #ifndef NO_EXPORT
    #define EXPORT
  #endif
#endif

// --indent-preproc-define 代码宏要缩进
#define Is_Bar(arg,a,b) \
  (Is_Foo((arg), (a)) \
   || Is_Foo((arg), (b)))

// --indent-preproc-cond 编译宏不缩进
void Foo()
{
  isFoo = true;
#ifdef UNICODE
  text = wideBuff;
#else
  text = buff;
#endif
}

// --indent-col1-comments 注释随段落缩进
void Foo()
{
  // comment
  if ( isFoo )
  {
    bar();
  }
}

// --min-conditional-indent 不使用
// --max-continuation-indent 不使用

// 数组声明建议这么写
fooArray[] =
{
  red,
  green,
  blue
};

// 枚举声明建议这么写
enum COLOR
{
  red,
  green,
  blue
};
