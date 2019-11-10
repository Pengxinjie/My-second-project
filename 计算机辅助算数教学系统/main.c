#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>



/*任务一*/
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			printf("还做吗？(1.yes;2.no):");
			scanf("%d", &a);
			signal = 1;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			printf("还做吗？(1.yes;2.no):");
			scanf("%d", &a);
			signal = 1;
		}
		else
		{
			_times--;
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了\n"); break;
			}
			if (_times == 0)
			{
				printf("机会用完啦！\n");
				printf("还做吗？（1.yes；2.no）");
				scanf("%d", &a);
				if (a == 2)return;
				else if (a == 1)
				{
					signal = 1;
					Task_2();//递归
				}
			}
			else
				printf("还有%d次机会！\n", _times);
			signal = 0;
			continue;
		}

		if (a == 1)continue;
		else break;
	}
}

/*任务三*/
void Task_3(void)
{
	srand((int)time(NULL));
	int	a,
		b,
		ans,
		_times = 10,//10题
		right = 0;//正确次数统计
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
			}
		}
	}
	printf("您的总分为%d，答题正确率为%d/10.\n", right * 10, right);
}

/*任务四*/
int right = 0;//由于要调用四个函数，需要统计正确次数，故使用全局变量

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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
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
			case 0:printf("			答对啦！\n"); break;
			case 1:printf("			真机智！\n"); break;
			case 2:printf("			你真是小天才！\n"); break;
			}
			right++;
		}
		else
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0:printf("			答错啦！\n"); break;
			case 1:printf("			没对噢！\n"); break;
			case 2:printf("			错了错了！\n"); break;
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
	printf("您的总得分为%d,正确率为%d/10！\n", right * 10, right);
	return right;
}

void Task_5(void)
{
	int a = Task_4();
	while (1)
	{
		if (a > 7)return;
		else {
			printf("正确率小于75%，重做！\n");
			Task_4();
		}
	}
}

int main(void)
{
	int a;
	printf("                                             欢迎进入计算机辅助教学系统！\n");
_scanf:
	printf("请选择您要训练的题目类型!\n");
	printf("	类型1：计算个位数乘法\n");
	printf("	类型2：计算个位数乘法，但限制答题次数\n");
	printf("	类型3：连做10题乘法题，并得到您的总分和答题正确率\n");
	printf("	类型4:连做10题随机的加减乘除题，并得到您的总分和答题正确率\n");
	printf("	类型5:连做10题随机的加减乘除题，答题正确率小于75%重做！\n");
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
		printf("没有这个类型！\n");
		goto _scanf;//重新输入
	}
	printf("						  感谢使用本系统！\n");
	system("pause");
	return 0;
}