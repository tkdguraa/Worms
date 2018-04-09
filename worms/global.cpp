#include "global.h"




Hero CreateHero(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Hero hero;
	hero.hBmp = hBmp;
	hero.pos.x = posX;
	hero.pos.y = posY;
	hero.vel.x = 0;
	hero.vel.y = 0;
	hero.size.cx = sizeX;
	hero.size.cy = sizeY;
	hero.curFrameIndex = curFrameIndex;
	hero.maxFrameSize = maxFrameSize;
	return hero;
}

Hero2 CreateHero2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Hero2 hero2;
	hero2.hBmp = hBmp;
	hero2.pos.x = posX;
	hero2.pos.y = posY;
	hero2.vel.x = 0;
	hero2.vel.y = 0;
	hero2.size.cx = sizeX;
	hero2.size.cy = sizeY;
	hero2.curFrameIndex = curFrameIndex;
	hero2.maxFrameSize = maxFrameSize;
	return hero2;
}




GameButton CreateGameButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	GameButton gameButton;
	gameButton.pos.x = posX;
	gameButton.pos.y = posY;
	gameButton.size.cx = sizeX;
	gameButton.size.cy = sizeY;
	gameButton.hBmp = hBmp;
	gameButton.status = status;
	return gameButton;
}
Sun CreateSun(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Sun Sun;
	Sun.pos.x = posX;
	Sun.pos.y = posY;
	Sun.size.cx = sizeX;
	Sun.size.cy = sizeY;
	Sun.hBmp = hBmp;
	Sun.status = status;
	return Sun;
}

HeroButton CreateHeroButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	HeroButton HeroButton;
	HeroButton.pos.x = posX;
	HeroButton.pos.y = posY;
	HeroButton.size.cx = sizeX;
	HeroButton.size.cy = sizeY;
	HeroButton.hBmp = hBmp;
	HeroButton.status = status;
	return HeroButton;
}

Back CreateBack(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Back back;
	back.pos.x = posX;
	back.pos.y = posY;
	back.size.cx = sizeX;
	back.size.cy = sizeY;
	back.hBmp = hBmp;
	back.status = status;
	return back;
}


Greenwin CreateGreenwin(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Greenwin greenwin;
	greenwin.pos.x = posX;
	greenwin.pos.y = posY;
	greenwin.size.cx = sizeX;
	greenwin.size.cy = sizeY;
	greenwin.hBmp = hBmp;
	greenwin.status = status;
	return greenwin;
}

GreenTeam CreateGreenTeam(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	GreenTeam greenteam;
	greenteam.pos.x = posX;
	greenteam.pos.y = posY;
	greenteam.size.cx = sizeX;
	greenteam.size.cy = sizeY;
	greenteam.hBmp = hBmp;
	greenteam.status = status;
	return greenteam;
}
Rocket CreateRocket(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Rocket rocket;
	rocket.hBmp = hBmp;
	rocket.pos.x = posX;
	rocket.pos.y = posY;
	rocket.vel.x = 0;
	rocket.vel.y = 0;
	rocket.size.cx = sizeX;
	rocket.size.cy = sizeY;
	rocket.curFrameIndex = curFrameIndex;
	rocket.maxFrameSize = maxFrameSize;
	return rocket;
}
Rocketnum CreateRocketnum(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Rocketnum rocketnum;
	rocketnum.pos.x = posX;
	rocketnum.pos.y = posY;
	rocketnum.size.cx = sizeX;
	rocketnum.size.cy = sizeY;
	rocketnum.hBmp = hBmp;
	rocketnum.status = status;
	return rocketnum;
}
Rocket2 CreateRocket2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp,int curFrameIndex, int maxFrameSize)
{
	Rocket2 rocket2;
	rocket2.hBmp = hBmp;
	rocket2.pos.x = posX;
	rocket2.pos.y = posY;
	rocket2.vel.x = 0;
	rocket2.vel.y = 0;
	rocket2.size.cx = sizeX;
	rocket2.size.cy = sizeY;
	rocket2.curFrameIndex = curFrameIndex;
	rocket2.maxFrameSize = maxFrameSize;
	return rocket2;
}

GetRocket CreateGetRocket(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp,int curFrameIndex, int maxFrameSize)
{
	GetRocket getrocket;
	getrocket.hBmp = hBmp;
	getrocket.pos.x = posX;
	getrocket.pos.y = posY;
	getrocket.vel.x = 0;
	getrocket.vel.y = 0;
	getrocket.size.cx = sizeX;
	getrocket.size.cy = sizeY;
	getrocket.curFrameIndex = curFrameIndex;
	getrocket.maxFrameSize = maxFrameSize;
	return getrocket;
}
Rocket2num CreateRocket2num(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Rocket2num rocket2num;
	rocket2num.pos.x = posX;
	rocket2num.pos.y = posY;
	rocket2num.size.cx = sizeX;
	rocket2num.size.cy = sizeY;
	rocket2num.hBmp = hBmp;
	rocket2num.status = status;
	return rocket2num;
}

Bluewin CreateBluewin(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Bluewin bluewin;
	bluewin.pos.x = posX;
	bluewin.pos.y = posY;
	bluewin.size.cx = sizeX;
	bluewin.size.cy = sizeY;
	bluewin.hBmp = hBmp;
	bluewin.status = status;
	return bluewin;
}


BlueTeam CreateBlueTeam(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	BlueTeam blueteam;
	blueteam.pos.x = posX;
	blueteam.pos.y = posY;
	blueteam.size.cx = sizeX;
	blueteam.size.cy = sizeY;
	blueteam.hBmp = hBmp;
	blueteam.status = status;
	return blueteam;
}

Mode2 CreateMode2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Mode2 mode2;
	mode2.pos.x = posX;
	mode2.pos.y = posY;
	mode2.size.cx = sizeX;
	mode2.size.cy = sizeY;
	mode2.hBmp = hBmp;
	mode2.status = status;
	return mode2;
}
Mode3 CreateMode3(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Mode3 mode3;
	mode3.pos.x = posX;
	mode3.pos.y = posY;
	mode3.size.cx = sizeX;
	mode3.size.cy = sizeY;
	mode3.hBmp = hBmp;
	mode3.status = status;
	return mode3;
}


Med CreateMed(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Med med;
	med.pos.x = posX;
	med.pos.y = posY;
	med.size.cx = sizeX;
	med.size.cy = sizeY;
	med.hBmp = hBmp;
	med.status = status;
	return med;
}
Med2 CreateMed2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Med2 med2;
	med2.pos.x = posX;
	med2.pos.y = posY;
	med2.size.cx = sizeX;
	med2.size.cy = sizeY;
	med2.hBmp = hBmp;
	med2.status = status;
	return med2;
}

Medr CreateMedr(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Medr medr;
	medr.pos.x = posX;
	medr.pos.y = posY;
	medr.size.cx = sizeX;
	medr.size.cy = sizeY;
	medr.hBmp = hBmp;
	medr.status = status;
	return medr;
}

help Createhelp(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	help help;
	help.pos.x = posX;
	help.pos.y = posY;
	help.size.cx = sizeX;
	help.size.cy = sizeY;
	help.hBmp = hBmp;
	help.status = status;
	return help;
}

Home CreateHome(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Home home;
	home.pos.x = posX;
	home.pos.y = posY;
	home.size.cx = sizeX;
	home.size.cy = sizeY;
	home.hBmp = hBmp;
	home.status = status;
	return home;
}

Hero3 CreateHero3(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Hero3 hero3;
	hero3.pos.x = posX;
	hero3.pos.y = posY;
	hero3.size.cx = sizeX;
	hero3.size.cy = sizeY;
	hero3.hBmp = hBmp;
	hero3.status = status;
	return hero3;
}


Hero4 CreateHero4(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Hero4 hero4;
	hero4.pos.x = posX;
	hero4.pos.y = posY;
	hero4.size.cx = sizeX;
	hero4.size.cy = sizeY;
	hero4.hBmp = hBmp;
	hero4.status = status;
	return hero4;
}

Hero1Pyobon CreateHero1Pyobon(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Hero1Pyobon hero1pyobon;
	hero1pyobon.pos.x = posX;
	hero1pyobon.pos.y = posY;
	hero1pyobon.size.cx = sizeX;
	hero1pyobon.size.cy = sizeY;
	hero1pyobon.hBmp = hBmp;
	hero1pyobon.status = status;
	return hero1pyobon;
}

Hero2Pyobon CreateHero2Pyobon(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Hero2Pyobon hero2pyobon;
	hero2pyobon.pos.x = posX;
	hero2pyobon.pos.y = posY;
	hero2pyobon.size.cx = sizeX;
	hero2pyobon.size.cy = sizeY;
	hero2pyobon.hBmp = hBmp;
	hero2pyobon.status = status;
	return hero2pyobon;
}


Next CreateNext(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Next next;
	next.pos.x = posX;
	next.pos.y = posY;
	next.size.cx = sizeX;
	next.size.cy = sizeY;
	next.hBmp = hBmp;
	next.status = status;
	return next;
}

Play CreatePlay(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Play play;
	play.pos.x = posX;
	play.pos.y = posY;
	play.size.cx = sizeX;
	play.size.cy = sizeY;
	play.hBmp = hBmp;
	play.status = status;
	return play;
}

Pause CreatePause(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Pause pause;
	pause.pos.x = posX;
	pause.pos.y = posY;
	pause.size.cx = sizeX;
	pause.size.cy = sizeY;
	pause.hBmp = hBmp;
	pause.status = status;
	return pause;
}
BigPause CreateBigPause(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	BigPause bigpause;
	bigpause.pos.x = posX;
	bigpause.pos.y = posY;
	bigpause.size.cx = sizeX;
	bigpause.size.cy = sizeY;
	bigpause.hBmp = hBmp;
	bigpause.status = status;
	return bigpause;
}


Choose1 CreateChoose1(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Choose1 Choose1;
	Choose1.pos.x = posX;
	Choose1.pos.y = posY;
	Choose1.size.cx = sizeX;
	Choose1.size.cy = sizeY;
	Choose1.hBmp = hBmp;
	Choose1.status = status;
	return Choose1;
}
Choose2 CreateChoose2(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Choose2 Choose2;
	Choose2.pos.x = posX;
	Choose2.pos.y = posY;
	Choose2.size.cx = sizeX;
	Choose2.size.cy = sizeY;
	Choose2.hBmp = hBmp;
	Choose2.status = status;
	return Choose2;
}

MadChoose1 CreateMadChoose1(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	MadChoose1 madchoose1;
	madchoose1.pos.x = posX;
	madchoose1.pos.y = posY;
	madchoose1.size.cx = sizeX;
	madchoose1.size.cy = sizeY;
	madchoose1.hBmp = hBmp;
	madchoose1.status = status;
	return madchoose1;
}


Winddir CreateWinddir(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	Winddir winddir;
	winddir.pos.x = posX;
	winddir.pos.y = posY;
	winddir.size.cx = sizeX;
	winddir.size.cy = sizeY;
	winddir.hBmp = hBmp;
	winddir.status = status;
	return winddir;
}





Terrian CreateTerrian(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp)
{
	Terrian terrian;
	terrian.pos.x = posX;
	terrian.pos.y = posY;
	terrian.size.cx = sizeX;
	terrian.size.cy = sizeY;
	terrian.hBmp = hBlockBmp;
	return terrian;
}



Terrian2 CreateTerrian2(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp)
{
	Terrian2 terrian2;
	terrian2.pos.x = posX;
	terrian2.pos.y = posY;
	terrian2.size.cx = sizeX;
	terrian2.size.cy = sizeY;
	terrian2.hBmp = hBlockBmp;
	return terrian2;
}

Daum CreateDaum(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp,int status)
{
	Daum daum;
	daum.pos.x = posX;
	daum.pos.y = posY;
	daum.size.cx = sizeX;
	daum.size.cy = sizeY;
	daum.hBmp = hBlockBmp;
	daum.status = status;
	return daum;
}	


SuperAngle CreateSuperAngle(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp)
{
	SuperAngle superangle;
	superangle.pos.x = posX;
	superangle.pos.y = posY;
	superangle.size.cx = sizeX;
	superangle.size.cy = sizeY;
	superangle.hBmp = hBlockBmp;
	return superangle;

}

Angle CreateAngle(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp)
{
	Angle angle;
	angle.pos.x = posX;
	angle.pos.y = posY;
	angle.size.cx = sizeX;
	angle.size.cy = sizeY;
	angle.hBmp = hBlockBmp;
	return angle;

}

Gage CreateGage(LONG posX, LONG posY, LONG sizeX, LONG sizeY,
	HBITMAP hBlockBmp)
{
	Gage gage;
	gage.pos.x = posX;
	gage.pos.y = posY;
	gage.size.cx = sizeX;
	gage.size.cy = sizeY;
	gage.hBmp = hBlockBmp;
	return gage;
}

Blood CreateBlood(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBlockBmp)
{
	Blood blood;
	blood.pos.x = posX;
	blood.pos.y = posY;
	blood.size.cx = sizeX;
	blood.size.cy = sizeY;
	blood.hBmp = hBlockBmp;
	return blood;
}


Bullet CreateBullet(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Bullet bullet;
	bullet.hBmp = hBmp;
	bullet.pos.x = posX;
	bullet.pos.y = posY;
	bullet.vel.x = 0;
	bullet.vel.y = 0;
	bullet.size.cx = sizeX;
	bullet.size.cy = sizeY;
	bullet.curFrameIndex = curFrameIndex;
	bullet.maxFrameSize = maxFrameSize;
	return bullet;
}


Boom CreateBoom(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Boom boom;
	boom.hBmp = hBmp;
	boom.pos.x = posX;
	boom.pos.y = posY;
	boom.size.cx = sizeX;
	boom.size.cy = sizeY;
	boom.curFrameIndex = curFrameIndex;
	boom.maxFrameSize = maxFrameSize;
	return boom;
}
