#include<iostream>
using namespace std;

int main()
{
	cout << "���С������2������:"<<endl;

	int val1, val2,sum=0;
	cin >> val1 >> val2;
	if (val1 > val2)
		return -1;
	while (val1<val2+1)
	{ 
		sum += val1;
		cout << val1 << " ";
		val1++;
	}
	cout << endl;
	cout << "�������֮��:"<<sum << endl;;
	return 0;
}