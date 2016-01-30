#include <Windows.h>

//#define WINAPT _stdcall 以windows兼容的方式产生机器指令
//#define CALLBACK _stdcall

int WINAPI WinMain(HINSTANCE hInstance, //当前实例句柄
	HINSTANCE hPrevInstance,//当前实例的前一个实例句柄 win32默认NULL
	LPSTR lpCmdLine, //命令行参数
	int nCmdShow)//指定窗口程序如何显示，最大化最小化还是隐藏等等
{
	/*
		MessageBox(HWND hWnd, 显示的消息框所属消息窗口的句柄 NULL->从属桌面
		LPCTSTR lpText, 消息的内容
		LPCTSTR lpCaption,标题内容
		UINT uType 消息窗口需要什么样的样式)
	*/
	MessageBox(NULL, L"hello world!", L"first project", 0);
	return 0;
}