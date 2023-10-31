	public class AutoConvertDetail
//自动类型转换细节
{
	public static void main(String[]args)
	//编写一个main方法
	{
	//细节1有多种类型的数据混合运算时
	//系统首先自动将所有数据转换成容量最大的数据类型,然后再进行计算

	//细节2当我们把精度容量大的数据类型赋值给精度容量小的数据类型时,就会报错
	//反之就会进行自动类型转换.


	//细节3(byte,short)(char)之间不会相互自动转换
	//当把具体数赋给byte时,先判断该数是否在byte范围内,如果是就可以
	// int number_1=10;
	// // float number_2=number_1+1.1;
	// double number_2=number_1+1.1;
	// System.out.println(number_2);
	//

	// byte b2=1;
	// short s1=1;
	// int  s2=b2+s1; 


	//自动提升原则:表达式结果的类型自动提升为操作数中精度最大的类型
	byte b4 = 1;
	short s3 = 100;
	int num200 = 1;
	float num300 = 1.1F;

	double num500= b4 + s3 + num200 + num300;
	}
}