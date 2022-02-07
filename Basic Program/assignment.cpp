#include <iostream>
using namespace std;
class cake
{
private:
    int height = 10;
    float weight = 0.5;
    string shape = "Circular";
    string message = "Happy Birthday";

public:
    void get_details()
    {
        cout << "Height of cake is : " << height << "cm" << endl;
        cout << "Weight of cake is : " << weight << "kg" << endl;
        cout << "Shape of cake is : " << shape << endl;
        cout << "Message on the cake is : " << message << endl;
    }
    void set_details(int h, float w)
    {
        height = height + h;
        weight = weight + w;
    }
};

int main()
{
    cake ob;
    ob.get_details();
    ob.set_details(2, 0.5);
    cout << endl;
    cout << "After increasing height by 2 cm and weight by 0.5kg the new details of the cake is following --->" << endl;
    ob.get_details();

    return 0;
}