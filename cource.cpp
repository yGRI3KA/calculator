#include <iostream>
using namespace std;

int main()
{
	float a = 0, b = 0;
	char dia;
	cout << "Vvedit a:";
	cin >> a;
	cout << "Vvedit dia (+, -, /, *):";
	cin >> dia;
	cout << "Vvedit b:";
	cin >> b;

	if (dia == '+')
	{
		cout << "Vidpovid = " << a + b;
	}
	else
	{
		if (dia == '-')
		{
			cout << "Vidpovid = " << a - b;
		}
		else
		{
			if (dia == '/')
			{
				if (b == 0)
				{
					cout << "Ne mojna diliti na nyl!!";
				}
				else
				{
					cout << "Vidpovid = " << a / b;
				}
			}
			else
			{
				if (dia == '*')
				{
					cout << "Vidpovid = " << a * b;
				}
			}

		}
	}
}