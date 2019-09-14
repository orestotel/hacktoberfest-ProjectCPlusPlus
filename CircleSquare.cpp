#include <iostream>
#include <math.h>
using namespace std;
/*This code still doesn't work properly, but if you like the tamplate,
you may use it or modify it to your needs*/
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

    if(x>=M_PI&&y>=M_PI){
        cout<<"The coordinate successfully landed outside the circle";
    }
    if(!(x>=M_PI&&y>=M_PI)){
        cout<<"ERROR. The coordinate didn\'t landed outside the circle";
    }
    cout<<M_PI;

    /* continue with NOT adding a circle but ENUMERATING CIRCLE BORDERS. Or do we just need Pi?*/

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
