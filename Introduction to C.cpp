#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//int rand = 10;
//// C语言没办法解决类似这样的命名冲突问题，所以C++提出了namespace来解决
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
//// 编译后后报错：error C2365: “rand”: 重定义；以前的定义是“函数”
////bit是命名空间的名字，一般开发中是用项目名字做命名空间名。
//// 我们上课用的是bit，大家下去以后自己练习用自己名字缩写即可，如张三：zs
//// 1. 正常的命名空间定义
//namespace bit
//{
//	// 命名空间中可以定义变量/函数/类型
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
////2. 命名空间可以嵌套
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
////3. 同一个工程中允许存在多个相同名称的命名空间,编译器最后会合成同一个命名空间中。
//// ps：一个工程中的test.h和上面test.cpp中两个N1会被合并成一个
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
	// <<流插入
	// endl == \n
	//cout << "hello world" << endl;
	//cout << "hello world" << '\n';
	// cin >>流提取
	
	//自动识别类型
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

//	char name[10] = "张三";
//	int age = 18;
//
//	cout << "姓名: " << name << endl;
//	cout << "年龄: " << age << endl;
//
//	printf("姓名:%s\n年龄：%d\n", name, age);
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

 //全缺省
void Func(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << endl;
}

int main()
{
	// 使用缺省值，必须从右往左连续使用
	Func(1, 2, 3);
	Func(1, 2);
	Func(1);
	Func();

	//Func(,2,);err
	//Func(, , 3);err

	return 0;
}

// 半缺省
// 必须从右往左连续缺省
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
	// 使用缺省值，必须从右往左连续使用
	Func(1, 2, 3);
	Func(1, 2);
	Func(1);

	Stack st1; // 最多要存100个数
	StackInit(&st1, 100);

	Stack st2; // 不知道多少数据
	StackInit(&st2);

	return 0;
}

