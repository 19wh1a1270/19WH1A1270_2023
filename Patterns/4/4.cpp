#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	for(i = n - 1; i > 0; i--)
	{
		for(j = i; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
