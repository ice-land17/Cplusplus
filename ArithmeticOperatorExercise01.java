public class ArithmeticOperatorExercise01
{
	public static void main(String[]args)
	{
		int m = 1;
		m = m++;
		System.out.println(m);

		int n=1;
		n = ++n;
		System.out.println(n);


		int i1 = 10;
		int i2 = 20;
		int i = i1++;
		System.out.println(i);
		System.out.println(i2);
		i = --i2;
		System.out.println(i);
		System.out.println(i2);


		//需求:加入还有59天放假,问合多少个星期多少天
		int days = 59;
		int weeks = 59 / 7;
		int leftdays = days % 7;
		System.out.println(days + "天 合" + weeks + "个星期零" + leftdays +"天");


		double Fahrenheit = 500.6;
		double CelsiusTemperature = 5.0/9*(Fahrenheit-100);
		System.out.println("华氏温度是" + Fahrenheit + "对应的摄氏温度是" + CelsiusTemperature);
	}
}