#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void chu(char A[h][l], int a, int b, char c)
{
	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
			A[i][j] =c;
	}
}
void da(char A[h][l], int a, int b)
{
	int i, j,z;
	for (i = 1; i <= H; i++)
	{
		
		if(i==1)
		{
			for (z = 0; z <= L; z++)
			{
				printf("%d  ", z);
			}
			printf("\n");
		}
		printf("%d  ", i);
		for (j = 1; j <= L; j++)
		{
			/*if (j == 1)printf("\n");*/
			printf("%c  ", A[i][j]);
		}
		printf("\n");
		
	}
}
void bu(char B[h][l], int a, int b)
{
	srand(time(NULL));
	int x, y,z;
	
	for(z=0;z<G;)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (B[x][y] == '0')
		{
			B[x][y] = '1';
			z++;
		}
		else continue;
		
	}
}
void pai(char A[h][l], char B[h][l], int a, int b)
{
	int p=0;
	while (1)
	{	
		int x, y, z, w;
		while (1) 
		{
			printf("请输入要排查的坐标（x，y）x是行，y是列哦！滑稽\n");
		
			scanf("%d%d", &x, &y);
			if (x > 0 && x < 10 && y>0 && y < 10)
			{
				printf("请问你想排查的是（%d,%d）\n",x,y);
				printf("1.YES\n");
				printf("0.NO\n");
				scanf("%d", &z);
				if (z == 1)
					break;
				else printf("那请重新输入喽！\n");
			}
			else if (x==54&&y==250)
			{
				printf("Ok!找到外挂滑稽，因为你说了你是%d%d，滑稽\n",x,y);
				printf("给你放水啦！赶紧给我通关吧！滑稽\n");
				da(B, h, l);
			}
			else 
			{
				printf("你自己看看你输入的什么鬼鸭！（%d，%d）\n"); 
				printf("给我重新输入啦！认真点鸭！\n");
			}
		}
		if (B[x][y] == '1')
		{
			printf("恭喜你寄啦！真是太逊啦！\n");
			da(B, h, l);
			printf("以上1是雷，这是雷的分布，滑稽\n");
			printf("1.再来一把\n");
			printf("0.退出游戏\n");
			break;
		}
		else if (B[x][y] == '0'&&A[x][y]=='*')
		{
			/*A[x][y]*/ 
				w= ((B[x - 1][y - 1] + B[x][y - 1] + B[x + 1][y - 1] + B[x - 1][y] + B[x + 1][y] + B[x - 1][y + 1] + B[x][y + 1] + B[x + 1][y + 1]) - 8 * '0');
				A[x][y] = char(w +48);
			da(A, h, l);
			p+=1;
			if (p >= (H * L) - G)
			{
				printf("恭喜呀！胜利啦！真是太棒啦！点名表扬，滑稽\n");
				
				da(B, h, l);
				printf("以上1是雷，这是雷的分布，滑稽\n");
				printf("1.再来一把\n");
				printf("0.退出游戏\n");
				break;
			}
				/*printf("%c", A[x][y]);*/
		}
		else printf("你是不是又输入错了鸭！！\n");
	}
}