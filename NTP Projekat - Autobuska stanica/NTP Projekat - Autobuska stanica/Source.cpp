#include <iostream>

void driver();

int main()
{
	int option;

	while (true)
	{
		system("cls");
		std::cout << "\n\tDobro dosli u autobusku stanicu xy!";

		std::cout << "\n\n\tDa li ste:"
			<< "\n\t\t1 - Vozac?"
			<< "\n\t\t2 - Putnik?"
			<< "\n\t\t3 - Vlasnik?"
			<< "\n\t\t10 - Izlaz"
			<< "\n\n\t\tOdabir: ";

		std::cin >> option;

		if (option == 1)
		{
			driver();
		}
		else if (option == 2)
		{

		}
		else if (option == 3)
		{

		}
		else if (option == 10)
		{
			std::cout << "\n\n\t       \n\n\n";
			return 0;
		}
		else
		{
			std::cout << "\n\t\tInvalid option!";
		}
		std::cout << "\n\n\t\t";
		system("pause");
	}
}