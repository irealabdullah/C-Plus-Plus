#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle();
    rectangle(int l, int b); // Constructors
    rectangle(rectangle &r);

    void setlength(int l); // Mutator
    void setbreadth(int b);

    int getlength(); // Accessor
    int getbreadth();

    int area();
    int perimeter(); // facilitator
    int isSquare();

    ~rectangle(); // Destructor
};