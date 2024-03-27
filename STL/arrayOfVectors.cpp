#include <bits/stdc++.h>
using namespace std;

void printArrayOfVec(vector<int> v[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Vector: " << i << endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Enter size of array:" << endl;
    cin >> N;
    vector<int> arrvec[N];
    for (int i = 0; i < N; i++)
    {
        int vecSize;
        cout << "Enter size of vector" << endl;
        cin >> vecSize;

        for (int j = 0; j < vecSize; j++)
        {
            int x;
            cout << "Enter element to be stored" << endl;
            cin >> x;
            arrvec[i].push_back(x);
        }
    }

    printArrayOfVec(arrvec, N);
}