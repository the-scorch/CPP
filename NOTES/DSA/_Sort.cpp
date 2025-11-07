#include <iostream>
#include <array>
using namespace std;

template <size_t N>
int part(array<int, N> &arr, int l, int h)
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

template <size_t N>
void quicksort(array<int, N> &arr, int l, int h)
{
    if (l < h)
    {
        int centid = part(arr, l, h);  // center element index
        quicksort(arr, l, centid - 1); // left side
        quicksort(arr, centid + 1, h); // right side
    }
}
template <size_t N>
void countsort(array<int, N> &arr)
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

template <size_t N>
void radixsort(array<int, N> &arr)
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

template <size_t N>
void mergesort(array<double, N> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

template <size_t N>
void merge(array<double, N> &arr, int start, int mid, int end)
{
    int n1 = mid - start + 1; // left's size
    int n2 = end - mid;       // right's size
    double left[n1], right[n2];
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

int main()
{
    // Algorithm for Lowest Value in Array
    /*Pseudocode:
    Declare a variable
    Visit each element of Array
    If element is smaller than variable
    Assign it to variable*/
    array<int, 20> arr = {5, 6, 7, 1, 9, 7, 3, 8, 9, 1, 2, 5, 6, 7, 8, 9, 3, 6, 7, 7};
    int s = arr.size();
    int minv = arr[0];
    for (int i : arr)
    {
        if (minv > i)
        {
            minv = i;
        }
    } // Time Complexity = n, Space Complexity = O(1)
    cout << "\nLowest Value: " << minv;

    // Selection Sort - Unstable
    array<int, 26> arr1 = {5, 7, 2, 7, 7, 2, 2, 7, 8, 9, 2, 0, 4, 7, 2, 2, 1, 7, 8, 6, 5, 3, 3, 1, 2, 2};
    int s1 = arr1.size();
    cout << "Unsorted Array: ";
    for (int i : arr1)
    {
        cout << i << " ";
    }
    for (int i = 0; i < s1 - 1; i++)
    {
        int minid = i;
        for (int j = i + 1; j < s1; j++)
        {
            if (arr1[minid] > arr1[j])
            {
                minid = j;
            }
        }
        swap(arr1[i], arr1[minid]);
    } // TC = O(n^2) & Ω(n^2), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Bubble Sort - Stable
    cout << "\nUnsorted Array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    for (int i = 0; i < s - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < s - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    } // TC = O(n^2) & Ω(n), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Insertion Sort - Stable
    array<int, 12> arr2 = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    int s2 = arr2.size();
    cout << "Unsorted Array: ";
    for (int i : arr2)
    {
        cout << i << " ";
    }
    for (int i = 1; i < s2; i++)
    {
        int insert = i;
        int val = arr2[i];
        int j = i - 1;
        while (j >= 0 && arr2[j] > val)
        {
            arr2[j + 1] = arr2[j];
            insert = j;
            j--;
        }
        arr2[insert] = val;
    } // TC = O(n^2) & Ω(n), SC = O(1)
    cout << "\nSorted Array:   ";
    for (int i : arr2)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Qucik Sort - Unstable
    array<int, 12> arr3 = {52, 25, 23, 523, 356, 253, 7347, 246, 745, 2, 52, 253};
    int s3 = arr3.size();
    cout << "Unsorted Array: ";
    for (int i : arr3)
    {
        cout << i << " ";
    }
    quicksort(arr3, 0, s3 - 1); // TC = O(n^2) (Avg = nlogn)
    cout << "\nSorted Array:   ";
    for (int i : arr3)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Counting Sort - Stable
    array<int, 12> arr4 = {5, 2, 2, 5, 3, 2, 7, 2, 7, 2, 5, 2};
    cout << "Unsorted Array: ";
    for (int i : arr4)
    {
        cout << i << " ";
    }
    countsort(arr4); // TC = O(n^2) (Avg = O(n+k))
    cout << "\nSorted Array:   ";
    for (int i : arr4)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Radix Sort - Stable
    array<int, 12> arr5 = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "Unsorted Array: ";
    for (int i : arr5)
    {
        cout << i << " ";
    }
    radixsort(arr5); // TC = O(n^2) (Best = O(nk))
    cout << "\nSorted Array:   ";
    for (int i : arr5)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // Merge Sort - Stable
    array<double, 12> arr6 = {5234, 2234, 2234, 5324, 3455, 2757, 737, 24, 7, 2457, 556, 245};
    cout << "Unsorted Array: ";
    for (int i : arr6)
    {
        cout << i << " ";
    }
    mergesort(arr6, 0, 11); // TC = O(nlogn)
    cout << "\nSorted Array:   ";
    for (int i : arr6)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    return 0;
}