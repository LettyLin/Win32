#include <Windows.h>

//#define WINAPT _stdcall ��windows���ݵķ�ʽ��������ָ��
//#define CALLBACK _stdcall

int WINAPI WinMain(HINSTANCE hInstance, //��ǰʵ�����
	HINSTANCE hPrevInstance,//��ǰʵ����ǰһ��ʵ����� win32Ĭ��NULL
	LPSTR lpCmdLine, //�����в���
	int nCmdShow)//ָ�����ڳ��������ʾ�������С���������صȵ�
{
	/*
		MessageBox(HWND hWnd, ��ʾ����Ϣ��������Ϣ���ڵľ�� NULL->��������
		LPCTSTR lpText, ��Ϣ������
		LPCTSTR lpCaption,��������
		UINT uType ��Ϣ������Ҫʲô������ʽ)
	*/
	MessageBox(NULL, L"hello world!", L"first project", 0);
	return 0;
}