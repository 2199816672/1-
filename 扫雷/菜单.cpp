#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void cai()
{
	printf("欢迎来到扫雷，滑稽！！！\n");
	printf("\n");
	printf("------请选择--------\n");
	printf("----2.查看游戏说明--\n");
	printf("----1.开始游戏------\n");
	printf("----0.退出游戏------\n");

}
void dan()
{
	int a, * p;
	p = &a;
	
	while (1) 
	{   
		scanf("%d", &*p);
		if (a == 2)
		{
			printf("本游戏是扫雷啦！\n");
			printf("一共10个雷啦！滑稽！\n");
			printf("扫雷应该明白吧！\n");
			printf("我说明白你就明白，这能有啥教程鸭！滑稽\n");
			printf("OK！那就给我快去玩吧！滑稽\n");
			continue;
		}
		else if (a == 1) 
		{ 
			printf("OK!让我们开始游戏吧！滑稽\n");
			char A[h][l], B[h][l];
			
			{
				chu(A, h, l,'*');//初始化要展示的
				chu(B, h, l, '0');//初始化内部情况
				da(A, h, l);
				printf("\n");
				
				bu(B, H, L);//布置雷喽！
				//da(B, h, l);//查看雷专用滑稽
				pai(A, B, H, L);//排雷
			}

		}
		else if (a == 0) 
		{
			printf("真的要走了吗？\n");
			printf("1.确定\n");
			printf("0.点错啦\n");
			int y;
			scanf("%d", &y);
			if (y == 1) {
				printf("那好吧！\n");
				printf("下次见！\n");
				break;
			}
			else 
			{
				printf("哎嘿！我就知道你输错了！滑稽\n");
				printf("请重新输入吧！滑稽\n");
				continue; }
		}
		else printf("那个你瞅瞅看哦%d，你是不是输错啦！！！\n", a);
	}
}
int main()
{
	cai();
	dan();
	return 0;
}