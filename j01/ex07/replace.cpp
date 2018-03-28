#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av) {
	if (ac != 4 || av[1][0] == '\0' || av[2][0] == '\0' ||  av[3][0] == '\0') {
		std::cout << "usage: replace \"filename\" \"string to find\" \"replace string\" " << std::endl;
		return 1;
	}

	std::string			filename(av[1]);
	std::ifstream		fileInput(filename);

	if (!fileInput.is_open())
	{
		std::cout << "Impossible to read input file." << std::endl;
		return 2;
	}

	std::ofstream		fileOutput(filename + std::string(".replace"));

	if (!fileOutput.is_open())
	{
		std::cout << "Impossible to write output file." << std::endl;
		return 3;
	}

	std::string 	output;
	std::string 	buff;
	std::string		pattern = std::string(av[2]);
	std::string		repStr = std::string(av[3]);
	std::size_t 	found;

	while (std::getline(fileInput, buff) && !fileInput.eof())
    {
		while ((found = buff.find(pattern)) != std::string::npos) {
			buff.replace(found, pattern.length(), repStr);
		}
		output += buff + std::string("\n");
    }

	fileInput.close();
	fileOutput << output;
	fileOutput.close();
	return 0;
}
