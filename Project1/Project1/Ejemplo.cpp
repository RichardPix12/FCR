#include <iostream> // como el import de Java y python

using std::cout; //siempre que pongamos cout ser� igual que std:cout
using std::endl; //siempre que pongamos endl ser� igual que std::endl
using std::cin;  //siempre que pongamos cin ser� igual que std::cin

void pon23(int& numero)
{
	numero = 23;
}

int main()
{
	const unsigned int maxCad = 100;
	char cad[maxCad];
	cin.getline(cad, maxCad);

	
	system("Pause");

	return 0;
	
}



