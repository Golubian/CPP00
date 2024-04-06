#include <iostream>

void	megaphone(char *to_scream)
{
	if (!to_scream)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * ";
	else
	{
		if (!(*to_scream))
			std::cout << " ... * LOUD AND AWKWARD FEEDBACK PAUSE * ... "; // Feedback on empty string.
		while (*to_scream)
		{
			std::cout << (char) std::toupper(*to_scream);
			to_scream++;
		}
	}
}

int	main(int argc, char **argv)
{
	argv++;
	if (argc == 1)
		megaphone(NULL);
	while (*argv)
	{
		megaphone(*argv);
		argv++;
	}
	std::cout << std::endl;
}