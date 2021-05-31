#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "1,2,3,4,5,6,7";
    int sum;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ',')
        {
            continue;
        }
        cout << (s[i]) << " ";
        sum = sum + s[i] - 48;
    }
    cout << '\n'
         << sum << endl;
    return 0;
}