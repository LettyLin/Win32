#include <Windows.h>
#pragma comment(lib, "winmm.lib")//链接包含playSound的库文件
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	PlaySound(L"firstblood.wav", NULL, SND_FILENAME | SND_ASYNC);
	MessageBox(NULL, L"你好，游戏世界", L"firstblood!",0);
	return 0;
}