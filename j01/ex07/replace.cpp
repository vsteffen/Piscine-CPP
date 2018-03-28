#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av) {
	if (ac == 4) {
		// verif if av is valid
		std::string			filename(av[1]);
		std::ifstream		fileContent(filename.c_str());

		if (!fileContent.is_open())
		{
			std::cout << "Impossible to read input file." << std::endl;
			return 1;
		}

		// std::ofstream		fileOutput(filename.c_str() + std::string(".replace"));
		// if (!fileOutput.is_open())
		// {
		// 	std::cout << "Impossible to write output file." << std::endl;
		// 	return 2;
		// }

		//do bullshit

		fileContent.close();
		// fileOutput << "Very funny";
		// fileOutput.close();
	}
	return 0;
}
