/*
1002 д������� ��20 �֣�
����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10^100 ��

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
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