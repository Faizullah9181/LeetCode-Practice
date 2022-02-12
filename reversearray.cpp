#include <iostream>
using namespace std;
void reverese(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {6, 9, 1, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    reverese(arr, 0, n - 1);
    cout << "After Reversing ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}