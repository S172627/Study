#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//����1234�����1 2 3 4 (�ݹ�)�����ޣ�
// p11 44min   
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);  //%d������˿ո�򲻳���
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

//int Fac1(int n)      //ѭ����׳�
//{
//	int i = 1, a = 1;
//	for (i = 1;i <= n;i++)
//	{
//		a = a * i;
//	}
//	return a;
//}

//int Fac2(int n)         //�ݹ���׳�
//{
//	if (n > 1)
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0, ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);
//	ret = Fac2(n);
//	printf("%d�Ľ׳�Ϊ%d", n, ret);
//
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);	
//}

//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//
//}
//
//int main()
//{
//	int n = 0, ret = 0;
//	printf("������������");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("쳲��������е�%d��Ϊ%d\n", n, ret);
//
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	int i;
//	for (i = 3;i <= n;i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//
//}
//
//int main()
//{
//	int n = 0, ret = 0;
//	printf("������������");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("쳲��������е�%d��Ϊ%d\n", n, ret);
//
//	return 0;
//}

//void move(char pos1, char pos2)
//{
//	printf("%c -> %c  ", pos1, pos2);
//}
////n�������Ӹ���
////pos1������ʼλ��
////pos2������תλ��
////pos3����Ŀ��λ��
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//
//	}
//}
//
//int main()
//{
//	Hanoi(1, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(3, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(4, 'A', 'B', 'C');
//
//}

//#include<string.h>
//
//int main()
//{
//	char arr1[5] = {'a','b','c','d'};   //char����Ϊ1���ֽ�
//	int arr2[6] = { "1,2,3,4,5 "};        //int����Ϊ4���ֽ�
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2) / sizeof(arr2[0]));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0, j = 0;
//	//for (i = 0; i < sz1; i++)
//	//{
//	//	printf("&arr1[%d] = %p\n", i, &arr1[i]);   //�����������ڴ�����������ŵ�
//	//}
//	//for (j = 0; j < sz2; j++)
//	//{
//	//	printf("&arr2[%d] = %p\n", j, &arr2[j]);
//	//}
//	return 0;
//}

void bubble_sort(int *arr, int sz)
{
	int i = 0,j = 0;
	int tmp = 0;
	//ȷ��ð����������
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		for (j = 0;j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//�����������ݲ���ȫ����
			}
			
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz);
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}



