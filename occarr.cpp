#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int arr[15] = {1, 1, 2, 2, 3, 4, 5, 6, 7, 6, 8, 8, 8, 9, 10};
    int freq[15] = {0};
    int temp;
    int fr[15];
    int visited = -1;

    for (int i = 0; i < 15; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;

                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
    }
    return 0;
}