#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void Swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int i = 0, j = 1;
	Swap(i, j);
	cout << i << endl;
	cout << j << endl;
	return 0;
}

1. 初始Linux操作系统
2. 初识shell命令, 了解若干背景知识。
3. 使用常用Linux命令
4. 了解Linux权限概念与思想, 能深度理解“权限”
5. 初步了解Linux 目录结构含义