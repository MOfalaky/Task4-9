#include <iostream>
using namespace std;
//----------------------Q1--------------------------//
void binarySearch(int arr[], int size, int number)
{
    int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;
    for (int i = 0; first <= last; i++)
    {
        if (arr[middle] < number)
        {
            first = middle + 1;
        }
        else if (arr[middle] == number)
        {
            cout << "Element is found at index: " << middle << endl;
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    
}

int main()
{
    int arr[8] = {5, 10, 15, 20, 25, 30, 35, 40};
    binarySearch(arr,8,25);
    return 0;
}
