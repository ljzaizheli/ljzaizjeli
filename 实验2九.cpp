#include<iostream>
using namespace std;
int main() {
	float a=1, b=2, c=0;
	for (;;a++) {
		if (b > 100) {
			break;
		}
		c += b;
		b *= 2;
		

	}

	cout << "ƽ����ƻ����Ǯ��" << c * 0.8 / (a - 1) << endl;





	return 0;
}