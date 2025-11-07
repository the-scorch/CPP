#include <iostream>
using namespace std;

int linear_s(int arr[], int target, int s) // TC = O(n), SC = O(1)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int binary_s(int arr[], int target, int s) // TC = O(log2(n)), SC = O(1)
{
    int left = 0;
    int right = s - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[10] = {3, 9, 7, 6, 1, 0, 8, 5, 4, 2};
    int target = 0;
    int result = linear_s(arr, target, 10);
    if (result != -1)
    {
        cout << "\nThe Element is found at Index: " << result << ".\n\n";
    }
    else
    {
        cout << "\nCan't found the Element in given array!\n\n";
    }

    int arr1[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target1 = 18;
    int result1 = binary_s(arr1, target1, 10);
    if (result1 != -1)
    {
        cout << "The Element is found at Index: " << result1 << ".\n\n";
    }
    else
    {
        cout << "Can't found the Element in given array!\n\n";
    }

    return 0;
}