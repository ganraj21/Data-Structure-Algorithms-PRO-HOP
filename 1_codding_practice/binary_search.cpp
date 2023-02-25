#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10, 21, 3, 9, 45};

    int key;
    cout << "Which element you find : ";
    cin >> key;

    int as = sizeof(arr);
    for (int i = 0; i < as; i++)
    {
        if (arr[as / 2] == key)
        {
            cout << i << endl;
        }
        else if (arr[as / 2] > key)
        {
            cout << "ok" << endl;
        }
        else if (arr[as / 2] < key)
        {
            cout << "not ok" << endl;
        }
    }
    return 0;
}