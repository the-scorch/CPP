#include <bits/stdc++.h> // contains almost all header files
#include <algorithm>
using namespace std;

int main()
{
    // Sort
    vector<int> nums = {2, 1, 3, 5, 4, 10, 9, 7, 8, 6};

    sort(nums.begin(), nums.end()); // Sort in ascending order

    for (int i : nums)
    {
        cout << i << "\t";
    }

    cout << endl;

    sort(nums.rbegin(), nums.rend()); // Sort in descencding order

    for (int i : nums)
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    vector<string> cntry = {"Start", "India", "Switzerland", "New York", "New Zealand", "Dubai", "End"};

    sort(cntry.begin() + 1, cntry.end() - 1); // Sorting - Starts from India, Ends at Dubai

    for (string i : cntry)
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    //Find, Upper Bound, Min, Max
    vector<int> nums1 = {3, 6, 9, 3, 7, 3, 9, 1};

    auto it = find(nums1.begin(), nums1.end(), 10); // finds the given value

    if (it != nums1.end()) // find() returns end iterator, when doesn't find the value
    {
        cout << *it;
    }
    else
    {
        cout << "Given element Not Found!";
    }

    cout << "\t";

    sort(nums1.begin(), nums1.end()); // upper_bound works only in sorted d.s.

    auto it1 = upper_bound(nums1.begin(), nums1.end(), 6); // finds the 1st value greater than given value

    if (it1 != nums1.end())
    {
        cout << *it1;
    }
    else
    {
        cout << "Greater element Not Found!";
    }

    cout << "\n\n";

    vector<double> deci = {2.42, 5.23, -34.34, -2.33, 4.23};

    auto it2 = min_element(deci.begin(), deci.end());

    cout << *it2 << "\t";

    auto it3 = max_element(deci.begin(), deci.end());

    cout << *it3 << endl;

    cout << endl;

    // Using Lambda Function
    vector<int> v = {5, 1, 8, 3, 9, 2};

	auto it = find_if(v.begin(), v.end(), [] (const int& a) { // to find first element that is divisible by 3
		return a % 3 == 0;
	});

    if (it != v.end()) cout << *it;
	else cout << "No such element";

    // Copylet
    vector<char> let = {'A', 'Y', 'U', 'S', 'H'};

    vector<int> copylet(5); // declare a vector of 5 elements

    copy(let.begin(), let.end(), copylet.begin()); // copy all elements of let and put in copylet

    for (char c : copylet)
    {
        cout << c << '\t';
    }

    cout << endl;

    //Fill
    vector<int> sev(7);

    fill(sev.begin(), sev.end(), 7); // fill the 7 in seven vector

    for (int i : sev)
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    return 0;
}