#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//int rand = 10;
//// C����û�취�������������������ͻ���⣬����C++�����namespace�����
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
//// �����󱨴�error C2365: ��rand��: �ض��壻��ǰ�Ķ����ǡ�������
////bit�������ռ�����֣�һ�㿪����������Ŀ�����������ռ�����
//// �����Ͽ��õ���bit�������ȥ�Ժ��Լ���ϰ���Լ�������д���ɣ���������zs
//// 1. �����������ռ䶨��
//namespace bit
//{
//	// �����ռ��п��Զ������/����/����
//	int rand = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
////2. �����ռ����Ƕ��
//// test.cpp
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
////3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
//// ps��һ�������е�test.h������test.cpp������N1�ᱻ�ϲ���һ��
//// test.h
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}

#include <iostream>
using namespace std;
//int main()
//{
	// <<������
	// endl == \n
	//cout << "hello world" << endl;
	//cout << "hello world" << '\n';
	// cin >>����ȡ
	
	//�Զ�ʶ������
	//int n=0;
	//double* a = (double*)malloc(sizeof(double) * n);
	//if (a == NULL)
	//{
	//	perror("malloc fail");
	//	exit(-1);
	//}

	//cin >> n;
	//for (int i = 0; i < n; ++i)
	//{
	//	cin >> a[i];
	//}
	//for (int i = 0; i < n; ++i)
	//{
	//	cout << a[i] << endl;
	//}

//	char name[10] = "����";
//	int age = 18;
//
//	cout << "����: " << name << endl;
//	cout << "����: " << age << endl;
//
//	printf("����:%s\n���䣺%d\n", name, age);
//	return 0;
//}

void Func(int a = 0)
{
	cout << a << endl;
}

int main()
{
	Func(1);
	Func();

	return 0;
}

 //ȫȱʡ
void Func(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << endl;
}

int main()
{
	// ʹ��ȱʡֵ�����������������ʹ��
	Func(1, 2, 3);
	Func(1, 2);
	Func(1);
	Func();

	//Func(,2,);err
	//Func(, , 3);err

	return 0;
}

// ��ȱʡ
// ���������������ȱʡ
void Func(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

struct Stack
{
	int* a;
	int top;
	int capacity;
};

void StackInit(struct Stack* ps, int defaultCapacity = 4)
{
	ps->a = (int*)malloc(sizeof(int) * defaultCapacity);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	ps->top = 0;
	ps->capacity = defaultCapacity;
}

int main()
{
	// ʹ��ȱʡֵ�����������������ʹ��
	Func(1, 2, 3);
	Func(1, 2);
	Func(1);

	Stack st1; // ���Ҫ��100����
	StackInit(&st1, 100);

	Stack st2; // ��֪����������
	StackInit(&st2);

	return 0;
}

