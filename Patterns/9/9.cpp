#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	int k = n - 2;
	for(i = 0; i < n / 2; i++)
	{
		for(j = 0; j <= i; j++)
			cout << "*";
		for(j = k; j > 0; j--)
			cout << " ";
		for(j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
		k = k - 2;
	}
	for(i = 0; i < n; i++)
		cout << "*";
	cout<<endl;
	int y = 1;
	for(i = 0; i < n / 2; i++)
	{
		for(j = i; j < n / 2; j++)
			cout << "*";
		for(j = 0; j < y; j++)
			cout << " ";
		for(j = i; j < n / 2; j++)
			cout << "*";
		cout << endl;
		y = y + 2;
	}
	return 0;
}

