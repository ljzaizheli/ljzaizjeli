#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	str = "sanc 128h][..Aw;,1124";
	int i=0,a=0, b=0, c=0, d=0;
	for (i;i < 21;i++) {
		int f = str[i];
		if ((65 <= f && f<= 90) || (97 <= f&& f <= 122)) {
			a += 1;
		}
		else if (48 <= f && f <= 57) {
			b += 1;
		}
		else if (f == 32) {
			c += 1;
		}
		else {
			d += 1;
		}
	}
		cout << "Ӣ����ĸ������" << a;
		cout << "���ָ�����" << b;
		cout << "�ո������" << c;
		cout << "����������" << d<<endl;
	
	return 0;
}