#include <bits/stdc++.h>
using namespace std;
class first
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    first bo;
    bo.setName("Ashwini");
    cout << bo.getName();
    return 0;
}
