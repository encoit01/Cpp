#include "Point4.hpp"
#include <iostream>
using namespace std;
int main() {
    Point p1(3,5);
    Point p2(4,2);
    Point p3(6,2);
    cout<<p1+p2+p3<<endl;
    cout<<(p3-p1)+p2<<endl;
    cout<<-p3<<endl;
    cout<<p1+3.5<<endl;
    cout<<(3.5+p1)<<endl;
    cout<<++p2<<endl;
    cout<<p2++<<endl;
    cout<<p2<<endl;
    return 0;
}