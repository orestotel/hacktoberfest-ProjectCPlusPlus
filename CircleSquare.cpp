#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
/*This code still doesn't work properly, but if you like the tamplate,
you may use it or modify it to your needs*/
void count(double x, double y, double rx, double ry) {
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
    cout << "The coordinates ("<<x<<","<<y<<") stand in "<<temp<<"\'th quadrant\n"<< endl;
    
    double absX = pow(abs(x-rx),2.0);
    double absY = pow(abs(y-ry),2.0);
    if(sqrt(absX + absY) < 1)
        cout<<"The coordinate is inside the circle\n";
    else
        cout<<"The coordinate is outside the circle\n";

    /* continue with NOT adding a circle but ENUMERATING CIRCLE BORDERS. Or do we just need Pi?*/

}
int main() {
    double x, y;
    double radius=1;                        
    
    //center is at origin(0,0)
    double rx,ry;       //rx= X coordinate of center  and ry= Y coordinate of center 
    rx=ry=0;            //making them to by default to 0
    
    cout<<"Square's length is 2 units and the center is in the origin (0,0)";
    cout<<"\n The Circle of Radius 1 is also centered at (0,0)";
    cout<<"\n So Enter a coordinate to check if that point is inside the square but outside the circle or not";
    
    cout << "\nInsert X; \n";
    cin >> x;
    cout << "InsertY; \n";
    cin >> y;
    if(x>=-1.0&&y>=-1.0&&x<=1.0&&y<=1.0){   //this line of code means your circle is having a radius of 1 centered at (0,0)
    count(x,y,rx,ry);
    }
    if(!(x>=-1.0&&y>=-1.0&&x<=1.0&&y<=1.0)){
        cout<<"ERROR> ILLEGAL COORDINATE. \n This coordinate is outside the predefined boundaries of the Square.\n";
        }
return 0;
}
