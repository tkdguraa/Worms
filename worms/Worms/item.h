#ifndef ITEM_H
#define ITEM_H

#include "global.h"


//// ȫ�ֱ���

// ����λͼ���
HBITMAP m_hBackgroundBmp;
HBITMAP m_hHeroBmp;
HBITMAP m_hGameStartButtonBmp;
HBITMAP m_hHero2Bmp;
HBITMAP m_hBulletBmp;
HBITMAP m_hBackground2Bmp;
HBITMAP m_hAngleBmp;
HBITMAP m_hAngle2Bmp;
HBITMAP m_hAngle3Bmp;
HBITMAP m_hAngle4Bmp;
HBITMAP m_hChoosemapBmp;
HBITMAP m_hHerolBmp;
HBITMAP m_hHerorBmp;
HBITMAP m_hChoose1Bmp;
HBITMAP m_hChoose2Bmp;
HBITMAP m_hBoomBmp;
HBITMAP m_hhelpBmp;
HBITMAP m_hIntroductionBmp;
HBITMAP m_hbackBmp;
HBITMAP m_hendingBmp;
HBITMAP m_hgreenwinBmp;
HBITMAP m_hbluewinBmp;
HBITMAP m_hplayBmp;
HBITMAP m_hpauseBmp;
HBITMAP m_hbigpauseBmp;
HBITMAP m_hnextBmp;
HBITMAP m_hhomeBmp;
HBITMAP m_hBackground3Bmp;
HBITMAP m_hHero2RBmp;
HBITMAP m_hHero3RBmp;
HBITMAP m_hHero3LBmp;
HBITMAP m_hHero4RBmp;
HBITMAP m_hHero4LBmp;
HBITMAP m_hChooseHeroBmp;
HBITMAP m_hHeroButtonBmp;
HBITMAP m_hGreenTeamBmp;
HBITMAP m_hBlueTeamBmp;
HBITMAP m_hHero3Bmp;
HBITMAP m_hHero4Bmp;
HBITMAP m_hHero1PyobonBmp;
HBITMAP m_hHero2PyobonBmp;
HBITMAP m_hChooseHero2Bmp;
HBITMAP m_hNorthBmp;
HBITMAP m_hEastBmp;
HBITMAP m_hSouthBmp;
HBITMAP m_hWestBmp;
HBITMAP m_hWinddir;
HBITMAP m_hRocketBmp;
HBITMAP m_hRocketnumBmp;
HBITMAP m_hRocket2Bmp;
HBITMAP m_hRocket2numBmp;
HBITMAP m_hMedBmp;
HBITMAP m_hMed2Bmp;
HBITMAP m_hMode2Bmp;
HBITMAP m_hMapBmp;
HBITMAP m_hMadChoose1Bmp;
HBITMAP m_hGetRocketBmp;
HBITMAP m_hWallBmp;
HBITMAP m_hSunBmp;
HBITMAP m_hMoonBmp;
HBITMAP m_hLuanDouBmp;
HBITMAP m_hMode3Bmp;
HBITMAP m_hMap2Bmp;
HBITMAP m_hRocket2RBmp;
HBITMAP m_hRocketLBmp;
HBITMAP m_hDaumBmp;
HBITMAP m_hIntroduction2Bmp;
// ����Ӣ�ۡ����������Ρ���ť
Hero          m_hero;
Terrian       m_terrian[MAX_TERRIAN_NUM];
Terrian2	  m_terrian2[MAX_TERRIAN_NUM];
Gage		  m_gage[2];
GameButton    m_gameStartButton;
Choose1		  m_choose1;
Choose2		  m_choose2;
Hero2         m_hero2;
Blood		  m_blood[2];
Bullet		  m_bullet;
Angle		  m_angle[50];
SuperAngle	  m_superangle[50];
Boom		  m_boom;
help		  m_help;
Back		  m_back;
Greenwin	  m_greenwin;
Bluewin		  m_bluewin;
Play		  m_play;
Pause		  m_pause;
BigPause	  m_bigpause;
Next		  m_next;
Home		  m_home;
Hero3		  m_hero3;
Hero4		  m_hero4;
HeroButton    m_herobutton;
BlueTeam	  m_blueteam;
GreenTeam	  m_greenteam;
Hero1Pyobon	  m_hero1pyobon;
Hero2Pyobon   m_hero2pyobon;
Winddir	      m_winddir;
Rocket		  m_rocket;
Rocketnum	  m_rocketnum;
Rocket2       m_rocket2;
Rocket2num    m_rocket2num;
Med			  m_med;
Med2          m_med2;
Medr		  m_medr;
Mode2		  m_mode2;
Mode3		  m_mode3;
MadChoose1	  m_madchoose1;
GetRocket	  m_getrocket;
Sun			  m_sun;
Daum	  m_daum;
// ������Ϸ״̬
GameStatus gameStatus;
GameStatus2 gameStatus2;
GameStatus3 gameStatus3;
GameStatus4 gameStatus4;
GameStatus5 gameStatus5;
GameStatus6 gameStatus6;
GameStatus7	gameStatus7;
GameStatus8 gameStatus8;
GameStatus9 gamestatus9;
GameStatus10  gamestatus10;
GameStatus11  gamestatus11;
GameStatus12  gamestatus12;
GameStatus13  gamestatus13;
#endif