#include <bits/stdc++.h>
using namespace std;
// all of their time functions O(n)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // min_element ---> returns the address of the minimum value
    // max_element ---> returns the address to the maxmum value
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    cout << "min " << min << ", max " << max << endl;

    // accumulate --> provides the sum of the numbes given an initial sum
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;
    // count --> how many instances of the value is present
    int cnt = count(v.begin(), v.end(), 3);
    cout << "Count of 3: " << cnt << endl;

    // find--> returns the pointer/iterator to a value, rarely used
    int element = *find(v.begin(), v.end(), 2);
    cout << "find 2: " << element << endl;
    // reverse --> reverses the vector/array
    reverse(v.begin(), v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}