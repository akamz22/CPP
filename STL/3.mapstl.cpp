#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main()
{

    map<int, int> a;
    a[1] = 100;
    a[2] = -1;
    a[3] = 13;
    a[136] = 145;

    for (int i = 0; i < 10; i++)
    {
        a.insert({i*2, i+5});
    }
    
    cout <<"First element"<< "\t\t " << "Second element" << endl;
    map<int, int>::iterator i;
    for (i = a.begin(); i != a.end(); i++)
    {
        cout << (*i).first << "\t\t\t " << (*i).second << endl;
    }

    map<char, int> cnt;
    string x = "ashwini kumar";
    for (char c : x)
        cnt[c]++;

    cout <<"a occurs : "<< cnt['a']<<" times\n" << "z occurs : " << cnt['z'] <<" times"<< endl;
}