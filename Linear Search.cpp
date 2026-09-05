#include <iostream>
using namespace std;
//----------------------Q1--------------------------//
void search(int arr[], int size, int number)
{
    for (int i=0; i<size;i++)
    {
        if(arr[i]==number)
        {
            cout<<"Number found at index: "<<i<<endl;
            return;
        }
    }
    cout<<"Number not found"<<endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    search(arr,5,4);
    return 0;
}
