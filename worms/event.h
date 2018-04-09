#ifndef EVENT_H
#define EVENT_H

#include <Windows.h>
#include<mmsystem.h>
#pragma comment(lib, "Winmm.lib")
// 窗体过程函数
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


// 初始化
VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam);

//双缓冲绘制
VOID Render(HWND hWnd);
VOID Render_Start(HWND hWnd);//绘制游戏开始界面
VOID Render_Game(HWND hWnd);//绘制游戏界面
VOID Render_Choose(HWND hWnd);//选图
VOID Render_Help(HWND hWnd);
VOID Render_Ending(HWND hWnd);
VOID Render_Game2(HWND hWnd);
VOID Render_ChooseHero(HWND hWnd);
VOID Render_ChooseHero2(HWND hWnd);
VOID Render_MadMode(HWND hWnd);
VOID Render_MadModeMap1(HWND hWnd);
VOID Render_ChooseLuanDou(HWND hWnd);
VOID Render_LuanDou(HWND hWnd);
VOID Render_Help2(HWND hWnd);
//定时器事件
VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam);
VOID WindUpdate();
//hero更新
VOID Sound();
VOID HeroUpdate();
VOID LimitUpdate();
VOID TurnUpdate();
VOID Hero2Update();
VOID BulletUpdate();
VOID BoomUpdate();
VOID MedUpdate();
//地形更新
VOID TerrianUpdate();
VOID BloodUpdate();
//游戏状态更新
VOID GameStatusUpdate();
VOID AngleUpdate();
//判断是否点击按钮
BOOL ButtonClicked(POINT, RECT);
BOOL PlaySound(LPCSTR pszSound, HMODULE hmod,DWORD fdwSound);

//键盘按下事件处理
VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//键盘松开事件处理
VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam);

//左鼠标点击事件
VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

#endif // !EVENT_H
