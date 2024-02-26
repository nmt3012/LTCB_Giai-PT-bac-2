
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c, x1, x2, defta;
	cout << "a, b, c, x1, x2,defta2\n";
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	cout << "Nhap c:"; cin >> c;
	if (a == 0) { //bx+c=0
		if (c == 0) {
			if (c != 0) {
				cout << "PT vo nghiem";
			}
			else {
				cout << "pt có vô sối nghiệm";
			}
		}
		else {
			x1 = x2 = -c / b;
			cout << "PT có nghiệm x=" << x1;
		}
	}
	else {
		defta = b * b - 4 * a * c;
		if (defta < 0) {
			cout << "pt vo nghiem";
		}
		else 1f(defta == 0) {
			x1 = x2 = -b / (2 * a);
			cout << "PT co nghiem kep x1=x2=" << x1;
		}
else {
	x1 = (-b + sqrt(dafta)) / (2 * a);
	x2 = (-b + sqrt(dafta)) / (2 * a);
	cout << "PT có 2 nghiệm phân biệt\n";
	cout << "x1=" << x1;
	cout << "x2=" << x2;
			}
	}
	return 0;
}


				

