/*题目描述
给定n个字符串，请对n个字符串按照字典序排列。
输入描述 :
输入第一行为一个正整数n(1≤n≤1000), 下面n行为n个字符串(字符串长度≤100), 字符串中只含有大小写字母。
输出描述 :
数据输出n行，输出结果为按照字典序排列的字符串。*/
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