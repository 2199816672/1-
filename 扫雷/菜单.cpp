#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void cai()
{
	printf("��ӭ����ɨ�ף�����������\n");
	printf("\n");
	printf("------��ѡ��--------\n");
	printf("----2.�鿴��Ϸ˵��--\n");
	printf("----1.��ʼ��Ϸ------\n");
	printf("----0.�˳���Ϸ------\n");

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
			printf("����Ϸ��ɨ������\n");
			printf("һ��10��������������\n");
			printf("ɨ��Ӧ�����װɣ�\n");
			printf("��˵����������ף�������ɶ�̳�Ѽ������\n");
			printf("OK���Ǿ͸��ҿ�ȥ��ɣ�����\n");
			continue;
		}
		else if (a == 1) 
		{ 
			printf("OK!�����ǿ�ʼ��Ϸ�ɣ�����\n");
			char A[h][l], B[h][l];
			
			{
				chu(A, h, l,'*');//��ʼ��Ҫչʾ��
				chu(B, h, l, '0');//��ʼ���ڲ����
				da(A, h, l);
				printf("\n");
				
				bu(B, H, L);//������ඣ�
				//da(B, h, l);//�鿴��ר�û���
				pai(A, B, H, L);//����
			}

		}
		else if (a == 0) 
		{
			printf("���Ҫ������\n");
			printf("1.ȷ��\n");
			printf("0.�����\n");
			int y;
			scanf("%d", &y);
			if (y == 1) {
				printf("�Ǻðɣ�\n");
				printf("�´μ���\n");
				break;
			}
			else 
			{
				printf("���٣��Ҿ�֪��������ˣ�����\n");
				printf("����������ɣ�����\n");
				continue; }
		}
		else printf("�Ǹ�����Ŷ%d�����ǲ��������������\n", a);
	}
}
int main()
{
	cai();
	dan();
	return 0;
}