#include <iostream>
#include <math.h>

using namespace std;

double perimetro(double a) {	
	return 2.0 * 3.14159265359 * a;
}

int main() {
	double ray{};

	cout << "write the ray: ";
	cin >> ray;

	cout << "Perimetro: " << perimetro(ray);

	return 0;
}
