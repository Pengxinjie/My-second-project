#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>



/*����һ*/
void Task_1(void)
{
	srand((int)time(NULL));
	int	signal = 1,
		a,
		b,
		ans;
	while (1)
	{
		if (signal == 0);
		else {
			a = rand() % 10 + 1,
				b = rand() % 10 + 1;
		}

		int ans;

		printf("%d*%d=?", a, b);
		scanf("%d", &ans);
		if (a * b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			printf("������(1.yes;2.no):");
			scanf("%d", &a);
			signal = 1;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
			signal = 0;
			continue;
		}

		if (a == 1)continue;
		else break;
	}
}

void Task_2(void)
{
	srand((int)time(NULL));
	int	signal = 1,
		a,
		b,
		ans,
		_times = 4;
	while (_times > 0)
	{
		if (signal == 0);
		else {
			a = rand() % 10 + 1,
				b = rand() % 10 + 1;
		}

		int ans;

		printf("%d*%d=?", a, b);
		scanf("%d", &ans);
		if (a * b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			printf("������(1.yes;2.no):");
			scanf("%d", &a);
			signal = 1;
		}
		else
		{
			_times--;
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴���\n"); break;
			}
			if (_times == 0)
			{
				printf("������������\n");
				printf("�����𣿣�1.yes��2.no��");
				scanf("%d", &a);
				if (a == 2)return;
				else if (a == 1)
				{
					signal = 1;
					Task_2();//�ݹ�
				}
			}
			else
				printf("����%d�λ��ᣡ\n", _times);
			signal = 0;
			continue;
		}

		if (a == 1)continue;
		else break;
	}
}

/*������*/
void Task_3(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 10,//10��
		right = 0;//��ȷ����ͳ��
	while (_times-- > 0)
	{
		a = rand() % 10 + 1,
			b = rand() % 10 + 1;

		int ans;

		printf("%d*%d=?", a, b);
		scanf("%d", &ans);
		if (a * b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
		}
	}
	printf("�����ܷ�Ϊ%d��������ȷ��Ϊ%d/10.\n", right * 10, right);
}

/*������*/
int right = 0;//����Ҫ�����ĸ���������Ҫͳ����ȷ��������ʹ��ȫ�ֱ���

void CF(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 1;
	while (_times-- > 0)
	{
		a = rand() % 10 + 1,
			b = rand() % 10 + 1;

		int ans;

		printf("%d*%d=?", a, b);
		scanf("%d", &ans);
		if (a * b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
		}
	}
}
void JiaF(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 1;
	while (_times-- > 0)
	{
		a = rand() % 10 + 1,
			b = rand() % 10 + 1;

		int ans;

		printf("%d+%d=?", a, b);
		scanf("%d", &ans);
		if (a + b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
		}
	}
}
void JianF(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 1;
	while (_times-- > 0)
	{
		a = rand() % 10 + 1,
			b = rand() % 10 + 1;

		int ans;

		printf("%d-%d=?", a, b);
		scanf("%d", &ans);
		if (a - b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
		}
	}
}
void zCF(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 1;
	while (_times-- > 0)
	{
		do {
			a = rand() % 10 + 1,
				b = rand() % 10 + 1;
		} while (a % b != 0);
		int ans;

		printf("%d/%d=?", a, b);
		scanf("%d", &ans);
		if (a / b == ans)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			����ǣ�\n"); break;
			case 2:printf("			������С��ţ�\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			�������\n"); break;
			case 1:printf("			û���ޣ�\n"); break;
			case 2:printf("			���˴��ˣ�\n"); break;
			}
		}
	}
}

int Task_4(void)
{
	srand((int)time(NULL));
	int temp,
		_Times = 10;
	while (_Times-- > 0)
	{
		temp = rand() % 4;
		switch (temp)
		{
		case 0:CF();
			break;
		case 1:zCF();
			break;
		case 2:JiaF();
			break;
		case 3:JianF();
			break;
		}
	}
	printf("�����ܵ÷�Ϊ%d,��ȷ��Ϊ%d/10��\n", right * 10, right);
	return right;
}

void Task_5(void)
{
	int a = Task_4();
	while (1)
	{
		if (a > 7)return;
		else {
			printf("��ȷ��С��75%��������\n");
			Task_4();
		}
	}
}

int main(void)
{
	int a;
	printf("                                             ��ӭ��������������ѧϵͳ��\n");
_scanf:
	printf("��ѡ����Ҫѵ������Ŀ����!\n");
	printf("	����1�������λ���˷�\n");
	printf("	����2�������λ���˷��������ƴ������\n");
	printf("	����3������10��˷��⣬���õ������ֺܷʹ�����ȷ��\n");
	printf("	����4:����10������ļӼ��˳��⣬���õ������ֺܷʹ�����ȷ��\n");
	printf("	����5:����10������ļӼ��˳��⣬������ȷ��С��75%������\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:Task_1();
		break;
	case 2:Task_2();
		break;
	case 3:Task_3();
		break;
	case 4:Task_4();
		break;
	case 5:Task_5();
		break;
	default:
		printf("û��������ͣ�\n");
		goto _scanf;//��������
	}
	printf("						  ��лʹ�ñ�ϵͳ��\n");
	system("pause");
	return 0;
}