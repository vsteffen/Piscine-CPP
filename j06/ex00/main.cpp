#include <iostream>
#include <iomanip>
#include <cmath>

int		main(int ac, char **av) {
	if (ac < 2) {
		std::cout << "usage: you must send your scalar(s) value(s)" << std::endl;
		return 1;
	}
	for (int i = 1; i < ac; i++) {

		void *ptr = static_cast<void*>(av[i]);

		char *ptrChar;
		int n = static_cast<int>(std::strtol(static_cast<const char*>(ptr), &ptrChar, 10));
		char c = static_cast<char>(n);

		// std::cout << errno << std::endl;

		if (errno == 0) {
			if (std::isprint(c)) {
				std::cout << "char: '" << c << "'" << std::endl;
			}
			else {
				std::cout << "char: impossible" << std::endl;
			}

			// if (*ptrChar)
				// std::cout << "int: impossible" << std::endl;
			// else
				std::cout << "int: " << n << std::endl;
		}
		else {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}


		double d =  static_cast<double>(std::strtod(static_cast<const char*>(ptr), &ptrChar));
		float f = static_cast<float>(d);

		if (errno != ERANGE) {
			if (errno == 22) {
				std::cout << "float: " << f << "f" << std::endl;
				std::cout << "double: " << d << std::endl;
			}
			else {
				float integralFloat;
				if (std::modf(f, &integralFloat) == 0)
					std::cout << "float: " << std::fixed << std::setprecision(1) << integralFloat << "f" << std::endl;
				else
					std::cout << "float: " << f << "f" << std::endl;

				double integralDouble;
				if (std::modf(d, &integralDouble) == 0)
					std::cout << "double: " << std::fixed << std::setprecision(1) << integralDouble << std::endl;
				else
					std::cout << "double: " << d << std::endl;
			}
		}
		else {
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		if (i + 1 < ac)
			std::cout << std::endl;
	}
	return 0;
}
