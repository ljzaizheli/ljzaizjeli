#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double a;
	cout << "����a:";
	cin >> a;
	double b;
	cin >> b;
	double i=0, c;
		for (;;i++) {
	
			c = (b + a / b) / 2;
			cout<<fixed << setprecision(5) << c;
			b = c;
			if ( abs(b - c)  < 1e-5) {
				break;
			}
	}
		cout << "a��ƽ����Ϊ��" <<fixed<<setprecision(5)<< b << endl;
	return 0;
}