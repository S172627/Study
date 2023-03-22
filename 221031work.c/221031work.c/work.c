#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//    int fact(int n)
//{
//	if (n == 1)
//	{
//		//printf("1.");
//		printf("1\n");
//		//return 0;
//	}
//	else
//	{
//		/*printf("%d,%d", fact(n - 1), n);*/
//		fact(n - 1);
//		printf("%d\n", n);
//	}
//}
//
//int main()
//{
//	fact(100);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int first_year, first_month, first_day;
//	int sec_year, sec_month, sec_day;
//	/*int cnt, bcnt;*/
//	int cnt = 0, bcnt = 0;
//
//	scanf("%d%d%d", &first_year, &first_month, &first_day);
//	scanf("%d%d%d", &sec_year, &sec_month, &sec_day);
//
//	int leapf = first_year % 4 == 0 && first_year % 100 != 0 || first_year % 400 == 0;
//	int leapb = sec_year % 4 == 0 && sec_year % 100 != 0 || sec_year % 400 == 0;
//
//	for ( int i = 1; i <= first_month; i++)
//	{
//		if (i == 4 || i == 6 || i == 9 || i == 11)
//		{
//			cnt += 30;
//		}
//		else if (i == 2)
//		{
//			cnt += 28;
//		}
//		else
//		{
//			cnt += 31;
//		}
//	}
//
//	/*cnt += first_day;*/
//	cnt = cnt + first_day;
//
//	if (leapf)
//	{
//		if (first_month > 2)
//		{
//			cnt++;
//		}
//	}
//	//i改为j
//	for (int j = 1; j <= sec_month ; j++) //sec_month -1去掉-1
//	{
//		if (j == 4 || j == 6 || j == 9 || j == 11)
//		{
//			bcnt += 30;
//		}
//		else if (j == 2)
//		{
//			bcnt += 28;
//		}
//		else
//		{
//			bcnt += 31;
//		}
//	}
//
//	/*bcnt += sec_day;*/
//	bcnt += sec_day;
//
//	if (leapb)
//	{
//		if (sec_month > 2)
//		{
//			bcnt++;
//		}
//	}
//
//	if (first_year == sec_year)
//	{
//		printf("%d\n", bcnt - cnt);
//	}
//	else
//	{
//		int sub_day = 0;
//		if (leapf)
//		{
//			sub_day = 366 - cnt;
//		}
//		else
//		{
//			sub_day = 365 - cnt;
//		}
//
//		first_year++;
//		leapf = first_year % 4 == 0 && first_year % 100 != 0 || first_year % 400 == 0;
//
//		while (first_year != sec_year)
//		{
//			sub_day += 365;
//			if (leapf)
//			{
//				sub_day += 1;
//			}
//			first_year++;
//			leapf = first_year % 4 == 0 && first_year % 100 != 0 || first_year % 400 == 0;
//		}
//
//		sub_day += bcnt;
//		printf("%d\n", sub_day);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int j = 2;
//	int count = 0;
//	printf("请输入一个小于500的数字\n");
//	printf("Input n(n <= 500):");
//	scanf("%d", &n);
//	for (int i = n;i > 1;i--)
//	{
//		for ( j = 2;j * j <= i ;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j * j > i)
//		{
//			printf("%6d", i);
//			sum += i;
//			count++;
//			if (count == 10)
//			{
//				break;
//			}
//		}
//	}
//	printf("\nsum = %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int j = 2;
//	int count = 0;
//	int prime = 0;
//	int p = 0;
//	/*int m = 0;*/
//	/*static */int k = 0;
//	int arr[10] = { 0 };
//	printf("请输入一个小于500的数字\n");
//	printf("Input n(n <= 500):");
//	scanf("%d", &n);
//	for (int i = n;i > 1;i--)
//	{
//		for ( j = 2;j * j <= i ;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j * j > i)
//		{
//			printf("%6d", i);
//			count++;
//			if (count == 10)
//			{
//				break;
//			}
//			while (k < 10)
//			{
//				/*m = k;*/
//				arr[k] = i;
//				k++;
//				break;
//			}
//		}
//	}
//	printf("\nInput a prime:");
//	scanf("%d", &prime);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < prime)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] > prime)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			p = mid;
//			printf("%d", p);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("-1");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char c;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z')
//		{
//			c = (c + 8) % 26 + 97;
//			printf("%c", c);
//		}
//		if (c >= 48 && c <= 57)
//		{
//			c = c;
//			printf("%c", c);
//		}
//		if (c >= 'A' && c <= 'Z')
//		{
//			c = (c + 14) % 26 + 65;
//			printf("%c", c);
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int k[10000];
//	char s1[100], s2[10000];
//	int sum, sum1 = 0, sum2 = 0;
//	int len1 = strlen(s1);
//	int	len2 = strlen(s2);
//	int i = 0;
//	gets(s1);
//	gets(s2);
//	while (s1[i] != '\0')
//	{
//		sum1 += pow(2, len1 - 1) * (s1[i]);
//		len1--;
//		i++;
//	}
//	printf("%d", sum1);
//	return 0;
// }

//#include<stdio.h>
//int main()
//{
//	//升序排序
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int prime = 0;
//	printf("Input a prime:");
//	scanf("%d", &prime);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < prime)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > prime)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d下标为%d", prime, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("该数不在数组内");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}




