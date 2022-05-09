#include <NuEngine.h> //추가 인클루드에 nuengine 폴더 포함

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
