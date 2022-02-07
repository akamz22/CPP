// #include <iostream>
// using namespace std;
// int sum_of_digits(int n)
// {
//     int digit, sum = 0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     return sum;
// }
// int main()
// {
//     int number, digits_sum;
//     cout << "Enter Positive integer within the range:";
//     cin >> number;
//     digits_sum = sum_of_digits(number);
//     cout << "sum of digts of " << number << " is " << digits_sum;
//     return 0;
// }

#include <iostream>
using namespace std;
class example
{
private:
    int x, y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    int get()
    {
        return x + y;
    }
};
int main()
{
    example obj;
    int x, y;
    cout << "Enter value of x and y : ";
    cin >> x >> y;
    obj.set(x, y);
    cout << "Sum of x and y is : " << obj.get() << endl;
    return 0;
}
