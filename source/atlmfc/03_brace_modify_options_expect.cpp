// --attach-namespaces namespace的{不需要新起一行
namespace tencent {
namespace mig {

// --attach-classes 不使用
class FooClass
{
public:
	// --attach-inlines 不使用
	FooClass()
	{
		this->foo = 0;
	}

	virtual ~FooClass() {} // 空方法的}不需要新起一行

protected:
	int foo;
};

// --attach-classes 不使用
class BarClass
{
public:
	// --attach-inlines 不使用
	BarClass()
	{
		this->foo = 0;
	}

	virtual ~BarClass()
	{} // 空方法的}不需要新起一行

protected:
	int foo;
};

}
}

// --attach-extern-c extern "C"的{不需要新起一行
#ifdef __cplusplus
extern "C" {
#endif

void Foo();

#ifdef __cplusplus
}
#endif

// --attach-closing-while do...while语句中，while和}放一行
do
{
	bar();
	++x;
} while (x == 1);
