/*
1002 写出这个数 （20 分）
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu */
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[101];
	char p[][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	int n, i, j, k;
	int t[10];
	cin >> a;
	k = strlen(a);
	n = 0;
	
	for (i = 0; i < k; i++)
	{
		n += a[i]-48 ;
	}
	j = 0;
	while (n != 0)
	{
		t[j] = n % 10;
		n = n / 10;
		j++;
	}
for (i = j - 1; i > 0; i--)
{
	cout << p[t[i]] << " ";
}
cout << p[t[0]];
	system("pause");
	return 0;
}