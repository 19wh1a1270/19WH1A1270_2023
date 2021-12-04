#include<iostream>
using namespace std;
int main()
{
	int n, i, j, k;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		j = 1;
		for(k = 0; k <= i; k++)
			cout << j++ << " ";
		cout << endl;
	}
	return 0;
}
