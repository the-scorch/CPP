#include <iostream>
#include <algorithm>
using namespace std;

int part(int arr[], int l, int h)
{
    int cent = arr[h]; // letting center
    int i = l - 1;     // index of center

    for (int j = l; j < h; j++)
    {
        if (arr[j] <= cent)
        {
            i++;
            swap(arr[i], arr[j]); // move smaller to left
        }
    }
    swap(arr[i + 1], arr[h]); // put center at right index

    return i + 1;
}
void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int centid = part(arr, l, h);  // center element index
        quicksort(arr, l, centid - 1); // left side
        quicksort(arr, centid + 1, h); // right side
    }
}

void countsort(int arr[])
{
    int maxv = arr[0];
    for (int i : arr)
    {
        maxv = max(maxv, i);
    }

    int count[maxv + 1];
    for (int i = 0; i < maxv + 1; i++)
    {
        count[i] = 0;
    }

    int s = N;
    for (int i = 0; i < s; i++)
    {
        count[arr[i]]++;
    }

    int id = 0;
    for (int i = 0; i <= maxv; i++)
    {
        while (count[i]--)
        {
            arr[id++] = i;
        }
    }
}

void radixsort(int arr[])
{
    int maxv = arr[0];
    for (int i : arr)
    {
        maxv = max(maxv, i);
    }

    int *radix_arr[10];
    int s = N;
    for (int i = 0; i < 10; i++)
    {
        radix_arr[i] = new int[s];
    }
    int count[10] = {0};

    int exp = 1;
    while (maxv / exp > 0)
    {
        for (int i = 0; i < s; i++)
        {
            int radix_id = (arr[i] / exp) % 10;
            radix_arr[radix_id][count[radix_id]] = arr[i];
            count[radix_id]++;
        }

        int pos = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                arr[pos] = radix_arr[i][j];
                pos++;
            }
            count[i] = 0;
        }

        exp *= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        delete[] radix_arr[i];
    }
}

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1; // left's size
    int n2 = end - mid;       // right's size
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) // sort and insert in array
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else if (left[i] >= right[j])
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) // add any leftovers
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    // Selection Sort - Unstable, TC = O(n^2) & Ω(n^2), SC = O(1)
    int arr[26] = {5, 7, 2, 7, 7, 2, 2, 7, 8, 9, 2, 0, 4, 7, 2, 2, 1, 7, 8, 6, 5, 3, 3, 1, 2, 2};
    cout << "Unsorted Array: ";
    for (int i : arr)
        cout << i << " ";
    for (int i = 0; i < 26 - 1; i++)
    {
        int minid = i;
        for (int j = i + 1; j < 26; j++)
        {
            if (arr[minid] > arr[j])
            {
                minid = j;
            }
        }
        swap(arr[i], arr[minid]);
    }
    cout << "\nSorted Array:   ";
    for (int i : arr)
        cout << i << " ";

    // Bubble Sort - Stable, TC = O(n^2) & Ω(n), SC = O(1)
    int arr1[20] = {5, 6, 7, 1, 9, 7, 3, 8, 9, 1, 2, 5, 6, 7, 8, 9, 3, 6, 7, 7};    
    cout << "\n\nUnsorted Array: ";
    for (int i : arr1)
        cout << i << " ";
    for (int i = 0; i < 20 - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < 20 - 1 - i; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    cout << "\nSorted Array:   ";
    for (int i : arr1)
        cout << i << " ";

    // Insertion Sort - Stable, TC = O(n^2) & Ω(n), SC = O(1)
    int arr2[12] = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr2)
        cout << i << " ";
    for (int i = 1; i < 12; i++)
    {
        int insert = i;
        int temp = arr2[i];
        int j = i - 1;
        while (j >= 0 && temp < arr2[j])
        {
            arr2[j + 1] = arr2[j];
            insert = j;
            j--;
        }
        arr2[insert] = temp;
    }
    cout << "\nSorted Array:   ";
    for (int i : arr2)
        cout << i << " ";

    // Qucik Sort - Unstable, TC = O(n^2) & Avg = nlogn
    int arr3[12] = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr3)
    {
        cout << i << " ";
    }
    quicksort(arr3, 0, 11);
    cout << "\nSorted Array:   ";
    for (int i : arr3)
    {
        cout << i << " ";
    }

    // Counting Sort - Stable, TC = O(n^2) & Avg(n+k)
    int arr4[12] = {5, 2, 2, 5, 3, 2, 7, 2, 7, 2, 5, 2};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr4)
    {
        cout << i << " ";
    }
    countsort(arr4);
    cout << "\nSorted Array:   ";
    for (int i : arr4)
    {
        cout << i << " ";
    }

    // Radix Sort - Stable, TC = O(n^2) & Ω(nk)
    int arr5[12] = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr5)
    {
        cout << i << " ";
    }
    radixsort(arr5);
    cout << "\nSorted Array:   ";
    for (int i : arr5)
        cout << i << " ";

    // Merge Sort - Stable, TC = O(nlogn)
    int arr6[12] = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr6)
    {
        cout << i << " ";
    }
    mergesort(arr6, 0, 11);
    cout << "\nSorted Array:   ";
    for (int i : arr6)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    return 0;
}