#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "�����뻪ʽ�¶�:";
	cin >> a;
	b = (a - 32)*5/9;
	cout << fixed << setprecision(2)<<"�����¶ȣ�" << b << endl;
	return 0;
}
