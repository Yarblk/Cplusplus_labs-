#include <iostream>
#include <string>
using namespace std;
class Square
{
private:
    double side;
    double area;
public:
    Square(double side);
    void set_side(double side);
    void print();
};
void Square::set_side(double side)
{
    if (side < 0)
    {
        this->side = side;
        this->area = 0;
    }
    else
    {
        this->side = side;
        this->area = side * side;
    }
}
Square::Square(double side)
{
    set_side(side);
}
void Square::print()
{
    cout << "Square: side=" << this->side << " area=" << this->area << endl;
}
int main()
{
    Square s(4);
    s.print();
    s.set_side(2.0);
    s.print();
    s.set_side(-33.0);
    s.print();
    return 0;
}