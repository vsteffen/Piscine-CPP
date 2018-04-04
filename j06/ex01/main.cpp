#include <iostream>
#include <ctime>
#include <time.h>

struct	Data {
	std::string		s1;
	int				n;
	std::string		s2;
};

struct	SerializeData {
	char	s1[9];
	int 	n;
	char	s2[9];
};

Data * 		deserialize(void * ptr)
{
	SerializeData *		serializeData;
	Data *				data = new Data;

	serializeData = reinterpret_cast<SerializeData*>(ptr);

	data->s1 = static_cast<std::string>(serializeData->s1);
	data->n = static_cast<int>(serializeData->n);
	data->s2 = static_cast<std::string>(serializeData->s2);

	return (data);
}

void	randomStr(char *str)
{
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) {
        str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    str[8] = '\0';
}

void *		serialize(void)
{
	SerializeData *		data = new SerializeData;

	randomStr(data->s1);
	randomStr(data->s2);
	data->n = rand();

	return reinterpret_cast<void*>(data);
}

int 		main(void)
{
	srand(time(NULL));

	void *	raw = serialize();
	Data * 	ptrData = deserialize(raw);

	std::cout << ptrData->s1 << std::endl;
	std::cout << ptrData->n << std::endl;
	std::cout << ptrData->s2 << std::endl;
	return 0;
}
