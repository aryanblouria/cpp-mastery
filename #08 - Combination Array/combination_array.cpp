#include<iostream>
using namespace std;

void print(const int *const arr, int arr_size)
{
    for (size_t i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    size_t size3 = size1 * size2;
    int *arr3 = nullptr;
    arr3 = new int[size3];

    int index = 0;
    for (size_t i = 0; i < size2; i++)
        for (size_t j = 0; j < size1; j++)
        {
            arr3[index] = arr1[j] * arr2[i];
            index++;
        }

    return arr3;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    cout<<"Array 1: ";
    print(arr1, 5);

    cout<<"Array 2: ";
    print(arr2, 3);

    int *results = apply_all(arr1, 5, arr2, 3);
    cout<<"Result: ";
    print(results, 15);

    delete [] results;
    cout<<endl;

    return 0;
}
