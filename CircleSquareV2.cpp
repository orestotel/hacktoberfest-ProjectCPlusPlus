#include <iostream>
#include <math.h>


bool in_square(double x, double y) {
	return x >= -1.0 && y >= -1.0 && x <= 1.0 && y <= 1.0;
}

bool in_circle(double x, double y) {
	// Point (x, y) is in circle if its distance from (0, 0) is less or equal
	// to radius. To use faster instructions, use squared values.
	return x * x + y * y <= 1 * 1;
}

using namespace std;

int main() {
	double x, y;
	cout << "Insert X; \n";
	cin >> x;
	cout << "InsertY; \n";
	cin >> y;
	if (in_square(x, y)) {
		if(!in_circle(x, y))
			cout << "SUCCESS> This coordinate is inside the predefined boundaries of the square and outside the predefined boundaries of the circle.";
		else
			cout << "ERROR> ILLEGAL COORDINATE. \n This coordinate is inside the predefined boundaries of the circle.";
	}
	else {
		cout << "ERROR> ILLEGAL COORDINATE. \n This coordinate is outside the predefined boundaries of the square.";
	}
	system("pause");
	return 0;
}
