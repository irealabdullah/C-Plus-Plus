#include <iostream>
using namespace std;
class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

int main()
{
    // AdvanceCar a;
    // a.start();
    // a.playMusic();

    BasicCar *ptr;
    ptr = new AdvanceCar;
    ptr->start();
    // ptr->play(); There is no function of music play in basic car
}

// VVV IMP TOPIC --> DESIGN DYNAMIC APPLICATION