#define  _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
////上机练习1
////输入1，输出1
//int check(int n)
//{
//    for (int i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int prime_factor(int n)
//{
//    int a = 0;
//    int max = 0;
//    for (int i = 2; i <= n; i++)
//    {
//        if (n % i == 0)
//        {
//            if (check(i) == 1)
//            {
//                a += 1;
//                max = i;
//            }
//        }
//    }
//    if (a < 0)                 //a < 0改为n == 1          
//    {
//        return -1;
//    }
//    else if (check(n))
//    {
//        return n;
//    }
//    else
//    {
//        return max;
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int ans = prime_factor(n);
//    printf("%d\n", ans);
//
//    return 0;
//}  

////上机练习4-2
//#include <stdio.h>
//
//int n;
//
//int check(int x)
//{
//    int i = 0;
//    for (int i = x - 1; i >= 1; i--)
//    {
//        if (x % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int prime_factor(int n)
//{
//    for (int i = n - 1; i >= 2; i--)
//    {
//        if (n % i == 0 && check(i) == 1)     //check(i)后加 ==1
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    scanf("%d", &n);
//
//    printf("%d\n", prime_factor(n));
//
//    return 0;
//}


////上机练习2
//#include<stdio.h>
//
//int ConverInteger(int n)
//{
//	int j = 0;
//	while (n != 0)
//	{
//		int i = n % 10;	
//		j = j * 10 + i;
//		n = n / 10;
//	}
//	return j;
//}
//
//int main()
//{
//	int n = 0, ret = 0;
//	printf("请输入一个整数");
//	scanf("%d", &n);
//	ret = ConverInteger(n);
//	printf("%d", ret);
//
//	return 0;
//}


//上机练习3
#include<stdio.h>
#include<math.h>

double fun(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			sum = sum + i;
		}
	}
	double ret = sqrt(sum);
	return ret;
}

int main()
{
	int n = 0;
	double s = 0;
	printf("请输入一个正整数");
	scanf("%d", &n);
	if (n < 21)
	{
		printf("不存在s");
	}
	else
	{
		s = fun(n);
		printf("%f", s);
	}

	return 0;
}

////上机练习4----1
//int Fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//    int n = 0, ret = 0;
//    printf("请输入项数：");
//    scanf("%d", &n);
//    ret = Fib(n);
//    printf("斐波那契数列第%d项为%d\n", n, ret);
//    return 0;
//}

////上机练习4----2
//#include<stdio.h>
//
//int main()
//{
//	int n = 0, ret = 0;
//	printf("请输入项数：");
//	scanf("%d", &n);
//
//
//	return 0;
//}