#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Valor de a:";
	cin >> a;
	cout << "Valor de b:";
	cin >> b;

	c = a + b;

	// Si se produce desbordamiento
	if ((a > 0 && b > 0 & c < 0)||(a < 0 && b < 0 && c > 0))
		cout << "Se ha producido un desbordamiento" << endl;
	else
		cout << "Suma:" << c << endl;

	system("pause");

	return 0;
}
