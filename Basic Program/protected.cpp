#include <bits/stdc++.h>
using namespace std;
class parent
{
protected:
    int id_protected;
};
class child : public parent
{
public:
    void setid(int id)
    {
        id_protected = id;
    }
    void display()
    {
        cout << "id_protected is : " << id_protected << endl;
    }
};
int main()
{
    child obj1;
    obj1.setid(12345);
    obj1.display();
    return 0;
}
