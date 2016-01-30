#include <Windows.h>

//³¬Ç°ÉùÃ÷
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wndClass = { 0 };
	wndClass.cbSize = sizeof(WNDCLASSEX);
	wndClass.cbClsExtra = NULL;
	wndClass.cbWndExtra = NULL;
	wndClass.style = CS_HREDRAW | CS_VREDRAW;
	wndClass.hInstance = hInstance;
	wndClass.lpfnWndProc = WndProc;
	wndClass.hIcon = (HICON)::LoadImage(NULL, L"icon.ico", IMAGE_ICON,
		0, 0, LR_DEFAULTSIZE | LR_LOADFROMFILE);
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.lpszClassName = L"dream";
	wndClass.lpszMenuName = NULL;
	wndClass.hbrBackground = (HBRUSH)GetStockObject(GRAY_BRUSH);

	RegisterClassEx(&wndClass);

	HWND hWnd = CreateWindow(L"dream", L"dialog", WS_OVERLAPPEDWINDOW,
		50, 50, 800, 600, NULL, NULL, hInstance, NULL);

	MoveWindow(hWnd, 50, 50, 800, 600, true);
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	MSG msg = { 0 };
	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	UnregisterClass(L"dream", wndClass.hInstance);
	return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_PRINT:
		ValidateRect(hwnd,NULL);
		break;

	case WM_KEYDOWN:
		if (wParam == VK_ESCAPE)
		{
			DestroyWindow(hwnd);
		}
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, message, wParam, lParam);
	}

	return 0;
}