#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Which Element you find : ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i << endl;
            break;
        }
        else
        {
            cout << "-1" << endl;
            break;
        }
    }
    return 0;
}