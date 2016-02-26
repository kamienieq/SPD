#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

#include <iostream>

namespace tools {

	//lepszy zamiennik system("pause")
	void pause()
	{
		do
		{
			std::cout << "\n" << "Press the Enter key to continue.";
		}
		while (std::cin.get() != '\n');
	}

}

#endif // TOOLS_H_INCLUDED
