// Illustration
#include "iostream"
using namespace std;

class point
{
private:

public:

double x, y;
// Non-default Constructor &
// default Constructor
// point (double px, double py)
// {
//  x = px, y = py;
//  }
 };
 int main(void)
 {

 // Define an array of size
 // 10 & of type point
 // This line will cause error

 // Remove above line and program
 // will compile without error
 point b;//= point(5, 6);
 point a;
 b.x = 5;
 b.y = 10000;
 cout<<"b: "<<b.x<<" "<<b.y<<endl;
 return 0;
 } 
// }
