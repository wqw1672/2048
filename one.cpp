#include"wqw.h"
#include"load.cpp"
int main(){
	while(1){
 login();
	
	}   
		return 0;
}



void Game(){
int a[4][4]={0};
	int x,y,z,sum=0;
	char ch=0;
	x=rand()%4;
	y=rand()%4;
	a[x][y]=2;
	empty--;
	
	do{


		if(empty>0)
			{
				do
				{
					x=rand()%4;
					y=rand()%4;
				}while(a[x][y]!=0);
				if(rand()%2==1)
					a[x][y]=2;
				else
					a[x][y]=4;
               	empty--;
			}
			else
			{
			   for(i=0;i<4;i++)
			   {
			     for(j=0;j<4;j++)
				 {
				    if((a[i][j]==a[i][j+1])||(a[i][j]==a[i-1][j]))//判断是否可以继续游戏
                         game=1;
				 }
			   }

			   if(game==0)
			   {
			      break;
			   }
			   printf("\n 1010  \n");
			}
			 system("cls");	

			for(i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
					printf(" %d ",a[i][j]);
				printf("\n");
			}
			BeginBatchDraw();   
			putimage(0,0,&bg);
			sum=0;
			for(i=0;i<4;i++){
                for(j=0;j<4;j++)
				{
				    z=a[i][j];
					loadpicture(z,j,i);
					sum=sum+a[i][j];
				}
			}
						printf("\n%d\n",sum);
				   while(sum!=0)
				   {
				      i=sum%10;
					  j--;
					  sum/=10;
					  grade(i,j);
					  printf("oo");
				   }
				   user1[number].grade=sum;
			EndBatchDraw();

		    ch=getch();
         wasd(a,ch);
			printf("请等待提示字样消失");
	}while(ch=='w'||ch=='a'||ch=='d'||ch=='s');
		printf("游戏结束");
		getch();
		empty=16;
   FirstMenu();
}
void user()
{
	int gameover=0;
	i=0;
	j=0;
printf("\n请输入用户账号:");
	/*	do
			{
			   
			   p[i]=getch();
               if(p[i]=='\r'&&i>0)
			   {
				   break;
			   
			   }
				   if(p[i]=='\b')
				{
				   if(i==0)
				   {
				      printf("\a");
					  continue;
				   }
				   i=i-1;
				   printf("\b \b");
				}
			    else
				{

				  printf("*");
				  				  i=i+1;
				}
			}while(p[i]!='\n'&&i<6);
		   while(i<6){
				p[i]='\0';
				i++;
			   }
			   */
           scanf_(0);
			 for(j=0;j<=100;j++)
			 {

				 if(strcmp(p,user1[j].name)==0){
				   gameover=1;
				   break;
				 }
			 }
			 
			   if(gameover==1)
			   {
			      printf("\n请输入密码：");
				  scanf_(1);
				  if(strcmp(p,user1[j].passwd)==1)
                         gameover=0;
			   }
				 if(gameover==0)
				 {
				printf("\n 密码错误\n");
				Sleep(1000);
				 }
				 if(gameover==1)
					 FirstMenu();
}
void root()
{
	i=0;
	j=0;  
root_add();
	

}
 
void login()
{    
 system("cls");

     printf("------------------------1.普通游戏用户登录(最多6位数)----------------------\n");
     printf("------------------------2.注册新用户---------------------------------------\n");

	 char ch;
	 ch=getch();
	 if(ch!='1'&&ch!='2')
	 {
			 printf("无效输入，请重新输入");
	         Sleep(1000);
	 }
		 if(ch=='2')
		     root();
		 if(ch=='1')
			 user();

}  


void FirstMenu()
{
   
   char gameName[]="2048";
   initgraph(WINDOW_WIDTH,WINDOW_HEIGHT,SHOWCONSOLE);
   load();//用于载入图片
   putimage(0,0,&bg);
   setbkmode(TRANSPARENT);
    //设置文字颜色
	settextcolor(RED);
 //设置字体大小
	setfont(50,0,"宋体");
  //打印字符串
	outtextxy(300,30,gameName);
	while(1){
	ChoiceMenu();
	}
	printf("\nChoiceMenu成功运行\n");
}

void ChoiceMenu()
{
	setfont(20,0,"宋体");
	//设置第一个菜单的矩形
	rectangle(WINDOW_WIDTH/3,WINDOW_HEIGHT/6,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+40);
	//设置第一个菜单的位置
	RECT r = {WINDOW_WIDTH/3,WINDOW_HEIGHT/6,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+40};
	if(curMenu == 0 ||curMenu == 1 ){
		setfillcolor(RED);
    	settextcolor(WHITE);
		curMenu = 1;
	}else{
	
	    setfillcolor(BLUE);
    	settextcolor(RED);
	}
	//把菜单的位置填充到矩形里面
	fillrectangle(r.left,r.top,r.right,r.bottom);
	
	//画出菜单的名字
 	drawtext("开始游戏", &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);



		//设置第二个菜单的矩形
	rectangle(WINDOW_WIDTH/3,WINDOW_HEIGHT/6+40,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+80);
	//设置第二个菜单的位置
	RECT r2 = {WINDOW_WIDTH/3,WINDOW_HEIGHT/6+40,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+80};
	//把菜单的位置填充到矩形里面
	if(curMenu == 2){
		setfillcolor(RED);
    	settextcolor(WHITE);
		 
	}else{
	
	    setfillcolor(BLUE);
    	settextcolor(RED);
	}


	//	setfillcolor(BLUE);
	fillrectangle(r2.left,r2.top,r2.right,r2.bottom);

	//画出菜单的名字
	drawtext("排行榜", &r2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

  
    		//设置第三个菜单的矩形
	rectangle(WINDOW_WIDTH/3,WINDOW_HEIGHT/6+80,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+120);
	//设置第二个菜单的位置
	RECT r3 = {WINDOW_WIDTH/3,WINDOW_HEIGHT/6+80,WINDOW_WIDTH/3+230,WINDOW_HEIGHT/6+120};
	//把菜单的位置填充到矩形里面
	 	if(curMenu == 3){
		setfillcolor(RED);
    	settextcolor(WHITE);
		 
	}else{
	
	    setfillcolor(BLUE);
    	settextcolor(RED);
	}
	//	settextcolor(WHITE);
	fillrectangle(r3.left,r3.top,r3.right,r3.bottom);

	//画出菜单的名字
	drawtext("游戏退出", &r3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	control();
}
void control()
{
  char ch;
  ch=getch();
  fflush(stdin);
  switch(ch)
  {
  case 13:
	   if(curMenu==1)
	   {
	      printf("Game  Start\n");
		  while(1){
		  Game();
		  }
	   }
	   if(curMenu==2){
		 printf("排行榜START");
		    list();
	   }
	   if(curMenu==3)
		   exit(0);

	   break;
  case 72:
	   curMenu--;
	   if(curMenu<=0)
	      curMenu=3;
	   break;
  case 80:
	   curMenu++;
	   if(curMenu>3)
		   curMenu=0;
	   break;
  }

}
void list()//排行榜
{
     for(i=0;i<10;i++)
	 {
	      for(j=0;j<10;j++)
		  {
			 if(user1[i].grade>user1[j].grade)
			 {
                 
			 }
          } 
	 }


}
void loadpicture(int z,int i,int j)
{
    switch(z)
	{
    case 0:
			putimage(250+i*60,150+j*56,&zero);
			break;
	case 2:
     	putimage(250+i*60,150+j*56,&two);
		break;
	case 4:
		putimage(250+i*60,150+j*56,&two2);
		break;
	case 8:
     	putimage(250+i*60,150+j*56,&two3);
		break;
	case 16:
     	putimage(250+i*60,150+j*56,&two4);
		break;
	case 32:
     	putimage(250+i*60,150+j*56,&two5);
		break;
	case 64:
     	putimage(250+i*60,150+j*56,&two6);
		break;
	case 128:
     	putimage(250+i*60,150+j*56,&two7);
		break;	
	case 256:
		 putimage(250+i*60,150+j*56,&two8);
	break;
	}
}

void grade(int x,int y){
      switch(x){
	case 0:
		putimage(24*y+250,36,&zero1,NOTSRCERASE);
		putimage(24*y+250,36,&zero_,SRCINVERT);
		break;
                case 1:
		putimage(24*y+250,36,&one1,NOTSRCERASE);
		putimage(24*y+250,36,&one,SRCINVERT);
	   break;
	case 2:
		putimage(24*y+250,36,&two1,NOTSRCERASE);
		putimage(24*y+250,36,&two_,SRCINVERT);
	   break;
	case 3:
		putimage(24*y+250,36,&three1,NOTSRCERASE);
		putimage(24*y+250,36,&three,SRCINVERT);
	   break;
	case 4:
		putimage(24*y+250,36,&four1,NOTSRCERASE);
		putimage(24*y+250,36,&four,SRCINVERT);
	   break;
	case 5:
		putimage(24*y+250,36,&five1,NOTSRCERASE);
		putimage(24*y+250,36,&five,SRCINVERT);
	   break;
	case 6:
		putimage(24*y+250,36,&six1,NOTSRCERASE);
		putimage(24*y+250,36,&six,SRCINVERT);
	   break;
	case 7:
		putimage(24*y+250,36,&seven1,NOTSRCERASE);
		putimage(24*y+250,36,&seven,SRCINVERT);
	   break;
	case 8:
		putimage(24*y+250,36,&eight1,NOTSRCERASE);
		putimage(24*y+250,36,&eight,SRCINVERT);
	   break;
	case 9:
		putimage(24*y+250,36,&nine1,NOTSRCERASE);
		putimage(24*y+250,36,&nine,SRCINVERT);
	   break;
	  }
	}


void wasd(int a[4][4],char ch)
{
	int i,j;
	int num;
	switch(ch)
	{
    case 'w': 
		for(j=0;j<4;j++)
		 {
				 for(i=3;i>0;i--)
				{
						if(a[i-1][j]==0)
						{
							for(num=i;num<=3;num++)
								{
								  a[num-1][j]=a[num][j];
								  a[num][j]=0;
								}
						}
				 }
				 for(i=0;i<3;i++)
				 {
						 if(a[i][j]==a[i+1][j]&&a[i][j]!=0)
						{
						  a[i][j]*=2;
						  a[i+1][j]=0;
						  empty++;
						  
						}
				 }
			 	 for(i=3;i>0;i--)
					{
							if(a[i-1][j]==0)
						{
							for(num=i;num<=3;num++)
								{
								  a[num-1][j]=a[num][j];
								  a[num][j]=0;
								}
						}
					 }

				 
		}  
		break;
	case 's':
		for(j=0;j<4;j++)
		 {
				 for(i=0;i<3;i++)
				{
						if(a[i+1][j]==0)
						{
							for(num=i;num>=0;num--)
								{
								  a[num+1][j]=a[num][j];
								  a[num][j]=0;
								}
						}
				 }
				 for(i=3;i>0;i--)
				 {
						 if(a[i][j]==a[i-1][j]&&a[i][j]!=0)
						{
						  a[i][j]*=2;
						  a[i-1][j]=0;
						  empty++;
						  
						}
				 }
			 	 for(i=0;i<3;i++)
					{
							if(a[i+1][j]==0)
						{
							for(num=i;num>=0;num--)
								{
								  a[num+1][j]=a[num][j];
								  a[num][j]=0;
								}
						}
					 }

				 
		}  
		break;
	case 'a':
		for(i=0;i<4;i++)
			 {
					 for(j=3;j>0;j--)
					{
							if(a[i][j-1]==0)
							{
								for(num=j;num<=3;num++)
									{
									  a[i][num-1]=a[i][num];
									  a[i][num]=0;
									}
							}
					 }
					 for(j=0;j<3;j++)
					 {
							 if(a[i][j]==a[i][j+1]&&a[i][j]!=0)
							{
							  a[i][j]*=2;
							  a[i][j+1]=0;
							  empty++;
							  
							}
					 }
			 		 for(j=3;j>0;j--)
					{
							if(a[i][j-1]==0)
							{
								for(num=j;num<=3;num++)
									{
									  a[i][num-1]=a[i][num];
									  a[i][num]=0;
									}
							}
					 }
					 
			}  
		break;
	case 'd':
		for(i=0;i<4;i++)
		 {
				 for(j=0;j<3;j++)
				{
						if(a[i][j+1]==0)
						{
							for(num=j;num>=0;num--)
								{
								  a[i][num+1]=a[i][num];
								  a[i][num]=0;
								}
						}
				 }
				 for(j=3;j>0;j--)
				 {
						 if(a[i][j]==a[i][j-1]&&a[i][j]!=0)
						{
						  a[i][j]*=2;
						  a[i][j-1]=0;
						  empty++;
						  
						}
				 }
			 	 for(j=0;j<3;j++)
				{
						if(a[i][j+1]==0)
						{
							for(num=j;num>=0;num--)
								{
								  a[i][num+1]=a[i][num];
								  a[i][num]=0;
								}
						}
				 }
				 
		}  
		break;
	}

}
void load()
{
     loadimage(&bg,"image/bg.jpg");

	 loadimage(&zero,"image/0.jpg");

	 loadimage(&two,"image/2.jpg");

	 loadimage(&two2,"image/4.jpg");

	 loadimage(&two3,"image/8.jpg");

	 loadimage(&two4,"image/16.jpg");

	 loadimage(&two5,"image/32.jpg");

	 loadimage(&two6,"image/64.jpg");

	 loadimage(&two7,"image/128.jpg");

	 	 loadimage(&two8,"image/256.jpg");

		 					loadimage(&zero1,"source/0_1.jpg");
									loadimage(&zero_,"source/0_2.jpg");
									//1
									loadimage(&one1,"source/1_1.jpg");
									loadimage(&one,"source/1_2.jpg");
									//2
									loadimage(&two1,"source/2_1.jpg");
									loadimage(&two_,"source/2_2.jpg");
									//3
									loadimage(&three1,"source/3_1.jpg");
									loadimage(&three,"source/3_2.jpg");
									//4
									loadimage(&four1,"source/4_1.jpg");
									loadimage(&four,"source/4_2.jpg");
									//5
									loadimage(&five1,"source/5_1.jpg");
									loadimage(&five,"source/5_2.jpg");
									//6
									loadimage(&six1,"source/6_1.jpg");
									loadimage(&six,"source/6_2.jpg");
									//7
									loadimage(&seven1,"source/7_1.jpg");
									loadimage(&seven,"source/7_2.jpg");
									//8
									loadimage(&eight1,"source/8_1.jpg");
									loadimage(&eight,"source/8_2.jpg");
									//9
									loadimage(&nine1,"source/9_1.jpg");
									loadimage(&nine,"source/9_2.jpg");

}
char *scanf_(int a)
{
     int i=0;   
	do
			{
			   
			   p[i]=getch();
               if(p[i]=='\r'&&i>0)
			   {
				   break;
			   
			   }
				   if(p[i]=='\b')
				{
				   if(i==0)
				   {
				      printf("\a");
					  continue;
				   }
				   i=i-1;
				   printf("\b \b");
				}
			    else
				{
					if(a==0)
                  putchar(p[i]);
					if(a==1)
				  printf("*");
				  				  i=i+1;
				}
			}while(p[i]!='\n'&&i<6);
		   while(i<6){
				p[i]='\0';
				i++;
			   }
		   return p;
}
void root_add()
{
   	printf("请输入注册账号:");
	scanf_(0);
    strcpy(user1[number].name,p);
	printf("\n请输入密码:");
	scanf_(1);
	strcpy(user1[number].passwd,p);
    printf("\n请输入玩家ID:");
	scanf_(0);
	strcpy(user1[number].ID,p);

	number++;
}
