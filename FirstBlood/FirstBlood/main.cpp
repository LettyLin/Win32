#include <Windows.h>
#pragma comment(lib, "winmm.lib")//���Ӱ���playSound�Ŀ��ļ�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	PlaySound(L"firstblood.wav", NULL, SND_FILENAME | SND_ASYNC);
	MessageBox(NULL, L"��ã���Ϸ����", L"firstblood!",0);
	return 0;
}