/*
本文件的样本代码来自于astyle.html中的Brace Modify Options部分

1. 使用--attach-namespaces，namespace的{不需要新起一行，{}内的代码缩进不受影响；
2. 不使用--attach-classes和--attach-inlines，class和inline函数的{需要新起一行；
3. 使用--attach-extern-c，extern "C"的{不需要新起一行，{}内的代码缩进不受影响；
4. 使用--attach-closing-while，把do...while语句中的while和}放一行。
*/

// 1&2. namespace、class和inline的代码片段
namespace tencent
{
	namespace csig
	{

		class FooClass {
		public:
			FooClass() {
				this->foo = 0;
			}

			virtual ~FooClass()	{}

		protected:
			int foo;
		};

		class BarClass
		{
		public:
			BarClass()
			{
				this->foo = 0;
			}

			virtual ~BarClass()
			{}

		protected:
			int foo;
		};

	} // namespace csig
} // namespace tencent

// 3. --attach-extern-c的代码片段
#ifdef __cplusplus
extern "C"
{
#endif

	void Foo();

#ifdef __cplusplus
}	
#endif

// 4. --attach-closing-while的代码片段
do
{
	bar();
	++x;
}
while (x == 1);
