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

1. ��ʼLinux����ϵͳ
2. ��ʶshell����, �˽����ɱ���֪ʶ��
3. ʹ�ó���Linux����
4. �˽�LinuxȨ�޸�����˼��, �������⡰Ȩ�ޡ�
5. �����˽�Linux Ŀ¼�ṹ����