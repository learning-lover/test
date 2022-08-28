#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>



//
//int main()
//{
//	char s[110];
//	int len, i, flag = 1;
//	scanf("%s", s);
//	len = strlen(s);
//	for (i = 0; i < len; i++)
//	{
//		if (s[i] != s[len - 1 - i])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)printf("yes\n");
//	else printf("no\n");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 2,4,6,8,10,12,14,16,18,20 };
//	int arr2[]={0};
//	int i,j;
//	scanf("%d", &i);
//	for (j = 0; j < 5; j++)
//	{
//		strcpy(arr2, arr[i]);
//	}
//	for (j = 0; j < 5; j++)
//	{
//		strcpy(arr[i], arr2);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a,b,c;
//	for (a = 0; a <= 3; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 6; c++)
//			{
//				if (a + b + c == 8)
//				{
//					if (a >= 1 && b >= 1)
//					{
//						printf("%d %d %d\n", a, b, c);
//						
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 10000; i++)
//	{
//		int n, m,k,l;
//		n = i / 1000;
//		m = (i / 100) % 10;
//		k = (i / 10) % 10;
//		l = i % 10;
//		if (n == l && m == k)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1, s = 3;
//	do {
//		s += i++;
//		if (s % 7 == 0)
//			continue;
//		else
//			++i;
//		printf("%d %d\n", s, i);
//	}while(s < 15);
//	printf("%d", i);
//	return 0;
//}
//
//int main()
//{
//	int arr[4] = { 0,1,2,3 };
//	int* p[4];
//	return 0;
//}
//int arr[]=
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p;
//	p = &arr[0];
//	printf("%d", *(p + 2));
//	printf("%d", arr[2]);
//	printf("%d", *(arr + 2));
//	printf("%d", *p+2);
//	printf("%d", *arr + 2);
//	return 0;
//}
//
//int main()
//{
//	int i = 2;
//	int* p = 0;
//	p = &i;
//	printf("%d", *p);
//	return 0;
//}
////
//int main()
//{
//	int x = 2;
//	while (--x);
//	printf("%d", x);
//	return 0;
//}
//
//int main()
//{
//	int i, j, m = 0, n = 0;
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 2; j++)
//			if (j >= i)
//				m = 1;
//	n++;
//	printf("%d", n);
//	return 0;
//}
//
//int main()
//{
//	printf("%c", ('M', 'm'));
//	return 0;
//}
////
//int main()
//{
//	int i = 66666;
//	printf("%d", i);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i=0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for (i=0;i < j-1;i++)
//	{
//		int k = 0;
//		for (k = 0; k < j - 1; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tm = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tm;
//			}
//		}
//	}
//	for (i = 0; i < j ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
////
////}
//int main()
//{
//	char arr[] = "abcde";
//	char arr2[] = { 'a','b','c','d','e'};
//	char arr3[] = { "abcde" };
//	int c = strlen(arr);
//	int d = sizeof(arr);
//	int f = strlen(arr2);
//	int g = sizeof(arr2);
//	int i = strlen(arr3);
//	int h = sizeof(arr3);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", f);
//	printf("%d\n", g);
//	printf("%d\n", i);
//	printf("%d\n", h);
//	return 0;
//}
////
//int main()
//{
//    double n, x0, x1;
//    scanf("%lf", &n);
//    x0 = n;
//    x1 = 1.0 / 2 * (x0 + n / x0);
//    while (fabs(x0 - x1) >= 1e-5)
//    {
//        x0 = x1;
//        x1 = 1.0 / 2 * (x0 + n / x0);
//    }
//    printf("%f", x1);
//    return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		j = (j + 1) * 2;
//	}
//	printf("%d", j);
//	return 0;
//}
//
//int main()
//{
//	int i,j,sum=0;
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i, a, b, c;
//	for (i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1,j=1,k,n=0;
//	for (k = 1; k <=4; k++)
//	{
//		for (i = 1,j=1; i <= k; i++)
//		{
//			j = j * i;
//		}
//		n = n + j;
//		printf("%d\n", n);
//	}
//	//printf("%d", j);
//	printf("%d", n);
//	return 0;
//}
//
//int main()
//{
//	int i,n,j,m=0,g=0;
//	scanf("%d", &i);
//	scanf("%d", &n);
//	for (j=0;j<n;j++)
//	{
//		m = m+i* pow(10, j);
//		g = g + m;
//	}
//	printf("%d", g);
//	return 0;
//}
//
//int main()
//{
//	int i, j, k, m ,n;
//	scanf("%d %d", &i, &j);
//	if (i < j)
//	{
//		k = i;
//		i = j;
//		j = k;
//	}
//	m = i * j;
//	n = i % j;
//	while (n != 0)
//	{
//		i = j;
//		j = n;
//		n = i % j;
//	}
//	printf("%d\n", j);
//	printf("%d", m / j);
//	return 0;
//}
//
//int main()
//{
//	int i = 0,j=0,k=0;
//	scanf("%d", &i);//12345
//	while (i > 0)
//	{
//		j = i % 10;
//		printf("%d", j);
//		k++;
//		i=i / 10;
//	}
//	printf("\n%d", k);
//	return 0;
//}
//
//int main()
//{
//	int i=0,a,b,c;
//	scanf("%d", &a);
//	b = a;
//	while (b > 0)
//	{
//		c = b % 10;
//		b = b / 10;
//		printf("%d", c);
//		i++;
//	}
//	printf("\n%d\n", i);
//	return 0;
//}
//
//int ch(int i)
//{
//	int k = 1;
//	while (i = i/10)
//	{
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	int i = 0,j=0;
//	scanf("%d", &i);
//	j = ch(i);
//	printf("%d", j);
//	return 0;
//}
//
//int ch(int i)
//{
//	int count = 0;
//	int j;
//	j = i / 10;
//	if(j>10);
//	{
//		count++;
//		ch(j);
//		//count++;
//	}
//	return count;
//}
//int main()
//{
//
//	int i,j,k;
//	scanf("%d", &i);
//	k=ch(i);
//	printf("%d", k);
//	return 0;
//}
//
//int main()
//{
//	int i, j;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >= i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 101; i++)
//	{
//		j = j + i;
//	}
//	printf("%d", j);
//	return 0;
//}
//
//int main()
//{
//	int i;
//	int j = 1;
//	for (i = 1; i < 6; i++)
//	{
//		j=j*i;
//	}
//	printf("%d", j);
//	return 0;
//}
//
//int main()
//{
//	int i, j, k,max;
//	scanf("%d%d%d", &i, &j, &k);
//	if (i > j)
//	{
//		if (i > k)
//		{
//			printf("%d", i);
//		}
//		else 
//		{
//			printf("%d", k);
//		}
//	}
//	else
//	{
//
//		if (j > k)
//		{
//			printf("%d", j);
//		}
//		else
//		{
//			printf("%d", k);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		printf("****\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int x, y,max;
//	scanf("%d,%d", &x, &y);
//	if (x > y)
//	{
//		max = x;
//		printf("max=%d", max);
//	}
//	else if (x < y)
//	{
//		max = y;
//		printf("max=%d", max);
//	}
//	return 0;
//}
//
//int main()
//{
//	int x, y;
//	scanf("x=%d,y=%d", &x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}
//
//int main()
//{
//	//int x = 0, s = 0;
//	//for (; x = 1; x++)
//	//	s = s + x;
//	printf("%c", 'x');
//	return 0;
//}
//
//int main()
//{
//	int x = 0, y = 5, z = 3;
//	while (++x<5 && z-- > 0)
//	{
//		y = y - 1;
//		printf("%d %d %d\n", x, y, z);
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}
////
//int main()
//{
//	int a = 5, b = 4, c = 3, d = 2;
//	if (a > b&&b > c)
//		printf("%d\n", d);
//	else if ((c - 1 >= d) == 1)
//		printf("%d\n", d + 1);
//	else
//		printf("%d\n", d + 2);
//	return 0;
//}
////
//int main()
//{
//	char arr1[] = {'a','b','c','d','e',};
//	char arr2[] = "abcde\0";
//	int x3 = 0;
//	x3=0x12;
//	int a = strlen(arr1);
//	int b = strlen(arr2);
//	printf("%d ", a);
//	printf("%d", b);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int a, b, c;
//	for (a = 0; a < 4; a++)
//	{
//		for (b = 0; b < 4; b++)
//		{
//			for (c = 0; c < 7; c++)
//			{
//				if (a + b + c == 8)
//				{
//					n++;
//					printf("%d个红色球，%d个白色球，%d个黑色球\n", a, b, c);
//				}
//			}
//		}
//	}
//	printf("%d ", n);
//	return 0;
//}
//
//int fun(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int i, j, k,m,n;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 0; j <= 9; j++)
//		{
//			for (k = 0; k <= 9; k++)
//			{
//				n = i * 100 + j * 10 + k;
//				m = k * 100 + j * 10 + i;
//				if (n > 100 && n == m && fun(n))
//				{
//					printf("%d ", n);
//				}
//			}
//		}
//	}
//	return 0;
//}
//int sushu(int i)
//{
//	
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i<1000; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			sushu(i);
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch =0;
//	scanf("%c", &ch);
//	printf("%c", ch - 32);
//	return 0;
//}
//
//int main()
//{
//	int grade = 0;
//	printf("请输入成绩:>\n");
//	scanf("%d", &grade);
//	switch (grade/ 10)
//	{
//	case 9:
//		printf("A");
//		break;
//	case 8:
//		printf("B");
//		break;
//	case 7:
//		printf("C");
//		break;
//	case 6:
//		printf("D");
//		break;
//	default:
//		printf("E");
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i < 301; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {3,9,2,1,8};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int fib(int i)
//{
//	if (i <= 2)
//	{
//		return 1;
//	}
//	if (i > 2)
//	{
//		return fib(i - 1) + fib(i - 2);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fib(i);
//	printf("%d", ret);
//	return 0;
//}
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str +1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf(" len = %d\n", len);
//	return 0;
//}
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d ", &num);
//	print(num);
//	return 0;
//}
////
//int main()
//{
//	int i = 0;
//
//	for (i = 1;;)
//	{
//		int j = 0;
//		scanf("%d", &j);
//		printf("%d\n", j);
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 56)));
//	return 0;
//}
////
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	return 0;
//}
////
//int is_leap_year(y)
//{
//	if ((y % 4 == 0 && y % 100 != 0 )|| (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//int decide2(int n)
//{
//	int j = 1;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (decide2(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
////
//int decide(int i)
//{
//	
//	if (i % 2 == 1)
//	{
//		printf("是素数");
//		return i;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	decide(a);
//	printf("%d", a);
//	return 0;
//}
//
//void Swap(int* h, int* j)
//{
//	int tmp = *h;
//	*h = *j;
//	*j = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s ", arr);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//
//int main()
//{
//	printf("打印");
//	return 0;
//}