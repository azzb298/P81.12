#include<iostream>
#include<iomanip>
int main()
{
	const double a = 0.56;
	double f, c;
	std::cout << "�����뻪�϶�" << '\n';
	std::cin >> f;
	c = a * (f - 32);
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) <<"���϶�Ϊ" << c << '\n';
	return 0;

}