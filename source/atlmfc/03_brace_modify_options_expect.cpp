// --attach-namespaces namespace��{����Ҫ����һ��
namespace tencent {
namespace mig {

// --attach-classes ��ʹ��
class FooClass
{
public:
	// --attach-inlines ��ʹ��
	FooClass()
	{
		this->foo = 0;
	}

	virtual ~FooClass()
	{} // �շ�����}����Ҫ����һ��

protected:
	int foo;
};

}
}

// --attach-extern-c extern "C"��{����Ҫ����һ��
#ifdef __cplusplus
extern "C" {
#endif

void Foo();

#ifdef __cplusplus
}
#endif

// --attach-closing-while do...while����У�while��}��һ��
do
{
	bar();
	++x;
} while (x == 1);
