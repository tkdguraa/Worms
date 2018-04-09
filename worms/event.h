#ifndef EVENT_H
#define EVENT_H

#include <Windows.h>
#include<mmsystem.h>
#pragma comment(lib, "Winmm.lib")
// ������̺���
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


// ��ʼ��
VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam);

//˫�������
VOID Render(HWND hWnd);
VOID Render_Start(HWND hWnd);//������Ϸ��ʼ����
VOID Render_Game(HWND hWnd);//������Ϸ����
VOID Render_Choose(HWND hWnd);//ѡͼ
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
//��ʱ���¼�
VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam);
VOID WindUpdate();
//hero����
VOID Sound();
VOID HeroUpdate();
VOID LimitUpdate();
VOID TurnUpdate();
VOID Hero2Update();
VOID BulletUpdate();
VOID BoomUpdate();
VOID MedUpdate();
//���θ���
VOID TerrianUpdate();
VOID BloodUpdate();
//��Ϸ״̬����
VOID GameStatusUpdate();
VOID AngleUpdate();
//�ж��Ƿ�����ť
BOOL ButtonClicked(POINT, RECT);
BOOL PlaySound(LPCSTR pszSound, HMODULE hmod,DWORD fdwSound);

//���̰����¼�����
VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

//�����ɿ��¼�����
VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam);

//��������¼�
VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam);

#endif // !EVENT_H
