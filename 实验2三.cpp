#include<iostream>
using namespace std;
int main() {
	double x, y, z;
	cin >> x >> y >> z;
if ((x + y) > z && (x - y) < z)
 {
		cout << "�����ε��ܳ�Ϊ��" << x + y + z << endl;
		if (x == y || x == z || y ==z) {
			cout << "�ǵ���������" << endl;
		}
		else {
			cout << "���ǵ���������" << endl;
		}
	}

return 0;
}