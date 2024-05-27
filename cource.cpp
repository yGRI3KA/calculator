#include <iostream>

using namespace std;

int main()
{
	float a;
	cout << "vvedite a: ";
	cin >> a;	
	float b;
	cout << "vveditr b: ";
	cin >> b;
	cout << "menu\n + add\n - minus\n / dilenya\n * mnoj\n";
	char ch;
	cout << "Vvedit operaciu: ";
	cin >> ch;
	switch (ch)
	{
	case '+':cout << "add = " << a + b << "\n";
		break;
	case '-':cout << "minnus = " << a - b << "\n";
		break;
	case '*':cout << "mnoj = " << a * b << "\n";
		break;
	case '/':
		if (b != 0)
		{
			cout << "dilenya = " << a / b << "\n";
		}
		else
		{
			cout << "eror ";
		}
}