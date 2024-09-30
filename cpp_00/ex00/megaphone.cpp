#include <iostream>

void	megaphone(char **av, int ac){
	
	for (int i=1; i<ac; i++)
		{
			std::string str = av[i];
			for (int c=0; av[i][c]; c++)
				str[c] = toupper(av[i][c]);
			std::cout << str;
		}
}

int main(int ac, char **av)
{
	if (ac > 1)
		megaphone(av , ac);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}