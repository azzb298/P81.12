#include<iostream>
int main()
{
	int i = 100;
	int a, b, c,m;
	for (; i <= 999; i++)
	{
		a = i % 10;        //��λ��
		b = (i % 100) / 10;//ʮλ��
		c = i / 100;       //��λ��
		m = 100 * c + 10 * b + a;
		if (m == a * a * a + b * b * b + c * c * c)
		{
			std::cout << m << '\n';
		}
	}
	
}