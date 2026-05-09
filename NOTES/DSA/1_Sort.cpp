#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Qucik Sort - Unstable, Prefered for sorting Arrays as requires random access
int part(vector<int> &arr, int s, int e)
{
    int piv = arr[s]; // letting pivot element
    int cnt = 0;      // counter to smaller elements than pivot
    for (int i = s; i < e; i++)
    {
        if (arr[i] <= piv)
            cnt++;
    }
    int pivid = s + cnt;
    swap(arr[s], arr[pivid]); // putting pivot to right index

    int i = s, j = e;
    while (i < pivid && j > pivid)
    {
        while (arr[i] < piv) // skipping the
        {
            i++;
        }
        while (arr[j] > piv) // right order elements
        {
            j--;
        }

        if (arr[i] > piv && arr[j] < piv)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivid;
}
void quicksort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int piv = part(arr, s, e);  // pivot index
    quicksort(arr, s, piv - 1); // left side
    quicksort(arr, piv + 1, e); // right side
}
// TC = Worst - O(n^2) & Avg/Best - O(nlogn), SC = O(n)

// Counting Sort - Stable
void countsort(int arr[], int n)
{
    int maxv = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxv = max(maxv, i);
    }

    int count[maxv + 1];
    for (int i = 0; i < maxv + 1; i++)
    {
        count[i] = 0;
    }

    int s = n;
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
// TC = O(n^2) & Avg(n+k)

// Radix Sort - Stable
void radixsort(int arr[], int n)
{
    int maxv = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxv = max(maxv, i);
    }

    int *radix_arr[10];
    int s = n;
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
// TC = O(n^2) & Ω(nk)

// Merge Sort - Stable, Prefered for Linked list as retains the order
void merge(int *arr, int beg, int end)
{
    int mid = (beg + end) / 2;
    int n1 = mid - beg + 1; // left's size
    int n2 = end - mid;     // right's size

    int left[n1], right[n2];
    int k = beg;
    for (int i = 0; i < n1; i++)
        left[i] = arr[k++];
    k = mid + 1;
    for (int i = 0; i < n2; i++)
        right[i] = arr[k++];

    int i = 0, j = 0;
    k = beg;
    while (i < n1 && j < n2) // sort and insert
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < n1) // add any leftovers
    {
        arr[k++] = left[i++];
    }
    while (j < n2) // in any
    {
        arr[k++] = right[j++];
    }
}
void mergesort(int *arr, int beg, int end)
{
    if (beg >= end) // single element is sorted
        return;

    int mid = (beg + end) / 2;
    mergesort(arr, beg, mid);     // left part division
    mergesort(arr, mid + 1, end); // right part division
    merge(arr, beg, end);         // merge to finish
}
// TC = O(nlogn), SC = O(n)

int main()
{
    int arr[26] = {5, 7, 2, 7, 7, 2, 2, 7, 8, 9, 2, 0, 4, 7, 2, 2, 1, 7, 8, 6, 5, 3, 3, 1, 2, 2};
    cout << "Unsorted Array: ";
    for (int i : arr)
        cout << i << " ";
    // Selection Sort - Unstable
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
    // TC = O(n^2) & Ω(n^2), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr)
        cout << i << " ";

    int arr1[20] = {5, 6, 7, 1, 9, 7, 3, 8, 9, 1, 2, 5, 6, 7, 8, 9, 3, 6, 7, 7};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr1)
        cout << i << " ";
    // Bubble Sort - Stable
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
    // TC = O(n^2) & Ω(n), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr1)
        cout << i << " ";

    int arr2[12] = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr2)
        cout << i << " ";
    // Insertion Sort - Stable
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
    // TC = O(n^2) & Ω(n), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr2)
        cout << i << " ";

    vector<int> arr3(12);
    arr3 = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr3)
        cout << i << " ";
    quicksort(arr3, 0, 11); // Quick Sort call
    cout << "\nSorted Array:   ";
    for (int i : arr3)
        cout << i << " ";

    int arr4[12] = {5, 2, 2, 5, 3, 2, 7, 2, 7, 2, 5, 2};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr4)
        cout << i << " ";
    countsort(arr4, 12);
    cout << "\nSorted Array:   ";
    for (int i : arr4)
        cout << i << " ";

    int arr5[12] = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr5)
        cout << i << " ";
    radixsort(arr5, 12);
    cout << "\nSorted Array:   ";
    for (int i : arr5)
        cout << i << " ";

    int arr6[12] = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "\n\nUnsorted Array: ";
    for (int i : arr6)
        cout << i << " ";
    mergesort(arr6, 0, 11); // Merge sort call
    cout << "\nSorted Array:   ";
    for (int i : arr6)
        cout << i << " ";

    return 0;
}