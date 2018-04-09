#ifndef GLOBAL_H
#define GLOBAL_H

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <math.h>
#include "resource.h"


// 定义宏变量，WNDWIDTH、WNDHEIGHT为窗口的宽和高
#define TIMER_ID             1		//计时器ID
#define TIMER_ELAPSE         20	//计时器间隔(ms)
#define WNDWIDTH             1200	//窗口的宽
#define WNDHEIGHT            600	//窗口的高
#define TITLEBARHEIGHT       32		//标题栏高


// 定义资源的尺寸
#define HERO_SIZE_X          35
#define HERO_SIZE_Y          35
#define HERO_MAX_FRAME_NUM   3
#define GAME_START_BUTTON_SIZE_X   147
#define GAME_START_BUTTON_SIZE_Y   60
#define HERO2_SIZE_X          35
#define HERO2_SIZE_Y          35      
#define HERO2_MAX_FRAME_NUM   3
#define BULLET_SIZE_X         12
#define BULLET_SIZE_Y		  12
#define BULLET_MAX_FRAME_NUM   3
#define ANGLE_MAX_FRAME_NUM    3
#define CHOOSE_SIZE_X		   600
#define CHOOSE_SIZE_Y		   300
#define SUPERANGLE_SIZE_X	   5
#define	SUPERANGLE_SIZE_Y	   5
#define BOOM_SIZE_X			   60
#define BOOM_SIZE_Y			   60
#define HELP_SIZE_X			   60
#define HELP_SIZE_Y			   60
#define WIN_SIZE_X			   800
#define	WIN_SIZE_Y			   200
#define PLAY_SIZE_X			   60
#define PLAY_SIZE_Y			   60
#define PAUSE_SIZE_X		   60
#define PAUSE_SIZE_Y		   60
#define BIGPAUSE_SIZE_X		   600
#define BIGPAUSE_SIZE_Y		   200
#define BUTTON_SIZE_X          100
#define BUTTON_SIZE_Y		   100
//定义游戏常量
#define MAX_TERRIAN_NUM      1200		//最大地块数量
#define GRAVITY				 3		//重力
#define HERO_VEL_X			 2		//英雄水平速度
#define HERO_VEL_Y			 10 	//英雄竖直速度
#define HERO2_VEL_X			 2		//英雄水平速度
#define HERO2_VEL_Y			 10	
#define BULLET_VEL_X		 5
#define BULLET_VEL_Y         0

// 英雄结构体，英雄位图、位置、大小*/
typedef struct
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
} Hero;


typedef struct//두번째영웅
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
} Hero2;//두번째영웅

typedef struct//총알
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
} Bullet;//총알



typedef struct
{
	HBITMAP	hBmp;	
	POINT	pos;	
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
}Boom;


typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE	size;
} Blood;



/*地形结构体，地形方块位置、大小*/
typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE    size;
} Terrian;


typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE    size;
} Terrian2;



typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE    size;
} SuperAngle;
typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE    size;
} Angle;


typedef struct
{
	HBITMAP hBmp;
	POINT	pos;
	SIZE    size;
} Gage;


/*按钮结构体*/
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  GameButton;


typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  HeroButton;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Sun;


typedef struct
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
}  Rocket;

typedef struct
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
}  GetRocket;


typedef struct
{
	
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Rocketnum;

typedef struct
{
	HBITMAP	hBmp;	//英雄图片
	POINT	pos;	//英雄
	POINT   vel;
	SIZE	size;
	int     curFrameIndex;
	int     maxFrameSize;
}  Rocket2;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Rocket2num;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Med;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Med2;



typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  BlueTeam;
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  GreenTeam;



typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Champ1;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Champ2;
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Hero3;
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Hero4;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Hero1Pyobon;
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Hero2Pyobon;


typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Winddir;



typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Play;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Pause;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  BigPause;




typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Back;
typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Home;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  MadChoose1;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Next;


typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  help;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	
} Daum;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Medr;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Mode2;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Mode3;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Greenwin;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Bluewin;



typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Choose1;

typedef struct
{
	HBITMAP	hBmp;	//按钮图片
	POINT   pos;	//按钮位置
	SIZE	size;	//按钮尺寸
	int	status;	//按钮状态
}  Choose2;




/*游戏状态结构体*/
typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus;

typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus2;

typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus3;

typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus4;
typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus5;
typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus6;

typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus7;

typedef struct
{
	HBITMAP	hBmp;	//背景图片
	int	status;	//游戏状态
}  GameStatus8;

typedef struct
{
	HBITMAP hBmp;
	int status;
} GameStatus9;
typedef struct
{
	HBITMAP hBmp;
	int status;
}GameStatus10;
typedef struct
{
	HBITMAP hBmp;
	int status;
}GameStatus11;
typedef struct
{
	HBITMAP hBmp;
	int status;
}GameStatus12;
typedef struct
{
	HBITMAP hBmp;
	int status;
}GameStatus13;
/****************
0  开始界面
2  地图1 
3  选图界面
4  说明界面
5  结束界面
6   地图2
7   选择英雄
*****************/

// 全局函数

/*************************************************
Fucntion : 创建英雄人物
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
hBmp表示位图句柄
curFrameIndex当前帧
maxFrameSize最大帧率
*************************************************/
Hero CreateHero(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
Hero2 CreateHero2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
Bullet CreateBullet(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
Boom CreateBoom(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
Rocket CreateRocket(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
Rocket2 CreateRocket2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
GetRocket CreateGetRocket(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize);
/*************************************************
Fucntion : 创建游戏状态
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
hBmp表示位图句柄
*************************************************/
Winddir	CreateWinddir(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Greenwin CreateGreenwin(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Bluewin	 CreateBluewin(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
GameButton CreateGameButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Mode2 CreateMode2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Mode3 CreateMode3(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
HeroButton CreateHeroButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
BlueTeam CreateBlueTeam(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
GreenTeam CreateGreenTeam(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Champ1 CreateChamp1(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Daum CreateDaum(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Champ2 CreateChamp2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Hero3 CreateHero3(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Sun	  CreateSun(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Hero4 CreateHero4(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Hero1Pyobon CreateHero1Pyobon(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Hero2Pyobon CreateHero2Pyobon(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
help Createhelp(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Choose1 CreateChoose1(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Choose2 CreateChoose2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
MadChoose1 CreateMadChoose1(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Angle CreateAngle(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);
SuperAngle CreateSuperAngle(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);
Back CreateBack(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Play CreatePlay(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Pause CreatePause(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
BigPause CreateBigPause(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Home CreateHome(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Next CreateNext(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);

Rocketnum CreateRocketnum(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
	
Rocket2num CreateRocket2num(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Med CreateMed(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Med2 CreateMed2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
Medr CreateMedr(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status);
/*************************************************
Fucntion : 创建单个地形
Parameter:
posX、posY表示矩形左上角的坐标
sizeX、sizeY表示矩形的size
*************************************************/
Terrian CreateTerrian(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);
Terrian2 CreateTerrian2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);


Blood CreateBlood(LONG posX,LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);
Gage CreateGage(LONG posX,LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp);

#endif // !GLOBAL_H
