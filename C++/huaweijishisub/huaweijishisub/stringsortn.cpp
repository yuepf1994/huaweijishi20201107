/*��Ŀ����
����n���ַ��������n���ַ��������ֵ������С�
�������� :
�����һ��Ϊһ��������n(1��n��1000), ����n��Ϊn���ַ���(�ַ������ȡ�100), �ַ�����ֻ���д�Сд��ĸ��
������� :
�������n�У�������Ϊ�����ֵ������е��ַ�����*/
/*#include <iostream>
using namespace std;
#include<string.h>
#include<stdio.h>

int main()
{
	char a[26][1001] = { 0 };
	int n = 0;
	//string s = NULL;
	char s[101] = { 0 };
	cin >> n;
	int x = 0;
	for (;x<n;x++)
	{
		cin >> s;
		int head = s[0];
		if (head <= 90 && head >= 65)
		{
			int len = strlen(a[head - 65]);
			sprintf_s(a[head-65]+len,1000-len,"%s\n",s);
		}
		else if (head <= 122 && head>=97)
		{
			int len = strlen(a[head - 97]);
			sprintf_s(a[head - 97] + len, 1000 - len, "%s\n", s);
		}
		else
			return -1;
	}

	int y = 0;
	for (;y<26;y++)
	{
		if(strlen(a[y]))
			cout << a[y] ;
	}
	system("pause");
	return 0;
}*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n;
	vector<string> s;
	string tmp;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			s.push_back(tmp);
		}
		sort(s.begin(), s.end());

	}
	for (auto x : s) cout << x << endl;

	system("pause");

	return 0;
}