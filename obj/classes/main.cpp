#include <iostream>
#include <string>

using namespace std;

class car  ///Class name
{
public:
    ///Atributes of the obj:
    string brand;
    string model;
    string color;
    int year;

    ///metod = function that belongs to the class:
    void func();  ///declaration of the method

    int speed(int x); ///another method

private:
    int price;
public:
    ///how to set/get a private atributte:
    void setPrice(int x);
    int getPrice();
};

void car::func()
{
    cout << "\nThis is the definition of the func~ method!\n";
}

int car::speed(int x)
{
    cout << "The max speed is : " << x << " km/h\n";
    return x;
}

void car::setPrice(int x)
{
    price = x;
}

int car::getPrice()
{
    return price;
}
int main()
{
    ///Obj 1:
    car carObj1;
    carObj1.brand = "Audi";
    carObj1.model = "A6";
    carObj1.color = "Gray";
    carObj1.year = 2002;

    ///Obj 2:
    car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Fiesta";
    carObj2.color = "Ruby Red";
    carObj2.year = 2018;

    /// Display the attributes of car1 and car2:
    cout << "The attributes of car1 are: " << carObj1.brand << " ,"
         << carObj1.model << " ," << carObj1.color << " ," << carObj1.year << "\n";
    cout << "The attributes of car2 are: " << carObj2.brand << " ,"
         << carObj2.model << " ," << carObj2.color << " ," << carObj2.year << ".\n";

    /// Call the methods:
    carObj1.func();  /// Call the function

    int maxSpeed = 180;  /// Example max speed for car2
    carObj2.speed(maxSpeed);

    carObj1.setPrice(50000);
    carObj2.setPrice(300000);
    cout << "The price of the cars is: "<<carObj1.getPrice()<<"$ and"<<carObj2.getPrice()<<"&.";
    return 0;
}
