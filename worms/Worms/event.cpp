#include "event.h"
#include "global.h"
#include "item.h"
#include<time.h>
#include<stdlib.h>



int power=0,t=15,j=0,turn=0,touch=0,time1=0,time2=0,time3=0,direction=0,i=0,length,x1,x2,temp=0,flag=0,move=0;
int  windtime=0,judwind=0,wind=0,hp1=30,hp2=30, UpDn=0,jud=0,boom=-5,boom1=3,away1=0,away=0,boomtimer=0,ex=0,show=0,win=0,pause=0,base,LorR=0,bye=0,bye2=0,LorR2=0,bluenum=1,greennum=1;
int rknum1=2,rknum2=2,rec1=0,rec2=0,mednum1=2,mednum2=2,showrocket1=0,showrocket2=0,comerk1=0,comerk2=0,judrocket=0,judrocket2=0,ioi=0,judmed=0,showmed=1,onlyrk=0;
int choko=0,temphp=0,judhp=0,high=0,TT=1,morning=0,kk=0;


	
VOID Init(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	mciSendString(L"open \"worms\\res\\ui\\DJ OKAWARI - Flower Dance (花之舞).wav\" ",NULL,0,NULL);
	mciSendString(L"play \"worms\\res\\ui\\DJ OKAWARI - Flower Dance (花之舞).wav\" ",NULL,0,NULL);
	
	m_hMap2Bmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MAP2));
	m_hLuanDouBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_LUANDOU));
	m_hMode3Bmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MODE3));
	m_hSunBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_SUN));
	m_hLuanDouBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_LUANDOU));
	m_hDaumBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_NEXTPAGE));
	m_hMoonBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MOON));
	m_hIntroduction2Bmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_INTRODUCTION2));

	m_hMadChoose1Bmp =LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MADCHOOSE1));
	m_hWallBmp =LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_WALL));
	m_hChoose1Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_CHOOSE1));

	m_hMedBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MED));
	m_hMed2Bmp =LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MED2));
	m_hChoose2Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_CHOOSE2));
	
	m_hHeroButtonBmp =LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HEROBUTTON));
	// 加载背景位图
	m_hBackgroundBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BACKGROUND));
	m_hChoosemapBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_CHOOSEMAP));
	// 加载Hero位图
	
	m_hChooseHeroBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_CHOOSEHERO));
	
	m_hEastBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_EAST));
	m_hWestBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_WEST));
	m_hSouthBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_SOUTH));
	m_hNorthBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_NORTH));

	 m_hHero1PyobonBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO));
	
	  m_hHero2PyobonBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO2));
	  m_hBlueTeamBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BLUETEAM));

	  m_hMode2Bmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MODE2));

	m_hHerolBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO));
	m_hHerorBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HEROR));
	
	m_hHero2RBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO2R));

	m_hHero3RBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO3R));
	m_hHero3LBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO3L));
	m_hHero4RBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO4R));
	m_hHero4LBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO4L));

	m_hRocketBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET));
	m_hRocket2Bmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET2));

	m_hBackground2Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BACKGROUND2));

    m_hBackground3Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BACKGROUND3));

	m_hIntroductionBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_INTRODUCTION));

	m_hHeroButtonBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HEROBUTTON));

	m_hHero2Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO2));
	m_hMed2Bmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MED2));
	
	m_hHero3Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO3R));
	
	m_hRocketLBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKETL));
	m_hRocket2RBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET2R));

	m_hHero4Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HERO4R));

	m_hBoomBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BOOM));

	m_hgreenwinBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_GREENWIN));
	m_hbluewinBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BLUEWIN));
	
		m_hBulletBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BULLET));
		m_hMed2Bmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MED2));
	
	// 加载开始游戏按钮位图
	m_hGameStartButtonBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_START));

	m_hhelpBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HELP));

		m_hbackBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BACK));
		m_hendingBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ENDING));
		m_hplayBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_PLAY));
		m_hpauseBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_PAUSE));
		m_hbigpauseBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_BIGPAUSE));
		m_hhomeBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_HOME));
		m_hnextBmp = LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_NEXT));
		m_hRocketBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET));
		m_hRocketnumBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKETNUM));
		m_hRocket2numBmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET2NUM));
		m_hRocket2Bmp= LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKET2));
		m_hMapBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_MAP));
		m_hGetRocketBmp=LoadBitmap(((LPCREATESTRUCT)lParam)->hInstance,
		MAKEINTRESOURCE(IDB_ROCKETNUM));
	// 创建英雄
	m_hero = CreateHero(300, 450 - HERO_SIZE_Y, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp, 0, HERO_MAX_FRAME_NUM);
	m_hero2 = CreateHero2(1000, 450 - HERO2_SIZE_Y, HERO2_SIZE_X, HERO2_SIZE_Y, m_hHero2Bmp, 0, HERO2_MAX_FRAME_NUM);
    m_boom = CreateBoom(300, 450 - BOOM_SIZE_Y, BOOM_SIZE_X, BOOM_SIZE_Y, m_hBoomBmp, 0, HERO_MAX_FRAME_NUM);
	m_back = CreateBack(0, 500,60, 60, m_hbackBmp, 0);
	m_bullet = CreateBullet(m_hero.pos.x,m_hero.pos.y,BULLET_SIZE_X, BULLET_SIZE_Y, m_hBulletBmp,0,BULLET_MAX_FRAME_NUM);
	m_rocketnum = CreateRocketnum(50,500,40,40,m_hRocketnumBmp,0);
	m_rocket2num = CreateRocket2num(1100,500,40,40,m_hRocket2numBmp,0);
	m_med = CreateMed(50,550,40,40,m_hMedBmp,0);
	m_medr = CreateMedr(1100,550,40,40,m_hMedBmp,0);
	m_rocket = CreateRocket(m_hero.pos.x,m_hero.pos.y,40, 40, m_hRocketBmp,0,BULLET_MAX_FRAME_NUM);
	m_rocket2 = CreateRocket2(m_hero2.pos.x,m_hero2.pos.y,40, 40, m_hRocket2Bmp,0,BULLET_MAX_FRAME_NUM);
	m_hero2pyobon = CreateHero2Pyobon(0, 300,66, 62, m_hHero2PyobonBmp, 0);
	m_hero1pyobon = CreateHero1Pyobon(100, 300,66, 62, m_hHero1PyobonBmp, 0);

	m_winddir = CreateWinddir(100, 0,100, 100, m_hWinddir, 0);

	m_getrocket = CreateGetRocket(0,50,40,40,m_hRocketnumBmp,0,HERO_MAX_FRAME_NUM);
	m_blueteam = CreateBlueTeam(700,500,100,60,m_hBlueTeamBmp,0);
	m_hero3 = CreateHero3(0, 200,66, 62, m_hHero3Bmp, 0);
	m_hero4 = CreateHero4(100, 200,66, 62, m_hHero4Bmp, 0);
	m_sun = CreateSun(0, 0,60, 60, m_hSunBmp, 0);
	// 创建游戏开始按钮
	m_gameStartButton = CreateGameButton(500, 400, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, m_hGameStartButtonBmp, 0);
	m_mode2 = CreateMode2(500, 470, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, m_hMode2Bmp, 0);
	m_mode3 = CreateMode3(500, 540, GAME_START_BUTTON_SIZE_X, GAME_START_BUTTON_SIZE_Y, m_hMode3Bmp, 0);
	m_herobutton = CreateHeroButton(300, 500, 100, 60, m_hHeroButtonBmp, 0);
	m_choose1 = CreateChoose1(0, 0, CHOOSE_SIZE_X, CHOOSE_SIZE_Y, m_hChoose1Bmp, 0);
	m_choose2 = CreateChoose2(600,0, CHOOSE_SIZE_X, CHOOSE_SIZE_Y, m_hChoose2Bmp, 0);
	m_help = Createhelp(400, 400, HELP_SIZE_X, HELP_SIZE_Y, m_hhelpBmp, 0);
	m_greenwin = CreateGreenwin(200, 0,WIN_SIZE_X, WIN_SIZE_Y, m_hgreenwinBmp, 0);
	m_bluewin = CreateBluewin(200, 0,WIN_SIZE_X, WIN_SIZE_Y, m_hbluewinBmp, 0);
	m_play = CreatePlay(1060, 0,60, 60, m_hplayBmp, 0);
	m_pause = CreatePause(1130, 0,60, 60, m_hpauseBmp, 0);
	m_bigpause = CreateBigPause(300, 200,BIGPAUSE_SIZE_X,BIGPAUSE_SIZE_Y , m_hbigpauseBmp, 0);
	m_next = CreateNext(600,400,BUTTON_SIZE_X,BUTTON_SIZE_Y,m_hnextBmp,0);
	m_home = CreateHome(500,400,BUTTON_SIZE_X,BUTTON_SIZE_Y,m_hhomeBmp,0);
	m_madchoose1 = CreateMadChoose1(0,0,600,300,m_hMadChoose1Bmp,0);
	m_daum = CreateDaum(1100, 0, 60, 60, m_hDaumBmp, 0);
	//设定初始游戏状态
	
	gameStatus.status=0;
	gameStatus.hBmp = m_hBackgroundBmp; 
	gameStatus2.hBmp = m_hBackground2Bmp;
	gameStatus3.hBmp = m_hChoosemapBmp;
	gameStatus4.hBmp = m_hIntroductionBmp;
	gameStatus5.hBmp = m_hendingBmp;
	gameStatus6.hBmp = m_hBackground3Bmp;
	gameStatus7.hBmp = m_hChooseHeroBmp;
	gamestatus9.hBmp = m_hChoosemapBmp;
	gamestatus10.hBmp = m_hMapBmp;
	gamestatus11.hBmp = m_hChoosemapBmp;
	gamestatus12.hBmp = m_hMap2Bmp;
	gamestatus13.hBmp = m_hIntroduction2Bmp;

}

	
VOID Render(HWND hWnd)
{
	//判断游戏状态
	switch(gameStatus.status)
	{
	case 0:
		//绘制开始界面
		Render_Start(hWnd);
		break;
	case 1:
		//游戏界面1
		Render_Game(hWnd);
		break;
	case 2://选图
		Render_Choose(hWnd);
		break;
	case 3://说明
		Render_Help(hWnd);
	case 4://结束
		Render_Ending(hWnd);
	case 5://游戏界面2
		Render_Game2(hWnd);
    case 6://选英雄
		Render_ChooseHero(hWnd);
	case 7:
		Render_ChooseHero2(hWnd);
	case 8://疯狂模式选择页面
		Render_MadMode(hWnd);
	case 9://疯狂模式 图1
		Render_MadModeMap1(hWnd);
	case 10://乱斗模式选择页面
		Render_ChooseLuanDou(hWnd);
	case 11://疯狂模式图1
		Render_LuanDou(hWnd);
	case 12://说明2
		Render_Help2(hWnd);
	default:
		break;
	}
}



VOID Render_Start(HWND hWnd)
{

	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus2.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);            //hdcBuffer上 ， 0，0 最左边上的点， WND是宽和高，hdcbmp画出来，hdcbmp画板的坐标

	// 绘制开始按钮
	SelectObject(hdcBmp, m_gameStartButton.hBmp);
	TransparentBlt(hdcBuffer, m_gameStartButton.pos.x, m_gameStartButton.pos.y, m_gameStartButton.size.cx, m_gameStartButton.size.cy,
		hdcBmp, 0, 0,
		m_gameStartButton.size.cx, m_gameStartButton.size.cy, RGB(255, 255, 255));
	
	SelectObject(hdcBmp, m_mode2.hBmp);
	TransparentBlt(hdcBuffer, m_mode2.pos.x, m_mode2.pos.y, m_mode2.size.cx, m_mode2.size.cy,
		hdcBmp, 0, 0,
		m_mode2.size.cx, m_mode2.size.cy, RGB(255, 255, 255));

	SelectObject(hdcBmp, m_mode3.hBmp);
	TransparentBlt(hdcBuffer, m_mode3.pos.x, m_mode3.pos.y, m_mode3.size.cx, m_mode3.size.cy,
		hdcBmp, 0, 0,
		m_mode3.size.cx, m_mode3.size.cy, RGB(255, 255, 255));

	
	
	SelectObject(hdcBmp, m_herobutton.hBmp);
	TransparentBlt(hdcBuffer, m_herobutton.pos.x, m_herobutton.pos.y, m_herobutton.size.cx, m_herobutton.size.cy,
		hdcBmp, 0, 0,
		m_herobutton.size.cx, m_herobutton.size.cy, RGB(255, 255, 255));
	SelectObject(hdcBmp, m_blueteam.hBmp);
	TransparentBlt(hdcBuffer, m_blueteam.pos.x, m_blueteam.pos.y, m_blueteam.size.cx, m_blueteam.size.cy,
		hdcBmp, 0, 0,
		m_blueteam.size.cx, m_blueteam.size.cy, RGB(255, 255, 255));

	SelectObject(hdcBmp, m_help.hBmp);
	TransparentBlt(hdcBuffer, m_help.pos.x, m_help.pos.y, m_help.size.cx, m_help.size.cy,
		hdcBmp, 0, 0,
		m_help.size.cx, m_help.size.cy, RGB(255, 255, 255));



	TCHAR	szDist[20];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist, _T("beta"));
	TextOut(hdcBuffer, WNDWIDTH /2 , 15, szDist, _tcslen(szDist));
	
	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}


VOID Render_Help(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	
	
	
	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);

	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus4.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);      


	SelectObject(hdcBmp, m_back.hBmp);
	TransparentBlt(hdcBuffer, m_back.pos.x, m_back.pos.y, m_back.size.cx, m_back.size.cy,
		hdcBmp, 0, 0,
		m_back.size.cx, m_back.size.cy, RGB(255, 255, 255));//后退键

	SelectObject(hdcBmp, m_daum.hBmp);
	TransparentBlt(hdcBuffer, m_daum.pos.x, m_daum.pos.y, m_daum.size.cx, m_daum.size.cy,
		hdcBmp, 0, 0,
		m_daum.size.cx, m_daum.size.cy, RGB(255, 255, 255));


BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);
	// 结束绘制
	EndPaint(hWnd, &ps);

}


VOID Render_Choose(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus3.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);            //hdcBuffer上 ， 0，0 最左边上的点， WND是宽和高，hdcbmp画出来，hdcbmp画板的坐标

	// 绘制背景到缓存
	
	SelectObject(hdcBmp, m_choose1.hBmp);
	TransparentBlt(hdcBuffer, m_choose1.pos.x, m_choose1.pos.y, m_choose1.size.cx, m_choose1.size.cy,
		hdcBmp, 0, 0,
		m_choose1.size.cx, m_choose1.size.cy, RGB(255, 255, 255));     
  
	SelectObject(hdcBmp, m_choose2.hBmp);
	TransparentBlt(hdcBuffer, m_choose2.pos.x, m_choose2.pos.y, m_choose2.size.cx, m_choose2.size.cy,
		hdcBmp, 0, 0,
		m_choose2.size.cx, m_choose2.size.cy, RGB(255, 255, 255));     
TCHAR	szDist1[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist1, _T("请选择地图"),t,turn);
	TextOut(hdcBuffer, 800, 15, szDist1, _tcslen(szDist1));




	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);

}


VOID Render_Ending(HWND hWnd)
{
	
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus5.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);            //hdcBuffer上 ， 0，0 最左边上的点， WND是宽和高，hdcbmp画出来，hdcbmp画板的坐标


	if(hp2<=0)
	{
		
	SelectObject(hdcBmp, m_greenwin.hBmp);
	TransparentBlt(hdcBuffer, m_greenwin.pos.x, m_greenwin.pos.y, m_greenwin.size.cx, m_greenwin.size.cy,
		hdcBmp, 0, 0,
		m_greenwin.size.cx, m_greenwin.size.cy, RGB(255, 255, 255));
	}
	
	if(hp1<=0)
	{
		
	SelectObject(hdcBmp, m_bluewin.hBmp);
	TransparentBlt(hdcBuffer, m_bluewin.pos.x, m_bluewin.pos.y, m_bluewin.size.cx, m_bluewin.size.cy,
		hdcBmp, 0, 0,
		m_bluewin.size.cx, m_bluewin.size.cy, RGB(255, 255, 255));
	}
	
	SelectObject(hdcBmp, m_next.hBmp);
	TransparentBlt(hdcBuffer, m_next.pos.x, m_next.pos.y, m_next.size.cx, m_next.size.cy,
		hdcBmp, 0, 0,
		m_next.size.cx, m_next.size.cy, RGB(255, 255, 255));

	SelectObject(hdcBmp, m_home.hBmp);
	TransparentBlt(hdcBuffer, m_home.pos.x, m_home.pos.y, m_home.size.cx, m_home.size.cy,
		hdcBmp, 0, 0,
		m_home.size.cx, m_home.size.cy, RGB(255, 255, 255));


	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_MadMode(HWND hWnd)
{
			PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	
	if(gameStatus.status==8)
		m_madchoose1.hBmp=m_hMadChoose1Bmp;
	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus3.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);          
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,m_madchoose1.hBmp);
	BitBlt(hdcBuffer, 0, 0, 600, 300,
		hdcBmp, 0, 0, SRCCOPY);          



BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_MadModeMap1(HWND hWnd)
{
		PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gamestatus10.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);          
	        

	SelectObject(hdcBmp, m_play.hBmp);
	TransparentBlt(hdcBuffer, m_play.pos.x, m_play.pos.y, m_play.size.cx, m_play.size.cy,
		hdcBmp, 0, 0,
		m_play.size.cx, m_play.size.cy, RGB(255, 255, 255));
	
	
	SelectObject(hdcBmp, m_pause.hBmp);
	TransparentBlt(hdcBuffer, m_pause.pos.x, m_pause.pos.y, m_pause.size.cx, m_pause.size.cy,
		hdcBmp, 0, 0,
		m_pause.size.cx, m_pause.size.cy, RGB(255, 255, 255));
	


	if(wind==0)
		m_winddir.hBmp=m_hEastBmp;
	if(wind==1)
		m_winddir.hBmp=m_hWestBmp;
	if(wind==2)
		m_winddir.hBmp=m_hSouthBmp;
	if(wind==3)
		m_winddir.hBmp=m_hNorthBmp;
	SelectObject(hdcBmp, m_winddir.hBmp);
	TransparentBlt(hdcBuffer, m_winddir.pos.x, m_winddir.pos.y, m_winddir.size.cx, m_winddir.size.cy,
		hdcBmp, 0, 0,
		m_winddir.size.cx, m_winddir.size.cy, RGB(255, 255, 255));


	if(pause==1)
  {
	SelectObject(hdcBmp, m_bigpause.hBmp);
	TransparentBlt(hdcBuffer, m_bigpause.pos.x, m_bigpause.pos.y, m_bigpause.size.cx, m_bigpause.size.cy,
		hdcBmp, 0, 0,
		m_bigpause.size.cx, m_bigpause.size.cy, RGB(255, 255, 255));
	}

	if(touch==1)
	{
	SelectObject(hdcBmp, m_bullet.hBmp);
	TransparentBlt(
		hdcBuffer, m_bullet.pos.x, m_bullet.pos.y,
		m_bullet.size.cx, m_bullet.size.cy,
		hdcBmp, 0, 0, BULLET_SIZE_X ,  BULLET_SIZE_Y,
		RGB(255, 255, 255)	
		);
	}

	if(turn%20<=10)
		m_sun.hBmp=m_hSunBmp;
	else m_sun.hBmp=m_hMoonBmp;
	SelectObject(hdcBmp, m_sun.hBmp);
	TransparentBlt(
		hdcBuffer, m_sun.pos.x, m_sun.pos.y,
		m_sun.size.cx, m_sun.size.cy,
		hdcBmp, 0, 0, 60 ,  60,
		RGB(255, 255, 255)	
		);
	

		SelectObject(hdcBmp, m_getrocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_getrocket.pos.x, m_getrocket.pos.y,
		m_getrocket.size.cx, m_getrocket.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);
	// 绘制Hero到缓存

	if(greennum==1)
{
	if(LorR==0)
	m_hero.hBmp=m_hHerolBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHerorBmp;

}
		if(greennum==2)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero2Bmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero2RBmp;
}
		if(greennum==3)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero3LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero3RBmp;

}
			if(greennum==4)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero4LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero4RBmp;

}

			if(bluenum==1)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHerolBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHerorBmp;
	}

if(bluenum==2)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero2Bmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero2RBmp;
	}
if(bluenum==3)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero3LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero3RBmp;
	}
if(bluenum==4)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero4LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero4RBmp;
	}


	SelectObject(hdcBmp, m_hero.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero.pos.x, m_hero.pos.y,
		m_hero.size.cx, m_hero.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);
   //Hero2	
		SelectObject(hdcBmp, m_hero2.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero2.pos.x, m_hero2.pos.y,
		m_hero2.size.cx, m_hero2.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);

	
		SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH GageBrush = CreateSolidBrush(RGB(200, 0, 0));
	SelectObject(hdcBuffer, GageBrush);
	if(turn%2==0)
	{Gage *gage = &m_gage[0];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	if(turn%2==1)
	{Gage *gage = &m_gage[1];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	
	DeleteObject(GageBrush);
	//blood
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH bloodBrush = CreateSolidBrush(RGB(0, 200, 0));
	SelectObject(hdcBuffer, bloodBrush);
	
	{Blood *blood = &m_blood[0];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(bloodBrush);
	
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH blood1Brush = CreateSolidBrush(RGB(0, 0, 200));
	SelectObject(hdcBuffer, blood1Brush);
	
	{Blood *blood = &m_blood[1];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(blood1Brush);


	HBRUSH SuperAngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, SuperAngleBrush);
	for(i=0;i<50;i++)
	{SuperAngle *superangle = &m_superangle[i];	
	Rectangle(hdcBuffer, superangle->pos.x, superangle->pos.y,
			superangle->pos.x +superangle->size.cx, superangle->pos.y + superangle->size.cy);
	}
	DeleteObject(SuperAngleBrush);
	
	
	HBRUSH AngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, AngleBrush);
	for(i=0;i<50;i++)
	{Angle *angle = &m_angle[i];	
	Rectangle(hdcBuffer, angle->pos.x, angle->pos.y,
			angle->pos.x +angle->size.cx, angle->pos.y + angle->size.cy);
	}
	DeleteObject(AngleBrush);
	

	SelectObject(hdcBmp, m_med2.hBmp);
	if(showmed==1)
	{
		TransparentBlt(
		hdcBuffer, m_med2.pos.x, m_med2.pos.y,
		m_med2.size.cx, m_med2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}

	// 绘制地形
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH terrianBrush = CreateSolidBrush(RGB(223, 169, 103));
	SelectObject(hdcBuffer, terrianBrush);
	int k;
	for (k = 0; k < MAX_TERRIAN_NUM; k++)
	{
		Terrian *terrian = &m_terrian[k];
		Rectangle(hdcBuffer, terrian->pos.x, terrian->pos.y,
			terrian->pos.x + terrian->size.cx, terrian->pos.y + terrian->size.cy);

	}
	if(showrocket1==1)
	{
	SelectObject(hdcBmp, m_rocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket.pos.x, m_rocket.pos.y,
		m_rocket.size.cx, m_rocket.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
		
	if(showrocket2==1)
	{
	SelectObject(hdcBmp, m_rocket2.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2.pos.x, m_rocket2.pos.y,
		m_rocket2.size.cx, m_rocket2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
	
	DeleteObject(terrianBrush);

		SelectObject(hdcBmp, m_rocketnum.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocketnum.pos.x, m_rocketnum.pos.y,
		m_rocketnum.size.cx, m_rocketnum.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_med.pos.x, m_med.pos.y,
		m_med.size.cx, m_med.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_medr.pos.x, m_medr.pos.y,
		m_medr.size.cx, m_medr.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_rocket2num.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2num.pos.x, m_rocket2num.pos.y,
		m_rocket2num.size.cx, m_rocket2num.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);
	
	
	// 绘制分数
	
	if(show==0)
	{
	SelectObject(hdcBmp, m_boom.hBmp);
	TransparentBlt(
		hdcBuffer, m_boom.pos.x, m_boom.pos.y,
		m_boom.size.cx, m_boom.size.cy,
		hdcBmp, 0, 0, 60, 60,
		RGB(255, 255, 255)
		);}
									
	
	TCHAR	szDist1[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist1, _T("在%d内进行攻击,第%d回合"),t,turn);
	TextOut(hdcBuffer, WNDWIDTH / 2-100, 15, szDist1, _tcslen(szDist1));

	TCHAR	szDist2[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist2, _T("%d"),rknum1);
	TextOut(hdcBuffer, 100, 525, szDist2, _tcslen(szDist2));
	
	TCHAR	szDist3[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist3, _T("%d"),rknum2);
	TextOut(hdcBuffer, 1150, 525, szDist3, _tcslen(szDist3));

	TCHAR	szDist4[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist4, _T("%d"),mednum1);
	TextOut(hdcBuffer, 100, 575, szDist4, _tcslen(szDist4));
	TCHAR	szDist5[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist5, _T("%d"),mednum2);
	TextOut(hdcBuffer, 1150, 575, szDist5, _tcslen(szDist5));


BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_Game(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, gameStatus.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);
	
	
	
	SelectObject(hdcBmp, m_play.hBmp);
	TransparentBlt(hdcBuffer, m_play.pos.x, m_play.pos.y, m_play.size.cx, m_play.size.cy,
		hdcBmp, 0, 0,
		m_play.size.cx, m_play.size.cy, RGB(255, 255, 255));
	
	
	SelectObject(hdcBmp, m_pause.hBmp);
	TransparentBlt(hdcBuffer, m_pause.pos.x, m_pause.pos.y, m_pause.size.cx, m_pause.size.cy,
		hdcBmp, 0, 0,
		m_pause.size.cx, m_pause.size.cy, RGB(255, 255, 255));
	


	if(wind==0)
		m_winddir.hBmp=m_hEastBmp;
	if(wind==1)
		m_winddir.hBmp=m_hWestBmp;
	if(wind==2)
		m_winddir.hBmp=m_hSouthBmp;
	if(wind==3)
		m_winddir.hBmp=m_hNorthBmp;
	SelectObject(hdcBmp, m_winddir.hBmp);
	TransparentBlt(hdcBuffer, m_winddir.pos.x, m_winddir.pos.y, m_winddir.size.cx, m_winddir.size.cy,
		hdcBmp, 0, 0,
		m_winddir.size.cx, m_winddir.size.cy, RGB(255, 255, 255));


	if(pause==1)
  {
	SelectObject(hdcBmp, m_bigpause.hBmp);
	TransparentBlt(hdcBuffer, m_bigpause.pos.x, m_bigpause.pos.y, m_bigpause.size.cx, m_bigpause.size.cy,
		hdcBmp, 0, 0,
		m_bigpause.size.cx, m_bigpause.size.cy, RGB(255, 255, 255));
	}

	if(touch==1)
	{
	SelectObject(hdcBmp, m_bullet.hBmp);
	TransparentBlt(
		hdcBuffer, m_bullet.pos.x, m_bullet.pos.y,
		m_bullet.size.cx, m_bullet.size.cy,
		hdcBmp, 0, 0, BULLET_SIZE_X ,  BULLET_SIZE_Y,
		RGB(255, 255, 255)	
		);
	}

	if(turn%20<=10)
		m_sun.hBmp=m_hSunBmp;
	else m_sun.hBmp=m_hMoonBmp;
	SelectObject(hdcBmp, m_sun.hBmp);
	TransparentBlt(
		hdcBuffer, m_sun.pos.x, m_sun.pos.y,
		m_sun.size.cx, m_sun.size.cy,
		hdcBmp, 0, 0, 60 ,  60,
		RGB(255, 255, 255)	
		);
	// 绘制Hero到缓存

	if(greennum==1)
{
	if(LorR==0)
	m_hero.hBmp=m_hHerolBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHerorBmp;

}
		if(greennum==2)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero2Bmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero2RBmp;
}
		if(greennum==3)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero3LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero3RBmp;

}
			if(greennum==4)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero4LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero4RBmp;

}

			if(bluenum==1)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHerolBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHerorBmp;
	}

if(bluenum==2)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero2Bmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero2RBmp;
	}
if(bluenum==3)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero3LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero3RBmp;
	}
if(bluenum==4)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero4LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero4RBmp;
	}


	SelectObject(hdcBmp, m_hero.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero.pos.x, m_hero.pos.y,
		m_hero.size.cx, m_hero.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);
   //Hero2	
		SelectObject(hdcBmp, m_hero2.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero2.pos.x, m_hero2.pos.y,
		m_hero2.size.cx, m_hero2.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);

	
		SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH GageBrush = CreateSolidBrush(RGB(200, 0, 0));
	SelectObject(hdcBuffer, GageBrush);
	if(turn%2==0)
	{Gage *gage = &m_gage[0];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	if(turn%2==1)
	{Gage *gage = &m_gage[1];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	
	DeleteObject(GageBrush);
	//blood
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH bloodBrush = CreateSolidBrush(RGB(0, 200, 0));
	SelectObject(hdcBuffer, bloodBrush);
	
	{Blood *blood = &m_blood[0];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(bloodBrush);
	
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH blood1Brush = CreateSolidBrush(RGB(0, 0, 200));
	SelectObject(hdcBuffer, blood1Brush);
	
	{Blood *blood = &m_blood[1];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(blood1Brush);


	HBRUSH SuperAngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, SuperAngleBrush);
	for(i=0;i<50;i++)
	{SuperAngle *superangle = &m_superangle[i];	
	Rectangle(hdcBuffer, superangle->pos.x, superangle->pos.y,
			superangle->pos.x +superangle->size.cx, superangle->pos.y + superangle->size.cy);
	}
	DeleteObject(SuperAngleBrush);
	
	
	HBRUSH AngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, AngleBrush);
	for(i=0;i<50;i++)
	{Angle *angle = &m_angle[i];	
	Rectangle(hdcBuffer, angle->pos.x, angle->pos.y,
			angle->pos.x +angle->size.cx, angle->pos.y + angle->size.cy);
	}
	DeleteObject(AngleBrush);
	

	SelectObject(hdcBmp, m_med2.hBmp);
	if(showmed==1)
	{
		TransparentBlt(
		hdcBuffer, m_med2.pos.x, m_med2.pos.y,
		m_med2.size.cx, m_med2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}

	// 绘制地形
	

	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH terrianBrush = CreateSolidBrush(RGB(223, 169, 103));
	SelectObject(hdcBuffer, terrianBrush);
	int k;
	for (k = 0; k < MAX_TERRIAN_NUM; k++)
	{
		Terrian *terrian = &m_terrian[k];
		Rectangle(hdcBuffer, terrian->pos.x, terrian->pos.y,
			terrian->pos.x + terrian->size.cx, terrian->pos.y + terrian->size.cy);

	}

	if(showrocket1==1)
	{
	SelectObject(hdcBmp, m_rocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket.pos.x, m_rocket.pos.y,
		m_rocket.size.cx, m_rocket.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
		
	if(showrocket2==1)
	{
	SelectObject(hdcBmp, m_rocket2.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2.pos.x, m_rocket2.pos.y,
		m_rocket2.size.cx, m_rocket2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
	

		SelectObject(hdcBmp, m_rocketnum.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocketnum.pos.x, m_rocketnum.pos.y,
		m_rocketnum.size.cx, m_rocketnum.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

		SelectObject(hdcBmp, m_getrocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_getrocket.pos.x, m_getrocket.pos.y,
		m_getrocket.size.cx, m_getrocket.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_med.pos.x, m_med.pos.y,
		m_med.size.cx, m_med.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_medr.pos.x, m_medr.pos.y,
		m_medr.size.cx, m_medr.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_rocket2num.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2num.pos.x, m_rocket2num.pos.y,
		m_rocket2num.size.cx, m_rocket2num.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);
	
	
	// 绘制分数
	
	if(show==0)
	{
	SelectObject(hdcBmp, m_boom.hBmp);
	TransparentBlt(
		hdcBuffer, m_boom.pos.x, m_boom.pos.y,
		m_boom.size.cx, m_boom.size.cy,
		hdcBmp, 0, 0, 60, 60,
		RGB(255, 255, 255)
		);}
									
	
	TCHAR	szDist1[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist1, _T("在%d内进行攻击,第%d回合"),t,turn);
	TextOut(hdcBuffer, WNDWIDTH / 2-100, 15, szDist1, _tcslen(szDist1));

	TCHAR	szDist2[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist2, _T("%d"),rknum1);
	TextOut(hdcBuffer, 100, 525, szDist2, _tcslen(szDist2));
	
	TCHAR	szDist3[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist3, _T("%d"),rknum2);
	TextOut(hdcBuffer, 1150, 525, szDist3, _tcslen(szDist3));

	TCHAR	szDist4[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist4, _T("%d"),mednum1);
	TextOut(hdcBuffer, 100, 575, szDist4, _tcslen(szDist4));
	TCHAR	szDist5[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist5, _T("%d"),mednum2);
	TextOut(hdcBuffer, 1150, 575, szDist5, _tcslen(szDist5));


	
	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_Game2(HWND hWnd)
{PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	

	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp, gameStatus6.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);
	
	
	
	SelectObject(hdcBmp, m_play.hBmp);
	TransparentBlt(hdcBuffer, m_play.pos.x, m_play.pos.y, m_play.size.cx, m_play.size.cy,
		hdcBmp, 0, 0,
		m_play.size.cx, m_play.size.cy, RGB(255, 255, 255));
	
	
	SelectObject(hdcBmp, m_pause.hBmp);
	TransparentBlt(hdcBuffer, m_pause.pos.x, m_pause.pos.y, m_pause.size.cx, m_pause.size.cy,
		hdcBmp, 0, 0,
		m_pause.size.cx, m_pause.size.cy, RGB(255, 255, 255));
	


	if(wind==0)
		m_winddir.hBmp=m_hEastBmp;
	if(wind==1)
		m_winddir.hBmp=m_hWestBmp;
	if(wind==2)
		m_winddir.hBmp=m_hSouthBmp;
	if(wind==3)
		m_winddir.hBmp=m_hNorthBmp;
	SelectObject(hdcBmp, m_winddir.hBmp);
	TransparentBlt(hdcBuffer, m_winddir.pos.x, m_winddir.pos.y, m_winddir.size.cx, m_winddir.size.cy,
		hdcBmp, 0, 0,
		m_winddir.size.cx, m_winddir.size.cy, RGB(255, 255, 255));

		SelectObject(hdcBmp, m_getrocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_getrocket.pos.x, m_getrocket.pos.y,
		m_getrocket.size.cx, m_getrocket.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);
	if(pause==1)
  {
	SelectObject(hdcBmp, m_bigpause.hBmp);
	TransparentBlt(hdcBuffer, m_bigpause.pos.x, m_bigpause.pos.y, m_bigpause.size.cx, m_bigpause.size.cy,
		hdcBmp, 0, 0,
		m_bigpause.size.cx, m_bigpause.size.cy, RGB(255, 255, 255));
	}

	if(touch==1)
	{
	SelectObject(hdcBmp, m_bullet.hBmp);
	TransparentBlt(
		hdcBuffer, m_bullet.pos.x, m_bullet.pos.y,
		m_bullet.size.cx, m_bullet.size.cy,
		hdcBmp, 0, 0, BULLET_SIZE_X ,  BULLET_SIZE_Y,
		RGB(255, 255, 255)	
		);
	}

	
	if(turn%20<=10)
		m_sun.hBmp=m_hSunBmp;
	else m_sun.hBmp=m_hMoonBmp;
	SelectObject(hdcBmp, m_sun.hBmp);
	TransparentBlt(
		hdcBuffer, m_sun.pos.x, m_sun.pos.y,
		m_sun.size.cx, m_sun.size.cy,
		hdcBmp, 0, 0, 60 ,  60,
		RGB(255, 255, 255)	
		);

	// 绘制Hero到缓存

	if(greennum==1)
{
	if(LorR==0)
	m_hero.hBmp=m_hHerolBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHerorBmp;

}
		if(greennum==2)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero2Bmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero2RBmp;
}
		if(greennum==3)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero3LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero3RBmp;

}
			if(greennum==4)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero4LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero4RBmp;

}

			if(bluenum==1)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHerolBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHerorBmp;
	}

if(bluenum==2)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero2Bmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero2RBmp;
	}
if(bluenum==3)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero3LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero3RBmp;
	}
if(bluenum==4)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero4LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero4RBmp;
	}


	SelectObject(hdcBmp, m_hero.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero.pos.x, m_hero.pos.y,
		m_hero.size.cx, m_hero.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);
   //Hero2	
		SelectObject(hdcBmp, m_hero2.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero2.pos.x, m_hero2.pos.y,
		m_hero2.size.cx, m_hero2.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);

	
		SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH GageBrush = CreateSolidBrush(RGB(200, 0, 0));
	SelectObject(hdcBuffer, GageBrush);
	if(turn%2==0)
	{Gage *gage = &m_gage[0];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	if(turn%2==1)
	{Gage *gage = &m_gage[1];	
	Rectangle(hdcBuffer, gage->pos.x, gage->pos.y,
			gage->pos.x +gage->size.cx, gage->pos.y + gage->size.cy);
	}
	
	DeleteObject(GageBrush);
	//blood
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH bloodBrush = CreateSolidBrush(RGB(0, 200, 0));
	SelectObject(hdcBuffer, bloodBrush);
	
	{Blood *blood = &m_blood[0];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(bloodBrush);
	
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH blood1Brush = CreateSolidBrush(RGB(0, 0, 200));
	SelectObject(hdcBuffer, blood1Brush);
	
	{Blood *blood = &m_blood[1];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(blood1Brush);


	HBRUSH SuperAngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, SuperAngleBrush);
	for(i=0;i<50;i++)
	{SuperAngle *superangle = &m_superangle[i];	
	Rectangle(hdcBuffer, superangle->pos.x, superangle->pos.y,
			superangle->pos.x +superangle->size.cx, superangle->pos.y + superangle->size.cy);
	}
	DeleteObject(SuperAngleBrush);
	
	
	HBRUSH AngleBrush = CreateSolidBrush(RGB(200, 200, 200));
	SelectObject(hdcBuffer, AngleBrush);
	for(i=0;i<50;i++)
	{Angle *angle = &m_angle[i];	
	Rectangle(hdcBuffer, angle->pos.x, angle->pos.y,
			angle->pos.x +angle->size.cx, angle->pos.y + angle->size.cy);
	}
	DeleteObject(AngleBrush);
	

	SelectObject(hdcBmp, m_med2.hBmp);
	if(showmed==1)
	{
		TransparentBlt(
		hdcBuffer, m_med2.pos.x, m_med2.pos.y,
		m_med2.size.cx, m_med2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}

	// 绘制地形
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH terrianBrush = CreateSolidBrush(RGB(223, 169, 103));
	SelectObject(hdcBuffer, terrianBrush);
	int k;
	for (k = 0; k < MAX_TERRIAN_NUM; k++)
	{
		Terrian *terrian = &m_terrian[k];
		Rectangle(hdcBuffer, terrian->pos.x, terrian->pos.y,
			terrian->pos.x + terrian->size.cx, terrian->pos.y + terrian->size.cy);

	}
	if(showrocket1==1)
	{
	SelectObject(hdcBmp, m_rocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket.pos.x, m_rocket.pos.y,
		m_rocket.size.cx, m_rocket.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
		
	if(showrocket2==1)
	{
	SelectObject(hdcBmp, m_rocket2.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2.pos.x, m_rocket2.pos.y,
		m_rocket2.size.cx, m_rocket2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
	
	DeleteObject(terrianBrush);

		SelectObject(hdcBmp, m_rocketnum.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocketnum.pos.x, m_rocketnum.pos.y,
		m_rocketnum.size.cx, m_rocketnum.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_med.pos.x, m_med.pos.y,
		m_med.size.cx, m_med.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_med.hBmp);
	TransparentBlt(
		hdcBuffer,m_medr.pos.x, m_medr.pos.y,
		m_medr.size.cx, m_medr.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);

	SelectObject(hdcBmp, m_rocket2num.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2num.pos.x, m_rocket2num.pos.y,
		m_rocket2num.size.cx, m_rocket2num.size.cy,
		hdcBmp, 0, 0, 40, 40,
		RGB(255, 255, 255)
		
		);
	
	
	// 绘制分数
	
	if(show==0)
	{
	SelectObject(hdcBmp, m_boom.hBmp);
	TransparentBlt(
		hdcBuffer, m_boom.pos.x, m_boom.pos.y,
		m_boom.size.cx, m_boom.size.cy,
		hdcBmp, 0, 0, 60, 60,
		RGB(255, 255, 255)
		);}
									
	
	TCHAR	szDist1[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist1, _T("在%d内进行攻击,第%d回合"),t,turn);
	TextOut(hdcBuffer, WNDWIDTH / 2-100, 15, szDist1, _tcslen(szDist1));

	TCHAR	szDist2[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist2, _T("%d"),rknum1);
	TextOut(hdcBuffer, 100, 525, szDist2, _tcslen(szDist2));
	
	TCHAR	szDist3[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist3, _T("%d"),rknum2);
	TextOut(hdcBuffer, 1150, 525, szDist3, _tcslen(szDist3));

	TCHAR	szDist4[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist4, _T("%d"),mednum1);
	TextOut(hdcBuffer, 100, 575, szDist4, _tcslen(szDist4));
	TCHAR	szDist5[30];
	SetTextColor(hdcBuffer, RGB(0, 0, 0));
	SetBkMode(hdcBuffer, TRANSPARENT);
	wsprintf(szDist5, _T("%d"),mednum2);
	TextOut(hdcBuffer, 1150, 575, szDist5, _tcslen(szDist5));


	
	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_ChooseHero(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);

	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus7.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);      


	
	SelectObject(hdcBmp, m_back.hBmp);
	TransparentBlt(hdcBuffer, m_back.pos.x, m_back.pos.y, m_back.size.cx, m_back.size.cy,
		hdcBmp, 0, 0,
		m_back.size.cx, m_back.size.cy, RGB(255, 255, 255));//后退键



		SelectObject(hdcBmp, m_hero1pyobon.hBmp);
	TransparentBlt(hdcBuffer, m_hero1pyobon.pos.x, m_hero1pyobon.pos.y, m_hero1pyobon.size.cx, m_hero1pyobon.size.cy,
		hdcBmp, 0, 0,
		m_hero1pyobon.size.cx, m_hero1pyobon.size.cy, RGB(255, 255, 255));     

		SelectObject(hdcBmp, m_hero2pyobon.hBmp);
	TransparentBlt(hdcBuffer, m_hero2pyobon.pos.x, m_hero2pyobon.pos.y, m_hero2pyobon.size.cx, m_hero2pyobon.size.cy,
		hdcBmp, 0, 0,
		m_hero2pyobon.size.cx, m_hero2pyobon.size.cy, RGB(255, 255, 255));     

	SelectObject(hdcBmp, m_hero3.hBmp);
	TransparentBlt(hdcBuffer, m_hero3.pos.x, m_hero3.pos.y, m_hero3.size.cx, m_hero3.size.cy,
		hdcBmp, 0, 0,
		m_hero3.size.cx, m_hero3.size.cy, RGB(255, 255, 255));     
	
	SelectObject(hdcBmp, m_hero4.hBmp);
	TransparentBlt(hdcBuffer, m_hero4.pos.x, m_hero4.pos.y, m_hero4.size.cx, m_hero4.size.cy,
		hdcBmp, 0, 0,
		m_hero4.size.cx, m_hero4.size.cy, RGB(255, 255, 255));     

	
BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);
	// 结束绘制
	EndPaint(hWnd, &ps);

}

VOID Render_ChooseHero2(HWND hWnd)
{

	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);

	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus7.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);      


	
	SelectObject(hdcBmp, m_back.hBmp);
	TransparentBlt(hdcBuffer, m_back.pos.x, m_back.pos.y, m_back.size.cx, m_back.size.cy,
		hdcBmp, 0, 0,
		m_back.size.cx, m_back.size.cy, RGB(255, 255, 255));//后退键



		SelectObject(hdcBmp, m_hero1pyobon.hBmp);
	TransparentBlt(hdcBuffer, m_hero1pyobon.pos.x, m_hero1pyobon.pos.y, m_hero1pyobon.size.cx, m_hero1pyobon.size.cy,
		hdcBmp, 0, 0,
		m_hero1pyobon.size.cx, m_hero1pyobon.size.cy, RGB(255, 255, 255));     

		SelectObject(hdcBmp, m_hero2pyobon.hBmp);
	TransparentBlt(hdcBuffer, m_hero2pyobon.pos.x, m_hero2pyobon.pos.y, m_hero2pyobon.size.cx, m_hero2pyobon.size.cy,
		hdcBmp, 0, 0,
		m_hero2pyobon.size.cx, m_hero2pyobon.size.cy, RGB(255, 255, 255));     

	SelectObject(hdcBmp, m_hero3.hBmp);
	TransparentBlt(hdcBuffer, m_hero3.pos.x, m_hero3.pos.y, m_hero3.size.cx, m_hero3.size.cy,
		hdcBmp, 0, 0,
		m_hero3.size.cx, m_hero3.size.cy, RGB(255, 255, 255));     
	
	SelectObject(hdcBmp, m_hero4.hBmp);
	TransparentBlt(hdcBuffer, m_hero4.pos.x, m_hero4.pos.y, m_hero4.size.cx, m_hero4.size.cy,
		hdcBmp, 0, 0,
		m_hero4.size.cx, m_hero4.size.cy, RGB(255, 255, 255));     

	
BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);
	// 结束绘制
	EndPaint(hWnd, &ps);

}

VOID Render_ChooseLuanDou(HWND hWnd)
{
	
			PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	
	if(gameStatus.status==10)
		m_madchoose1.hBmp=m_hLuanDouBmp;
	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gameStatus3.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);          
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,m_madchoose1.hBmp);
	BitBlt(hdcBuffer, 0, 0, 600, 300,
		hdcBmp, 0, 0, SRCCOPY);          



BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID Render_LuanDou(HWND hWnd)
{
		PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);
	
	// 绘制背景到缓存
	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gamestatus12.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);                    


	
	
	
	SelectObject(hdcBmp, m_play.hBmp);
	TransparentBlt(hdcBuffer, m_play.pos.x, m_play.pos.y, m_play.size.cx, m_play.size.cy,
		hdcBmp, 0, 0,
		m_play.size.cx, m_play.size.cy, RGB(255, 255, 255));
	
	
	SelectObject(hdcBmp, m_pause.hBmp);
	TransparentBlt(hdcBuffer, m_pause.pos.x, m_pause.pos.y, m_pause.size.cx, m_pause.size.cy,
		hdcBmp, 0, 0,
		m_pause.size.cx, m_pause.size.cy, RGB(255, 255, 255));
	


	


	if(pause==1)
  {
	SelectObject(hdcBmp, m_bigpause.hBmp);
	TransparentBlt(hdcBuffer, m_bigpause.pos.x, m_bigpause.pos.y, m_bigpause.size.cx, m_bigpause.size.cy,
		hdcBmp, 0, 0,
		m_bigpause.size.cx, m_bigpause.size.cy, RGB(255, 255, 255));
	}

	

	if(turn%20<=10)
		m_sun.hBmp=m_hSunBmp;
	else m_sun.hBmp=m_hMoonBmp;
	SelectObject(hdcBmp, m_sun.hBmp);
	TransparentBlt(
		hdcBuffer, m_sun.pos.x, m_sun.pos.y,
		m_sun.size.cx, m_sun.size.cy,
		hdcBmp, 0, 0, 60 ,  60,
		RGB(255, 255, 255)	
		);
	// 绘制Hero到缓存

	if(greennum==1)
{
	if(LorR==0)
	m_hero.hBmp=m_hHerolBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHerorBmp;

}
		if(greennum==2)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero2Bmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero2RBmp;
}
		if(greennum==3)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero3LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero3RBmp;

}
			if(greennum==4)
{
	if(LorR==0)
	m_hero.hBmp=m_hHero4LBmp;
	if(LorR==1)
	m_hero.hBmp=m_hHero4RBmp;

}

			if(bluenum==1)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHerolBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHerorBmp;
	}

if(bluenum==2)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero2Bmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero2RBmp;
	}
if(bluenum==3)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero3LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero3RBmp;
	}
if(bluenum==4)
	{	
	if(LorR2==0)
		m_hero2.hBmp=m_hHero4LBmp;
	if(LorR2==1)
		m_hero2.hBmp=m_hHero4RBmp;
	}


	SelectObject(hdcBmp, m_hero.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero.pos.x, m_hero.pos.y,
		m_hero.size.cx, m_hero.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);
   //Hero2	
		SelectObject(hdcBmp, m_hero2.hBmp);
	TransparentBlt(
		hdcBuffer, m_hero2.pos.x, m_hero2.pos.y,
		m_hero2.size.cx, m_hero2.size.cy,
		hdcBmp, 0, 0, 66, 62,
		RGB(255, 255, 255)
		
		);

	
		
	
	//blood
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH bloodBrush = CreateSolidBrush(RGB(0, 200, 0));
	SelectObject(hdcBuffer, bloodBrush);
	
	{Blood *blood = &m_blood[0];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(bloodBrush);
	
	
	SelectObject(hdcBuffer, GetStockObject(NULL_PEN));
	HBRUSH blood1Brush = CreateSolidBrush(RGB(0, 0, 200));
	SelectObject(hdcBuffer, blood1Brush);
	
	{Blood *blood = &m_blood[1];	
	Rectangle(hdcBuffer, blood->pos.x, blood->pos.y,
			blood->pos.x +blood->size.cx, blood->pos.y + blood->size.cy);

	}
	DeleteObject(blood1Brush);



	
	
	
	

	

	// 绘制地形
	

	
	if(gameStatus.status==11&&LorR==1&&showrocket1==0)
		m_rocket.hBmp=m_hRocketBmp;
	if(gameStatus.status==11&&LorR==0&&showrocket1==0)
		m_rocket.hBmp=m_hRocketLBmp;
	if(showrocket1==1)
	{
	SelectObject(hdcBmp, m_rocket.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket.pos.x, m_rocket.pos.y,
		m_rocket.size.cx, m_rocket.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
	if(gameStatus.status==11&&LorR2==0&&showrocket2==0)
		m_rocket2.hBmp=m_hRocket2Bmp;
	if(gameStatus.status==11&&LorR2==1&&showrocket2==0)
		m_rocket2.hBmp=m_hRocket2RBmp;

	if(showrocket2==1)
	{
	SelectObject(hdcBmp, m_rocket2.hBmp);
	TransparentBlt(
		hdcBuffer, m_rocket2.pos.x, m_rocket2.pos.y,
		m_rocket2.size.cx, m_rocket2.size.cy,
		hdcBmp, 0, 0, 40 ,  40,
		RGB(255, 255, 255)	
		);
	}
	

	

	

	

	
	
	
	// 绘制分数
	

									
	
	
	// 最后将所有的信息绘制到屏幕上
	BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);

	// 结束绘制
	EndPaint(hWnd, &ps);


}
VOID Render_Help2(HWND hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc;
	// 开始绘制
	hdc = BeginPaint(hWnd, &ps);

	HDC	hdcBmp, hdcBuffer;
	HBITMAP	cptBmp;

	
	
	
	cptBmp = CreateCompatibleBitmap(hdc, WNDWIDTH, WNDHEIGHT);
	hdcBmp = CreateCompatibleDC(hdc);
	hdcBuffer = CreateCompatibleDC(hdc);

	SelectObject(hdcBuffer, cptBmp);
	SelectObject(hdcBmp,gamestatus13.hBmp);
	BitBlt(hdcBuffer, 0, 0, WNDWIDTH, WNDHEIGHT,
		hdcBmp, 0, 0, SRCCOPY);      


	SelectObject(hdcBmp, m_back.hBmp);
	TransparentBlt(hdcBuffer, m_back.pos.x, m_back.pos.y, m_back.size.cx, m_back.size.cy,
		hdcBmp, 0, 0,
		m_back.size.cx, m_back.size.cy, RGB(255, 255, 255));//后退键



BitBlt(hdc, 0, 0, WNDWIDTH, WNDHEIGHT, hdcBuffer, 0, 0, SRCCOPY);

	// 回收资源所占的内存
	DeleteObject(cptBmp);
	DeleteDC(hdcBuffer);
	DeleteDC(hdcBmp);
	// 结束绘制
	EndPaint(hWnd, &ps);
}

VOID TimerUpdate(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	HeroUpdate();
	TerrianUpdate();
	GameStatusUpdate();
	InvalidateRect(hWnd, NULL, FALSE);
	BloodUpdate();
	LimitUpdate();
	Hero2Update();
	BulletUpdate();
	AngleUpdate();
	TurnUpdate();
	BoomUpdate();
	WindUpdate();
    MedUpdate();
	
}






VOID LimitUpdate()
{
	
	if(t>0)
	j++;
	if(j==50)
	{
		j=0;
		t--;
	}
	if(t==0)
	{
	turn=turn+1;
	t=15;
	bye2=0;
    bye=0;
	
	}
	//因为0.02秒一次进行一次函数，所以每50次增加1秒，当15秒内没有操作，就轮到对面回合
}

VOID AngleUpdate()
{
	
	int momo;
	for(momo=0,i=0;momo<50,i<50;i++,momo++)
	m_superangle[momo] = CreateSuperAngle(m_hero2.pos.x-momo,m_hero2.pos.y+HERO_SIZE_Y/2-i*UpDn/3, 5, 5, NULL);
	
	for(momo=0,i=0;momo<50,i<50;i++,momo++)
	m_angle[momo] = CreateAngle(m_hero.pos.x+HERO_SIZE_X+momo,m_hero.pos.y+HERO_SIZE_Y/2-i*direction/3, 5, 5, NULL);

	//俩英雄子弹发射的角度
}




VOID TurnUpdate()
{
	
	if(gameStatus.status!=11)
	{
		if(touch==0&&temp==1)
	{
		temp=0;
		turn++;
		bye2=0;
	    bye=0;
		judwind=0;
		judmed=0;
		judhp=0;
		showmed=1;//每回合初始数据
		if(turn%2==0&&greennum==1)
		{
			hp1=hp1+2;
		}
		if(turn%2==1&&bluenum==1)
		{
			hp2=hp2+2;
		}
	}
	if(turn>=10&&turn%2==0&&bye==0)
	{
		hp1=hp1-5;
		bye=1;
	}
	
	if(turn>=10&&turn%2==1&&bye2==0)
	{
		hp2=hp2-5;
		bye2=1;
	}
	if(judwind==0)
	{
		srand(time(NULL)*turn);
		wind=rand()%4;
		judwind=1;
	}
		//这里主要是后面的炸弹碰撞英雄或地面时的判断，与为了游戏结束10回合以后开始扣血量
}
}

VOID BulletUpdate()
{
	


	if(turn%2==0)
{
		
		if(touch==0)
	{
		m_bullet.pos.x = m_hero.pos.x+HERO_SIZE_X;
	    m_bullet.pos.y =m_hero.pos.y+HERO_SIZE_Y/2;//使炸弹跟随英雄
	}
	
	if(touch==1)
	{
		time1++;
		if(time1==10)
		{
			m_bullet.vel.y+=GRAVITY;
			time1=0;
			
		}	
}
	
	m_bullet.pos.x += m_bullet.vel.x;
	m_bullet.pos.y += m_bullet.vel.y;

	if(m_bullet.pos.y >= m_terrian[m_bullet.pos.x].pos.y||jud==1||m_rocket.pos.x>1250||m_rocket2.pos.x<-50)
	{
		 if(ioi==0)ex=1;
		touch=0;
		 m_bullet.vel.y = 0;
		temp=1;	
		 t=15;
		move=0;
		jud=0;
		TT=1;
	}
  
	if(showrocket1==0)
	{
	m_rocket.pos.x = m_hero.pos.x;
	m_rocket.pos.y = m_hero.pos.y;
	}
}

	if(turn%2==1)
{
		if(touch==0)
	{
		 m_bullet.pos.x = m_hero2.pos.x;
		 m_bullet.pos.y = m_hero2.pos.y+HERO_SIZE_Y/2;
	}
	
	if(touch==1)
	{
		time1++;
		if(time1==10)
		{
			m_bullet.vel.y+=GRAVITY;
			time1=0;
			
		}	
     }

	m_bullet.pos.x += m_bullet.vel.x;
	m_bullet.pos.y += m_bullet.vel.y;
	if(m_bullet.pos.y >=m_terrian[m_bullet.pos.x].pos.y||jud==1||m_rocket.pos.x>1250||m_rocket2.pos.x<-50)
	{
	   if(ioi==0) ex=1;
		touch=0;
		m_bullet.vel.y= 0;
		temp=1;
		t=15;
		move=0;
		jud=0;
		m_rocket.vel.x=0;
		m_rocket2.vel.x=0;
		showrocket1=0;
		showrocket2=0;     //火箭弹撞到英雄之后，消失，并回到原位置，显示爆炸效果
		TT=1;
	}
	if(showrocket2==0)
	{
	m_rocket2.pos.x = m_hero2.pos.x;
	m_rocket2.pos.y = m_hero2.pos.y;
	}
	
}
	m_rocket.pos.x += m_rocket.vel.x;
	m_rocket.pos.y += m_rocket.vel.y;

	m_rocket2.pos.x += m_rocket2.vel.x;
	m_rocket2.pos.y += m_rocket2.vel.y;//火箭弹的位置变化

	if(m_bullet.pos.y>=m_med2.pos.y&&m_bullet.pos.y<=m_med2.pos.y+40&&m_bullet.pos.x>m_med2.pos.x&&m_bullet.pos.x<m_med2.pos.x+40&&showmed==1&&turn%2==0)
	{
		showmed=0;
		hp1=hp1+5;
	}
	if(m_bullet.pos.y>=m_med2.pos.y&&m_bullet.pos.y<=m_med2.pos.y+40&&m_bullet.pos.x>m_med2.pos.x&&m_bullet.pos.x<m_med2.pos.x+40&&showmed==1&&turn%2==1)
	{
		showmed=0;
		hp2=hp2+5;
	}
	if(m_getrocket.pos.x>1100)
		m_getrocket.vel.x=-5;
	if(m_getrocket.pos.x<100)
		m_getrocket.vel.x=5;

	if(m_bullet.pos.y>=m_getrocket.pos.y&&m_bullet.pos.y<=m_getrocket.pos.y+40&&m_bullet.pos.x>m_getrocket.pos.x&&m_bullet.pos.x<m_getrocket.pos.x+40&&onlyrk==0&&turn%2==0)
	{
		rknum1=rknum1+1;
		onlyrk=1;
	}
	if(m_bullet.pos.y>=m_getrocket.pos.y&&m_bullet.pos.y<=m_getrocket.pos.y+40&&m_bullet.pos.x>m_getrocket.pos.x&&m_bullet.pos.x<m_getrocket.pos.x+40&&onlyrk==0&&turn%2==1)
	{
		rknum2=rknum2+1;
		onlyrk=1;
	}
		m_getrocket.pos.x=m_getrocket.pos.x+m_getrocket.vel.x;
	//获得火箭弹
if(gameStatus.status==11)
{
		m_bullet.pos.x = m_hero.pos.x+HERO_SIZE_X;
	    m_bullet.pos.y =m_hero.pos.y+HERO_SIZE_Y/2;


  
	if(showrocket1==0)
	{
	m_rocket.pos.x = m_hero.pos.x;
	m_rocket.pos.y = m_hero.pos.y;
	}

		 m_bullet.pos.x = m_hero2.pos.x;
		 m_bullet.pos.y = m_hero2.pos.y+HERO_SIZE_Y/2;
	

	if(m_rocket.pos.x>1250||m_rocket.pos.x<-50)
	{
		m_rocket.vel.x=0;
		showrocket1=0;
	
	}
	if(m_rocket2.pos.x>1250||m_rocket2.pos.x<-50)
	{
		m_rocket2.vel.x=0;
		showrocket2=0;
	}
	if(showrocket2==0)
	{
	m_rocket2.pos.x = m_hero2.pos.x;
	m_rocket2.pos.y = m_hero2.pos.y;
	}
	
}
	m_rocket.pos.x += m_rocket.vel.x;
	m_rocket.pos.y += m_rocket.vel.y;

	m_rocket2.pos.x += m_rocket2.vel.x;
	m_rocket2.pos.y += m_rocket2.vel.y;

	//游戏内武器的状态变化量，与打到地面或药包时效果的实现，主要是子弹与英雄，地面，药包的碰撞问题

}
VOID HeroUpdate()
{ 
	
	
	if(gameStatus.status==1)
{
   if(m_hero.pos.x+HERO_SIZE_X>=0&&m_hero.pos.x-HERO_SIZE_X<=100||m_hero.pos.x+HERO_SIZE_X>=250&&m_hero.pos.x-HERO_SIZE_X<=300)	
	{
		if(m_hero.pos.y+m_hero.vel.y>=m_terrian[m_hero.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y)
		{
		m_hero.pos.y=m_terrian[m_hero.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y;
		m_hero.vel.y=0;
		}
	}
	if(m_hero.pos.y+HERO_SIZE_Y+m_hero.vel.y>=m_terrian[m_hero.pos.x].pos.y)
	
	{
		m_hero.pos.y=m_terrian[m_hero.pos.x].pos.y-HERO_SIZE_Y ;
		m_hero.vel.y=0;
	}

	m_hero.vel.y=m_hero.vel.y+1;	
	m_hero.pos.x += m_hero.vel.x;
	m_hero.pos.y += m_hero.vel.y;
	
	if(m_hero.pos.y>=650)
		hp1=0;
	
	if(m_hero.pos.x==m_med2.pos.x&&m_hero.pos.y==m_med2.pos.y)
	{
		showmed=0;
		hp1=hp1+10;
	}
	// TODO
	//更新英雄位置、动作
}
	if(gameStatus.status==5)
	{
	
		if(m_hero.pos.x+HERO_SIZE_X>=150&&m_hero.pos.x-HERO_SIZE_X<=250)	
	{
		if(m_hero.pos.y+m_hero.vel.y>=m_terrian[m_hero.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y)
		{
		m_hero.pos.y=m_terrian[m_hero.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y;
		m_hero.vel.y=0;
		}
	}
		
		
		if(m_hero.pos.y+HERO_SIZE_Y+m_hero.vel.y>=m_terrian[m_hero.pos.x].pos.y)
	
	{
		m_hero.pos.y=m_terrian[m_hero.pos.x].pos.y-HERO_SIZE_Y ;
		m_hero.vel.y=0;
	}
	
	
	if(m_hero.pos.y>=650)
		hp1=0;
	
	m_hero.vel.y=  m_hero.vel.y+1;	
	m_hero.pos.x += m_hero.vel.x;
	m_hero.pos.y += m_hero.vel.y;
	
	
	}
	if(gameStatus.status==9)
{
 
	if(m_hero.pos.y+HERO_SIZE_Y+m_hero.vel.y>=m_terrian[m_hero.pos.x].pos.y)
	
	{
		m_hero.pos.y=m_terrian[m_hero.pos.x].pos.y-HERO_SIZE_Y ;
		m_hero.vel.y=0;
	}
if(gameStatus.status!=11)
{
	m_hero.vel.y=m_hero.vel.y+1;	
	m_hero.pos.x += m_hero.vel.x;
	m_hero.pos.y += m_hero.vel.y;
	
	if(m_hero.pos.y>=650)
		hp1=0;
}	
	
	}
	if(gameStatus.status==11)
{	
	m_hero.pos.x += m_hero.vel.x;
	m_hero.pos.y += m_hero.vel.y;	
}
	//英雄的状态更新与地面碰撞的判断，并掉到海中，判断死亡
}

VOID Hero2Update()
{   
	if(gameStatus.status!=11)
{
if(m_hero2.pos.x+HERO_SIZE_X>=1000&&m_hero2.pos.x-HERO_SIZE_X<=1100||m_hero2.pos.x+HERO_SIZE_X>=750&&m_hero2.pos.x-HERO_SIZE_X<=850)	
	{
		if(m_hero2.pos.y+m_hero2.vel.y>=m_terrian[m_hero2.pos.x+HERO2_SIZE_X].pos.y-HERO2_SIZE_Y)
		{
		m_hero2.pos.y=m_terrian[m_hero2.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y;
		m_hero2.vel.y=0;
	
		}
	}
if((m_hero2.pos.y+HERO_SIZE_Y+m_hero2.vel.y)>=m_terrian[m_hero2.pos.x].pos.y)
	{
		m_hero2.pos.y=m_terrian[m_hero2.pos.x].pos.y-HERO_SIZE_Y ;
		m_hero2.vel.y=0;
	}
	m_hero2.vel.y=m_hero2.vel.y+1;	
	m_hero2.pos.x += m_hero2.vel.x;
	m_hero2.pos.y += m_hero2.vel.y;


	if(m_hero2.pos.y>=650)
		hp2=0;
}	// TODO

if(gameStatus.status==11)
{
		m_hero2.pos.x += m_hero2.vel.x;
	m_hero2.pos.y += m_hero2.vel.y;	
}
	//英雄的状态更新与地面碰撞的判断
}//更新英雄位置、动作
VOID WindUpdate()
{
	
	if(turn%2==0&&greennum!=3)
{	
	windtime++;
	if(windtime>=20)
 {
	if(wind==0)
	m_bullet.vel.x=m_bullet.vel.x+1;
	if(wind==1)
	m_bullet.vel.x=m_bullet.vel.x-1;
	if(wind==2)
	m_bullet.vel.y=m_bullet.vel.y+1;
	if(wind==3)
	m_bullet.vel.y=m_bullet.vel.y-1;
	windtime=0;
		} 
			}
	
	if(turn%2==1&&bluenum!=3)
{	
	windtime++;
	if(windtime>=20)
 {
	if(wind==0)
	m_bullet.vel.x=m_bullet.vel.x+1;
	if(wind==1)
	m_bullet.vel.x=m_bullet.vel.x-1;
	if(wind==2)
	m_bullet.vel.y=m_bullet.vel.y+1;
	if(wind==3)
	m_bullet.vel.y=m_bullet.vel.y-1;
	windtime=0;
		} 
			}
	//判断风向，并风向对子弹的影响
}
VOID BoomUpdate()
{
	
}
VOID BloodUpdate()
{
	if(gameStatus.status==9&&judhp==0)
	{
		if(rand()%10==1)
		{
			temphp=hp2;
			hp2=hp1;
			hp1=temphp;
		}
		judhp=1;
	}
	
	
	m_blood[0] = CreateBlood(m_hero.pos.x+5,m_hero.pos.y-10,hp1,6,NULL); 
	m_blood[1] = CreateBlood(m_hero2.pos.x+5,m_hero2.pos.y-10,hp2,6,NULL); //使HP跟随英雄

	
	m_gage[0]=CreateGage(m_hero.pos.x-5,m_hero.pos.y+HERO_SIZE_Y,5,-power*5,NULL);
	m_gage[0].pos.x=m_hero.pos.x-5;
	m_gage[0].pos.y=m_hero.pos.y+HERO_SIZE_Y;
	
		m_gage[1]=CreateGage(m_hero2.pos.x-5,m_hero2.pos.y+HERO_SIZE_Y,5,-power*5,NULL);
		m_gage[1].pos.x=m_hero2.pos.x+HERO_SIZE_X+5;
		m_gage[1].pos.y=m_hero2.pos.y+HERO_SIZE_Y;//调节炸弹的力度

		if(m_bullet.pos.y+5>=m_hero.pos.y&&turn%2==1&&m_bullet.pos.x+5>=m_hero.pos.x&&m_bullet.pos.x-5<=m_hero.pos.x+HERO_SIZE_X&&touch==1)
		{
			ex=1;
			away=1;
			if(greennum==2)
				hp1=hp1-4;
			if(greennum!=2)
			hp1=hp1-5;
				jud=1;
		     m_hero.vel.y=-4;
			 m_hero.vel.x=-5;	
			 TT=1;
		}
		if(m_bullet.pos.y+5>=m_hero2.pos.y&&turn%2==0&&m_bullet.pos.x+5>=m_hero2.pos.x&&m_bullet.pos.x-5<=m_hero2.pos.x+HERO_SIZE_X&&touch==1)
		{
			ex=1;
			away1=1;
			if(bluenum==2)
				hp2=hp2-4;
			if(bluenum!=2)
			hp2=hp2-5;
			jud=1;
		    m_hero2.vel.y=-4;	
			m_hero2.vel.x= 5;
			TT=1;
		}	//在普通模式，疯狂模式中判断炸弹是否炸到了人，对它进行扣血，并进行撞开的效果与炸弹爆炸效果
			
		if(gameStatus.status!=11&&m_rocket2.pos.x<=m_hero.pos.x+HERO_SIZE_X&&m_rocket2.pos.y+45>=m_hero.pos.y&&turn%2==1&&m_rocket2.pos.y<=m_hero.pos.y+HERO_SIZE_Y&&showrocket2==1)
		{
			ex=3;
			away=1;
			if(greennum==2)
				hp1=hp1-7;
			if(greennum!=2)
			hp1=hp1-10;		
		    jud=1;
			  m_hero.vel.y=-4;
			 m_hero.vel.x=-5;	
			 showrocket2=0;
			 comerk2=0;
			 TT=1;
		}
		if(gameStatus.status!=11&&m_rocket.pos.x+40>=m_hero2.pos.x&&m_rocket.pos.y+45>=m_hero2.pos.y&&turn%2==0&&m_rocket.pos.y<=m_hero2.pos.y+HERO_SIZE_Y&&showrocket1==1)
		{
			ex=2;
			away1=1;
			if(bluenum==2)
				hp2=hp2-7;
			if(bluenum!=2)
			hp2=hp2-10;
			jud=1;
		    m_hero2.vel.y=-4;	
			m_hero2.vel.x= 5;
			showrocket1=0;
			comerk2=0;
			TT=1;
		}	
		//对火箭弹的判断，以及撞开，爆炸等各种效果
		if(gameStatus.status==11&&m_rocket2.pos.x<=m_hero.pos.x+HERO_SIZE_X&&m_rocket2.pos.y+45>=m_hero.pos.y&&m_rocket2.pos.y<=m_hero.pos.y+HERO_SIZE_Y&&showrocket2==1)
		{
			hp1=hp1-5;		
			showrocket2=0;   
		}
		if(gameStatus.status==11&&m_rocket.pos.x+40>=m_hero2.pos.x&&m_rocket.pos.y+45>=m_hero2.pos.y&&m_rocket.pos.y<=m_hero2.pos.y+HERO_SIZE_Y&&showrocket1==1)
		{
			
			hp2=hp2-5;
			showrocket1=0;//在乱斗模式下炸弹的碰撞判断以及扣血与火箭弹消失
		}	



		if(away==1)
		{
			if(m_hero.vel.x<0)
				m_hero.vel.x++;
			if(m_hero.vel.x==0)
				away=0;
		}
		if(away1==1)
		{
			if(m_hero2.vel.x>0)
				m_hero2.vel.x--;
			if(m_hero2.vel.x==0)
				away1=0;//英雄被炸弹炸飞以后的摩擦力
		}
		if(ex==1)
	{
		m_boom.pos.x=m_bullet.pos.x;
		m_boom.pos.y=m_bullet.pos.y-30;
		ex=0;
		show=0;
	}
	
		if(ex==2)
	{
		m_boom.pos.x=m_rocket.pos.x;
		m_boom.pos.y=m_rocket.pos.y;
		ex=0;
		show=0;
	}
		if(ex==3)
	{
		m_boom.pos.x=m_rocket2.pos.x;
		m_boom.pos.y=m_rocket2.pos.y;
		ex=0;
		show=0;//炸弹的爆炸效果的显示
	}
	if(TT==1)
{		
	boomtimer++;
	if(boomtimer==10)
	{
		show=1;
		boomtimer=0;
		TT=0;//爆炸开始后计时，使爆炸效果消失
	}
}	
	if(hp1==0)
		win=1;
	if(hp2==0)
		win=0;
	
	
}
VOID TerrianUpdate() 
{
		if(gameStatus.status==1)
	{   base=1;
	for(i=0,length=0;i<=100;i++,length++)
	m_terrian[i] = CreateTerrian(i, 450-length, 2, 300, NULL);//(posX,posY,LongX,LongY)
	for(i=100,length=0;i<=200;i++,length++)
	m_terrian[i] = CreateTerrian(i, 350+length, 2, 300, NULL);
	for(i=200,length=0;i<=250;i++,length++)
	m_terrian[i] = CreateTerrian(i, 450, 2, 300, NULL);
	for(i=250,length=0;i<=300;i++,length++)
	m_terrian[i] = CreateTerrian(i, 450-length, 2, 300, NULL);
	for(i=300,length=0;i<=350;i++,length++)
	m_terrian[i] = CreateTerrian(i, 400, 2, 300, NULL);
	for(i=350,length=0;i<=450;i++,length++)
	m_terrian[i] = CreateTerrian(i, 400+length, 2, 300, NULL);
	for(i=450,length=0;i<=500;i++,length++)
	m_terrian[i] = CreateTerrian(i, 500 ,2 ,300 ,NULL);


	for(i=1200,length=0;i>=1100;i--,length++)
	m_terrian[i] = CreateTerrian(i, 450-length, 2, 300, NULL);
	for(i=1100,length=0;i>=1000;i--,length++)
	m_terrian[i] = CreateTerrian(i, 350+length, 2, 300, NULL);
	for(i=1000,length=0;i>=950;i--,length++)
	m_terrian[i] = CreateTerrian(i, 450, 2, 300, NULL);
	for(i=950,length=0;i>=900;i--,length++)
	m_terrian[i] = CreateTerrian(i, 450-length, 2, 300, NULL);
	for(i=900,length=0;i>=850;i--,length++)
	m_terrian[i] = CreateTerrian(i, 400, 2, 300, NULL);
	for(i=850,length=0;i>=750;i--,length++)
	m_terrian[i] = CreateTerrian(i, 400+length, 2, 300, NULL);
	for(i=750,length=0;i>=700;i--,length++)
	m_terrian[i] = CreateTerrian(i, 500 ,2 ,300 ,NULL);
	for(i=500,length=0;i<=700;i++,length++)
	m_terrian[i]= CreateTerrian(i,700,2,300,NULL);
	// 创建地形	1
	}
	
		if(gameStatus.status==5)
	{  base=2;
	for(i=0;i<=150;i++)
		m_terrian[i]= CreateTerrian(i,450,2,300,NULL);
	for(i=150,length=0;i<=250;i++,length++)
		m_terrian[i]= CreateTerrian(i,450-length,2,300,NULL);
	for(i=250;i<=400;i++)
		m_terrian[i]= CreateTerrian(i,350,2,300,NULL);


	for(i=400;i<=800;i++)
    m_terrian[i]= CreateTerrian(i,700,2,300,NULL);

	for(i=800,length=0;i<=950;i++,length++)
		m_terrian[i]= CreateTerrian(i,350,2,300,NULL);
	for(i=950,length=0;i<=1050;i++,length++)
		m_terrian[i]= CreateTerrian(i,350+length,2,300,NULL);
	for(i=1050;i<=1200;i++)
		m_terrian[i]= CreateTerrian(i,450,2,300,NULL);
	
	}
	if(gameStatus.status==9)
	{
		for(i=0;i<400;i++)
		m_terrian[i]= CreateTerrian(i,450,2,300,NULL);
		for(i=400;i<=800;i++)
		m_terrian[i]= CreateTerrian(i,700,2,300,NULL);
		for(i=800;i<1200;i++)
		m_terrian[i]= CreateTerrian(i,450,2,300,NULL);
	}
	// TODO
	//更新地形
}
VOID MedUpdate()
{

	if(judmed==0)
		{	
			m_med2= CreateMed2(rand()%1200,m_terrian[rand()%1200].pos.y-40,40,40,m_hMed2Bmp,0);
			judmed=1;
	
	     }//药包的出现更新
}
VOID GameStatusUpdate()
{
	
	

	if(gameStatus.status==1&&hp1<=0)
	{
		gameStatus.status=4;
	}
	if(gameStatus.status==1&&hp2<=0)
	{
		gameStatus.status=4;
	}
	if(gameStatus.status==5&&hp1<=0)
	{
		gameStatus.status=4;
	}
	if(gameStatus.status==5&&hp2<=0)
	{
		gameStatus.status=4;
	}

	if(gameStatus.status==9&&hp1<=0)
	{
		gameStatus.status=4;
	}
	if(gameStatus.status==9&&hp2<=0)
	{
		gameStatus.status=4;
	}

	if(gameStatus.status==11&&hp1<=0)
	{
		gameStatus.status=4;
		
	}
	if(gameStatus.status==11&&hp2<=0)
	{
		gameStatus.status=4;
	}
	//判断胜利方，并转移到结束页面
}

BOOL ButtonClicked(POINT ptMouse, POINT buttonPos, SIZE buttonSize)
{
	RECT rectButton;
	rectButton.left = buttonPos.x;
	rectButton.top = buttonPos.y;
	rectButton.right = buttonPos.x + buttonSize.cx;
	rectButton.bottom = buttonPos.y + buttonSize.cy;

	return PtInRect(&rectButton, ptMouse);
}




VOID KeyDown(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	// TODO
	

	if(gameStatus.status!=11)
	{	
	if(turn%2==0&&move==0)
{	
	switch (wParam)
	{
	case 'W':
	{	
		if(m_hero.pos.x+HERO_SIZE_X>=0&&m_hero.pos.x-HERO_SIZE_X<=100||m_hero.pos.x+HERO_SIZE_X>=250&&m_hero.pos.x-HERO_SIZE_X<=300)
			{
			if(m_hero.pos.y>=m_terrian[m_hero.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y)
		     m_hero.vel.y = -HERO_VEL_Y;		
	       	}
			else{
		        if(m_hero.pos.y>=m_terrian[m_hero.pos.x].pos.y-HERO_SIZE_Y)
		        m_hero.vel.y = -HERO_VEL_Y;		
			}
	}
	
	break;
	case 'S':
		m_hero.vel.y = HERO_VEL_Y;
		break;
	case 'A':
		{
			m_hero.vel.x = -HERO_VEL_X;
			LorR=0;//左右移动时改变英雄朝的方向
		}
			break;
	case 'D':
		{
			m_hero.vel.x = HERO_VEL_X;
			LorR=1;
		}//英雄的移动
		break;
		case VK_UP:
		{
			if(direction<40)
			direction++;
		
		}
		break;
		case VK_DOWN:
		{
			if(direction>0)
				direction--;
		
		}//改变炸弹角度
		break;
		default:
		break;
	}}
	if(turn%2==0&&move==0)
	{switch (wParam)	
	  { 
	case 'J':
		{
		
			power=power+1;
		    if(power==15)
			power=0;
			ioi=0;
			onlyrk=0;
		}//调节炸弹的力度
		break;
		case 'P':
		if(move==0&&turn%2==0&&rknum1>0)
		{
		 move=1;
		 m_rocket.vel.x=10;
		 showrocket1=1; 
		 comerk1=1;
		 ioi=1;
		 rknum1--;
		}//火箭弹
		break;
	case 'Q':
		if(mednum1>0)
		{
			mednum1=mednum1-1;
			hp1=hp1+10;
		}//回复技能
	default:
		break;	
	}}
	if(turn%2==1&&move==0)
	{
		
		
		switch (wParam)
	{
	case 'W':
		{
		if(m_hero2.pos.x+HERO_SIZE_X>=1000&&m_hero.pos.x-HERO_SIZE_X<=1100||m_hero.pos.x+HERO_SIZE_X>=750&&m_hero.pos.x-HERO_SIZE_X<=850)
			{
			if(m_hero2.pos.y>=m_terrian[m_hero2.pos.x+HERO_SIZE_X].pos.y-HERO_SIZE_Y)
		     m_hero2.vel.y = -HERO_VEL_Y;		
	       	}
			else{
		        if(m_hero2.pos.y>=m_terrian[m_hero2.pos.x].pos.y-HERO_SIZE_Y)
		        m_hero2.vel.y = -HERO_VEL_Y;		
			}
		}
			break;
	case 'S':
		m_hero2.vel.y = HERO2_VEL_Y;
		break;
	case 'A':
		{
			LorR2=0;
			m_hero2.vel.x = -HERO2_VEL_X;
		}
		break;
	case 'D':
		{
			m_hero2.vel.x = HERO2_VEL_X;
			LorR2=1;
		}
			break;
		
	case VK_UP:
		{
			if(UpDn<40)
			UpDn++;
		
		}
		break;
		case VK_DOWN:
		{
			if(UpDn>0)
				UpDn--;
		
		}
		break;
	    default:
		break;
		}}
   if(turn%2==1&&move==0)
	{switch (wParam)	
	  { 
	case 'J':
		{
			
			power=power+1;
		    if(power==15)
			power=0;
			ioi=0;
			onlyrk=0;
		}
		break;
	case 'P':
		if(move==0&&turn%2==1&&rknum2>0)
		{
		 move=1;
		 m_rocket2.vel.x=-10;
		showrocket2=1; 
		comerk2=1;
		ioi=1;
		rknum2--;
		}
	break;   
	case 'Q':
		if(mednum2>0)
		{
			mednum2=mednum2-1;
			hp2=hp2+10;
		}
		break;
	default:
		break;
   }}}

   if(gameStatus.status==11)
{
	
	{
	switch (wParam)
	{
	case 'W':
		{
		m_hero.vel.y=-8;
		
		}
		break;
	case 'S':
		{
		m_hero.vel.y =8;

		}
		break;
	case 'A':
		{ 
		  m_hero.vel.x =-8;
		  LorR=0;
		}
		  break;
	case 'D':
		{
		 m_hero.vel.x = 8;
		LorR=1;
		}
		break;
	case VK_UP:
		{
		m_hero2.vel.y=-8;	
		}
		break;
	case VK_DOWN:
		{
		m_hero2.vel.y =8;

		}
		break;
	case VK_LEFT:
		{ 
		  m_hero2.vel.x =-8;
		  LorR2=0;
		}
		  break;
	case VK_RIGHT:
		{
		 m_hero2.vel.x = 8;
		LorR2=1;
		}
		break;
	case 'G':
		{
		if(showrocket1==0)
		{
			if(LorR==0)
			m_rocket.vel.x=-10;
			if(LorR==1)
			m_rocket.vel.x=10;
			showrocket1=1;
		}
		}
		break;
	case 'P':
		{
		if(showrocket2==0)
		{
			if(LorR2==0)
			m_rocket2.vel.x=-10;
			if(LorR2==1)
			m_rocket2.vel.x=10;
			showrocket2=1;
		}
		}
	default://在疯狂模式下的移动与炸弹
		break;
	}
	}
   }
}
VOID KeyUp(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	// TODO
	
	if(gameStatus.status!=11)
{
	if(turn%2==0)
	{
	switch (wParam)
	{
	case 'W':
	
		break;
	case 'S':
		m_hero.vel.y = 0;
		break;
	case 'A':
		{ 
		 
		  m_hero.vel.x = 0;
		  m_hero2.vel.x = 0;
		}
		  break;
	case 'D':
		{
		 m_hero.vel.x = 0;
		 m_hero2.vel.x = 0;
		}
		break;
	case 'J':
		if(move==0)
		{
		 move=1;
		 m_hero.vel.x = 0;
		  touch=1;
		 m_hero.vel.x = 0;
		 m_bullet.vel.x =power;
		 m_bullet.vel.y=-(double)power*((double)direction/3);
		  power=0;  
		}//发射子弹，发射角度使瞄准的一样
	
		break;
	default:
		break;
	}
	 }
	if(turn%2==1)
	{
	switch (wParam)
	{
	case 'W':
		
		break;
	case 'S':
		m_hero2.vel.y = 0;
		break;
	case 'A':
	{
		m_hero2.vel.x = 0;
		m_hero.vel.x = 0;
	}
		break;
	case 'D':
	{
		m_hero2.vel.x = 0;
		m_hero.vel.x = 0;
	}
		break;
     case 'J':
		if(move==0)
		 {
		 touch=1;
		 m_hero.vel.x = 0;
		 m_bullet.vel.x =-power;
		 m_bullet.vel.y=-power*((double)UpDn/3);
		 move=1;
		 power=0;
		 }
		 break;
	default:
		break;
	}
	 }


}
	if(gameStatus.status==11)
{
	switch (wParam)
	{
	case 'W':
		m_hero.vel.y=0;
		break;
	case 'S':
		m_hero.vel.y = 0;
		break;
	case 'A':
		{ 
		 
		  m_hero.vel.x = 0;
		}
		  break;
	case 'D':
		{
		 m_hero.vel.x = 0;
		}

		case VK_UP:
		{
		m_hero2.vel.y=0;
		
		}
		break;
	case VK_DOWN:
		{
		m_hero2.vel.y =0;

		}
		break;
	case VK_LEFT:
		{ 
		  m_hero2.vel.x =0;
		}
		  break;
	case VK_RIGHT:
		{
		 m_hero2.vel.x = 0;
		}
		break;
	default:
		break;
	}
}
	}
VOID LButtonDown(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	POINT ptMouse; // 鼠标点击的坐标
	ptMouse.x = LOWORD(lParam);
	ptMouse.y = HIWORD(lParam);

	//如果点击了游戏开始图标
	if (gameStatus.status==0 && ButtonClicked(ptMouse, m_gameStartButton.pos, m_gameStartButton.size))
	{
		// 启动计时器
		//SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);
		// 更改游戏状态
		gameStatus.status=2;
		 power=0,t=15,j=0,turn=0,touch=0,time1=0,time2=0,time3=0,direction=0,i=0,length,x1,x2,temp=0,flag=0,move=0;
  windtime=0,judwind=0,wind=0,hp1=30,hp2=30, UpDn=0,jud=0,boom=-5,boom1=3,away1=0,away=0,boomtimer=0,ex=0,show=0,win=0,pause=0,base,LorR=0,bye=0,bye2=0,LorR2=0;
 rknum1=2,rknum2=2,rec1=0,rec2=0,mednum1=2,mednum2=2,showrocket1=0,showrocket2=0,comerk1=0,comerk2=0,judrocket=0,judrocket2=0,ioi=0,judmed=0,showmed=1;
 choko=0,temphp=0,judhp=0,TT=1;
		m_hero = CreateHero(300, 460 - HERO_SIZE_Y, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp, 0, HERO_MAX_FRAME_NUM);
	    m_hero2 = CreateHero2(1000, 450 - HERO2_SIZE_Y, HERO2_SIZE_X, HERO2_SIZE_Y, m_hHero2Bmp, 0, HERO2_MAX_FRAME_NUM);
    //游戏初始化
		if(greennum==4)
			hp1=40;
		if(bluenum==4)
			hp2=40;
		if(greennum==1)
			hp1=20;
		if(bluenum==1)
			hp2=20;
		
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==2 && ButtonClicked(ptMouse, m_choose1.pos, m_choose1.size))
	{
		
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		
		gameStatus.status=1;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==2 && ButtonClicked(ptMouse, m_choose2.pos, m_choose2.size))
	{
		
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
	
		gameStatus.status=5;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}




if (gameStatus.status==0 && ButtonClicked(ptMouse, m_help.pos, m_help.size))
	{
		
		gameStatus.status=3;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==3 && ButtonClicked(ptMouse, m_daum.pos, m_daum.size))
	{
		
		gameStatus.status=12;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==0 && ButtonClicked(ptMouse, m_mode3.pos, m_mode3.size))
	{
		
		gameStatus.status=10;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==3 && ButtonClicked(ptMouse, m_back.pos, m_back.size))
	{
		
		gameStatus.status=0;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==1 && ButtonClicked(ptMouse, m_pause.pos, m_pause.size))
	{
		
		KillTimer(hWnd, TIMER_ID);
	
		// 更改游戏状态
		pause=1;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==1 && ButtonClicked(ptMouse, m_play.pos, m_play.size)&&pause==1)
	{
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		
		pause=0;

	}
	if (gameStatus.status==5 && ButtonClicked(ptMouse, m_pause.pos, m_pause.size))
	{
		// 启动计时器
		//SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		KillTimer(hWnd, TIMER_ID);
		
		// 更改游戏状态
		pause=1;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==5 && ButtonClicked(ptMouse, m_play.pos, m_play.size)&&pause==1)
	{
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);
		// 更改游戏状态
		pause=0;

	}



   if (gameStatus.status==4 && ButtonClicked(ptMouse, m_home.pos, m_home.size))
	{
		// 启动计时器
		//SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		// 停止计时器
		KillTimer(hWnd, TIMER_ID);
		// 更改游戏状态
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
     
   

   if (gameStatus.status==4 && ButtonClicked(ptMouse, m_next.pos, m_next.size))
	{
		// 启动计时器
		// 停止计时器
		//KillTimer(hWnd, TIMER_ID);
		// 更改游戏状态
		if(base==1&&choko==0)
			gameStatus.status=5;
		if(base==2&&choko==0)
			gameStatus.status=1;
			if(choko==1)
			{
				gameStatus.status=0;
				choko=0;
			}
		{  power=0,t=15,j=0,turn=0,touch=0,time1=0,time2=0,time3=0,direction=0,i=0,length,x1,x2,temp=0,flag=0,move=0;
  windtime=0,judwind=0,wind=0,hp1=30,hp2=30, UpDn=0,jud=0,boom=-5,boom1=3,away1=0,away=0,boomtimer=0,ex=0,show=0,win=0,pause=0,base,LorR=0,bye=0,bye2=0,LorR2=0,bluenum=1,greennum=1;
 rknum1=2,rknum2=2,rec1=0,rec2=0,mednum1=2,mednum2=2,showrocket1=0,showrocket2=0,comerk1=0,comerk2=0,judrocket=0,judrocket2=0,ioi=0,judmed=0,showmed=1;
 choko=0,temphp=0,judhp=0,TT=1;}
		m_hero = CreateHero(300, 460 - HERO_SIZE_Y, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp, 0, HERO_MAX_FRAME_NUM);
	m_hero2 = CreateHero2(1000, 450 - HERO2_SIZE_Y, HERO2_SIZE_X, HERO2_SIZE_Y, m_hHero2Bmp, 0, HERO2_MAX_FRAME_NUM);
    m_boom = CreateBoom(300, 450 - BOOM_SIZE_Y, BOOM_SIZE_X, BOOM_SIZE_Y, m_hBoomBmp, 0, HERO_MAX_FRAME_NUM);
		
	if(greennum==4)
			hp1=40;
		if(bluenum==4)
			hp2=40;
		if(greennum==1)
			hp1=20;
		if(bluenum==1)
			hp2=20;
		
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}

   if (gameStatus.status==0 && ButtonClicked(ptMouse, m_herobutton.pos, m_herobutton.size))
	{
		
		gameStatus.status=6;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
    if (gameStatus.status==0 && ButtonClicked(ptMouse, m_blueteam.pos, m_blueteam.size))
	{
		
		gameStatus.status=7;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}

   if (gameStatus.status==6 && ButtonClicked(ptMouse, m_back.pos, m_back.size))
	{
		
		gameStatus.status=0;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
   
   if (gameStatus.status==12 && ButtonClicked(ptMouse, m_back.pos, m_back.size))
	{
		
		gameStatus.status=3;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}

   if (gameStatus.status==7 && ButtonClicked(ptMouse, m_back.pos, m_back.size))
	{
		
		gameStatus.status=0;

		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
    if (gameStatus.status==6 && ButtonClicked(ptMouse, m_hero1pyobon.pos, m_hero1pyobon.size))
	{
		
		greennum=1;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}

   if (gameStatus.status==6 && ButtonClicked(ptMouse, m_hero2pyobon.pos, m_hero2pyobon.size))
	{
		
		greennum=2;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
      if (gameStatus.status==6 && ButtonClicked(ptMouse, m_hero3.pos, m_hero3.size))
	{
		
		greennum=3;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	   if (gameStatus.status==6 && ButtonClicked(ptMouse, m_hero4.pos, m_hero4.size))
	{
		
		greennum=4;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	      if (gameStatus.status==7 && ButtonClicked(ptMouse, m_hero4.pos, m_hero4.size))
	{
		
		bluenum=4;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}

	   if (gameStatus.status==7 && ButtonClicked(ptMouse, m_hero3.pos, m_hero3.size))
	{
		
		bluenum=3;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
   if (gameStatus.status==7 && ButtonClicked(ptMouse, m_hero2pyobon.pos, m_hero2pyobon.size))
	{
		
		bluenum=2;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==7 && ButtonClicked(ptMouse, m_hero1pyobon.pos, m_hero1pyobon.size))
	{
		
		bluenum=1;
		gameStatus.status=0;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	if (gameStatus.status==0 && ButtonClicked(ptMouse, m_mode2.pos, m_mode2.size))
	{
		
		gameStatus.status=8;
		{  power=0,t=15,j=0,turn=0,touch=0,time1=0,time2=0,time3=0,direction=0,i=0,length,x1,x2,temp=0,flag=0,move=0;
  windtime=0,judwind=0,wind=0,hp1=30,hp2=30, UpDn=0,jud=0,boom=-5,boom1=3,away1=0,away=0,boomtimer=0,ex=0,show=0,win=0,pause=0,base,LorR=0,bye=0,bye2=0,LorR2=0;
 rknum1=2,rknum2=2,rec1=0,rec2=0,mednum1=2,mednum2=2,showrocket1=0,showrocket2=0,comerk1=0,comerk2=0,judrocket=0,judrocket2=0,ioi=0,judmed=0,showmed=1;
 choko=0,temphp=0,judhp=0,TT=1;}
		m_hero = CreateHero(300, 460 - HERO_SIZE_Y, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp, 0, HERO_MAX_FRAME_NUM);
	m_hero2 = CreateHero2(1000, 450 - HERO2_SIZE_Y, HERO2_SIZE_X, HERO2_SIZE_Y, m_hHero2Bmp, 0, HERO2_MAX_FRAME_NUM);
    m_boom = CreateBoom(300, 450 - BOOM_SIZE_Y, BOOM_SIZE_X, BOOM_SIZE_Y, m_hBoomBmp, 0, HERO_MAX_FRAME_NUM);
		
	if(greennum==4)
			hp1=40;
		if(bluenum==4)
			hp2=40;
		if(greennum==1)
			hp1=20;
		if(bluenum==1)
			hp2=20;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
	if(gameStatus.status==8&& ButtonClicked(ptMouse, m_madchoose1.pos, m_madchoose1.size))
	{
		
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		gameStatus.status=9;
		choko=1;
		InvalidateRect(hWnd, NULL, TRUE);
	}

if (gameStatus.status==9 && ButtonClicked(ptMouse, m_pause.pos, m_pause.size))
	{
		
		KillTimer(hWnd, TIMER_ID);
	
		// 更改游戏状态
		pause=1;
		InvalidateRect(hWnd, NULL, TRUE);//第三个参数设为TRUE，重画整个画布。
	}
if (gameStatus.status==9 && ButtonClicked(ptMouse, m_play.pos, m_play.size)&&pause==1)
	{
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		
		
		pause=0;

	}
if (gameStatus.status==10 && ButtonClicked(ptMouse, m_madchoose1.pos, m_madchoose1.size))
	{
		// 启动计时器
		SetTimer(hWnd, TIMER_ID, TIMER_ELAPSE, NULL);
		
		power=0,t=15,j=0,turn=0,touch=0,time1=0,time2=0,time3=0,direction=0,i=0,length,x1,x2,temp=0,flag=0,move=0;
  windtime=0,judwind=0,wind=0,hp1=30,hp2=30, UpDn=0,jud=0,boom=-5,boom1=3,away1=0,away=0,boomtimer=0,ex=0,show=0,win=0,pause=0,base,LorR=0,bye=0,bye2=0,LorR2=0;
 rknum1=2,rknum2=2,rec1=0,rec2=0,mednum1=2,mednum2=2,showrocket1=0,showrocket2=0,comerk1=0,comerk2=0,judrocket=0,judrocket2=0,ioi=0,judmed=0,showmed=1;
 choko=0,temphp=0,judhp=0,TT=1,LorR=0,LorR2=0;
m_hero = CreateHero(300, 460 - HERO_SIZE_Y, HERO_SIZE_X, HERO_SIZE_Y, m_hHeroBmp, 0, HERO_MAX_FRAME_NUM);
	m_hero2 = CreateHero2(1000, 450 - HERO2_SIZE_Y, HERO2_SIZE_X, HERO2_SIZE_Y, m_hHero2Bmp, 0, HERO2_MAX_FRAME_NUM);		
 gameStatus.status=11;
		choko=1;

	}
}
