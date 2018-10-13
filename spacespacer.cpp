#include <iostream>
#include <string.h>
std::string trimspaces(std::string x)
{
	char xy[1024];
	int index = 0;
	for (int i = 0; i < strlen(x.c_str()); i++)
	{
		if ((int) x.c_str()[i] != 32)
		{
			xy[index++] = x.c_str()[i];
		}	
	}
	std::string with_no_spaces(xy);
	return with_no_spaces;
}
int main()
{
	char buff[1024];
	std::cout << "Type something> ";
	std::cin.getline(buff,1024);
	std::cout << trimspaces(buff) << "\n";
}
