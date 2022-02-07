#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<vector<int>> v = {{1, 5}, {7, 3}, {3, 5}};
    vector<int> ans;
    for (vector<int> vect : v)
    {
        int sum = 0;

        for (int x : vect)
        {
            cout << x << " ";
            sum = sum + x;
            ans.push_back(sum);
        }
        cout << endl;
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}