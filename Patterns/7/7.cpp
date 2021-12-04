#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		if(i == 0 || i == n - 1)
		{
			for(j = 0; j < n; j++)
				cout << "-";
			cout << endl;
		}
		else if(i == (n / 2))
		{
			for(j =  0; j < n; j++)
				cout << "*";
			cout << endl;
		}
		else
		{
			for(j = 0; j < 1; j++)
				cout << "*";
			for(j = 0; j < n - 2; j++)
				cout << " ";
			for(j = 0; j < 1; j++)
				cout << "*";
			cout << endl;
		}
	}
	return 0;
}
