#include <iostream>
using namespace std;

void revert(const char *);

int main()
{
	char num[50];
	cout << "Ingresel numero a revertir: ";
	cin.getline(num, 50);
	cout << endl;
	revert(num);
	
	return 0;
}

void revert(const char *b)
{
	if (*b == '\0')
		return;
	else
	{
		revert(b + 1);
		putchar(*b);
	}
}