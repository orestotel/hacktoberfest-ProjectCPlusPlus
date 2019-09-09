#include <iostream>
using namespace std;
void count(double x, double y) {
    short temp;
    /*
    1 - x+ y+
    2 - x- y+
    3 - x- y-
    4 - x+ y-
    */

    /* check the section position*/

    if (x > 0.0 && y > 0.0) {
    temp = 1;
    }
    if (x < 0.0 && y > 0.0) {
    temp = 2;
    }
    if (x < 0.0 && y < 0.0) {
    temp = 3;
    }
    if (x > 0.0 && y < 0.0) {
    temp = 4;
    }
    if (x == 0.0, y == 0.0) {
    temp = 0;
    }
    cout << "The coordinates stand in "<<temp<<"\' area"<< endl;

    /* continue with adding a circle*/

}
int main() {
    double x, y;
    cout << "Insert X; \n";
    cin >> x;
    cout << "InsertY; \n";
    cin >> y;
    if(x>=-1.0&&y>=-1.0&&x<=1.0&&y<=1.0){
    count(x,y);
    }
    if(!(x>=-1.0&&y>=-1.0&&x<=1.0&&y<=1.0)){
        cout<<"ERROR> ILLEGAL COORDINATE. \n This coordinate is outside the predefined boundaries of the circle.";
        }
system("pause");
return 0;
}
