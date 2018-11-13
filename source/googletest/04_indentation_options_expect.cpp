/*
  本文件的样本代码来自于astyle.html中的Indentation Options部分

  1. 不使用--indent-classes，class代码块不需要统一加缩进；
  2. 使用--indent-modifiers，public、protected和private会有一个空格的缩进；
  3. 不使用--indent-switches，switch代码块不需要统一加缩进；
  4. 使用--indent-cases，case代码块需要统一加一个缩进；
  5. 不使用--indent-namespaces，namespace代码块不需要统一加缩进；
  6. 不使用--indent-after-parens和--indent-continuation，方法和=语句换行的时候，保持参数对齐。
  7. 不使用--indent-labels，建议尽量避免使用goto语句；
  8. 使用--indent-preproc-block，宏嵌套的时候需要缩进，以提高可读性；
  9. 使用--indent-preproc-define，多行的宏定义需要缩进，以提高可读性；
  10.不使用--indent-preproc-cond，编译宏不需要和代码保持一样的缩进；
  11.使用--indent-col1-comments，注释需要和代码保持一样的缩进；
  12.使用--min-conditional-indent=0，if语句换行的时候，保持参数对齐；
  13.因为6.没有使用--indent-continuation，而且12.中min值设为0，所以不需要使用--max-continuation-indent。

  注意：一旦使用了--style=google，就相当于强制使用了2.和12.
*/

// 1. --indent-classes的代码片段
class Foo {
 public:
  Foo();
  virtual ~Foo();
};

// 2. --indent-modifiers的代码片段
class Foo {
 public:
  Foo();
  virtual ~Foo();
};

// 3&4. --indent-switches和--indent-cases的代码片段
void Foo() {
  switch (foo) {
  case 1:
    a += 1;
    break;
  case 2: {
      a += 2;
      break;
    }
  }
}

// 5. --indent-namespaces的代码片段
namespace foospace {

class Foo {
 public:
  Foo();
  virtual ~Foo();
};

}

// 6. --indent-after-parens的代码片段
void Foo(bool bar1,
         bool bar2) {
  isLongFunction(bar1,
                 bar2);

  isLongVariable = foo1
                   || foo2;
}

// 函数名很长的时候，建议第一个参数就换行
void Foooooooooooooooooooo(
  bool bar1, // param1
  bool bar2  // param2
) {
  // 函数名很长的时候，建议第一个参数就换行
  isLongVariable = isLongLongLongLongFunction(
                     bar1,
                     bar2);

  // 参数后面需要加注释的时候，建议第一个参数就换行
  HWND hWnd = ::CreateWindow(
                wcx.lpszClassName,  // name of window class
                NULL,       // title-bar string
                0,          // top-level window
                0,          // default horizontal position
                0,          // default vertical position
                0,          // default width
                0,          // default height
                HWND_MESSAGE,   // message window
                NULL,       // use class menu
                wcx.hInstance,    // handle to application instance
                NULL);        // no window-creation data

  // 参数很多的时候，根据实际选择换行的位置
  fooFunction(foobar1, foobar2, foobar3,
              foobar4, foobar5, foobar6, foobar7);
}

// 7. --indent-labels的代码片段
void Foo() {
  while (isFoo) {
    if (isFoo) {
      goto error;
    }
error:
    isFoo = false;
  }
}

// 8. --indent-preproc-block的代码片段
#ifdef _WIN32
  #include <windows.h>
  #ifndef NO_EXPORT
    #define EXPORT
  #endif
#endif

// 9. indent-preproc-define的代码片段
#define Is_Bar(arg,a,b) \
  (Is_Foo((arg), (a)) \
   || Is_Foo((arg), (b)))

// 10.--indent-preproc-cond的代码片段
void Foo() {
  isFoo = true;
#ifdef UNICODE
  text = wideBuff;
#else
  text = buff;
#endif
}

// 11.--indent-col1-comments的代码片段
void Foo() {
  // comment
  if (isFoo) {
    bar();
  }
}

// 12.--min-conditional-indent的代码片段
void Foo() {
  // setting makes this non-braced code less clear
  if (a < b
      || c > d) {
    foo++;
  }

  // but makes this braced code clearer
  if (a < b
      || c > d) {
    foo++;
  }
}

// 13.--max-continuation-indent的代码片段
int fooArray[] = { red,
                   green,
                   blue
                 };

fooFunction(barArg1,
            barArg2,
            barArg3);
