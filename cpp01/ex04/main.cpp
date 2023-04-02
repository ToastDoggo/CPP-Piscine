#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::fstream	fd;
	std::ofstream	outfile;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (127);
	}
	fd.open(argv[1]);
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 =argv[3];
	if (!fd.is_open())
	{
		std::cerr << "ERROR: File '" << filename << "' doesn't exit." << std::endl;
		return (2);
	}
	std::string		replacement = filename + ".replace";
	outfile.open(replacement.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "ERROR: Could not create outfile."<< std::endl;
		return (1);
	}
	std::string::size_type		pos = 0;
	while (getline(fd, line))
	{
		pos = line.find(s1);
		if(pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		outfile << line << std::endl;
	}
	fd.close();
	outfile.close();
	return (0);
}