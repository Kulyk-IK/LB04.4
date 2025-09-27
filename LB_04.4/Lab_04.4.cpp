#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	double x_start, x_end, dx, R;

	std::cout << "x_start = "; std::cin >> x_start;
	do {
		std::cout << "x_end = "; std::cin >> x_end;
		
		if (x_end < x_start)
			std::cout << "\'x_end\' can`t be lower than \'x_start\'" << std::endl;
	} while (x_end < x_start);

	do {
		std::cout << "dx = "; std::cin >> dx;

		if (dx <= 0.0)
			std::cout << "\'dx\' can`t be lower than 0" << std::endl;
	} while (dx <= 0.0);

	std::cout << "R = "; std::cin >> R;

	std::cout << "--------------------------" << std::endl;
	std::cout << "|"
		<< std::setw(4) << "x"
		<< std::setw(4) << "|"
		<< std::setw(4) << "y"
		<< std::setw(4) << "|" << std::endl;
	std::cout << "--------------------------" << std::endl;

	for (double x = x_start; x <= x_end; x += dx) {
		double  y = 0.0;

		if (x <= -R)
			y = -x - R;
		else if (x > -R && x <= 0.0)
			y = sqrt(pow(R, 2) - pow(x, 2));
		else if (x > 0.0 && x < 6.0)
			y = -(R / 6.0) * x + R;
		else
			y = x - 6.0;
		std::cout << "|"
			<< std::setw(4) << x
			<< std::setw(4) << "|"
			<< std::setw(4) << y
			<< std::setw(4) << "|" << std::endl;
	}
	return 0;
}