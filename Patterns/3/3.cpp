#include<iostream>
using namespace std;
int main()
{
	int n, i, j, k = 65;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
			cout << char(k) << " ";
		cout << endl;
		k++;
	}
	return 0;
}
