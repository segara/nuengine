#include <NuEngine.h> //�߰� ��Ŭ��忡 nuengine ���� ����

class Sandbox : public nuengine::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox(){}
};

void main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
	
}
