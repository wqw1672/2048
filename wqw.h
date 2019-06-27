
#ifndef _WQW_H_
#define _WQW_H_
#include"move.h"
IMAGE bg;
IMAGE zero;
IMAGE two,two2,two3,two4,two5,two6,two7,two8,two9,two10,two11;
IMAGE zero_,one,two_,three,four,five,six,seven,eight,nine;
IMAGE zero1,one1,two1,three1,four1,five1,six1,seven1,eight1,nine1;
char p[6];
char *passwd="admin";
char a[20][6];
#define WINDOW_WIDTH  720
#define WINDOW_HEIGHT 540

int game=0;//判断游戏是否结束
int i,j,number=3;

int curMenu=0;//菜单选择
void FirstMenu();
void user();
void root();
void wasd(int a[4][4],char ch);
void Game();//游戏内容
void load();
void ChoiceMenu();//菜单
void login();
void control();
void list();//排行榜，暂未完成.
void grade(int x,int y);
void loadpicture(int z,int x,int y);
char *scanf_(int a);//输入加密密码的操作
int empty=16;//空位判定
void root_add();

typedef struct user
{
    char name[6];
	char passwd[7];
	char ID[6];
	int grade;
}USER;

USER user1[100]={{"wqw","123456",256},{"www","123456",337}};
#endif _WQW_H_


