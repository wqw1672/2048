
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

int game=0;//�ж���Ϸ�Ƿ����
int i,j,number=3;

int curMenu=0;//�˵�ѡ��
void FirstMenu();
void user();
void root();
void wasd(int a[4][4],char ch);
void Game();//��Ϸ����
void load();
void ChoiceMenu();//�˵�
void login();
void control();
void list();//���а���δ���.
void grade(int x,int y);
void loadpicture(int z,int x,int y);
char *scanf_(int a);//�����������Ĳ���
int empty=16;//��λ�ж�
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


