#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> evenDistribution(float bags, float shirts)
{
    vector<int> distributedList(bags);
    if (bags > 0 && shirts > 0 && bags <= shirts)
    {
        float minClosestMultiple = (floor(shirts / bags)) * bags;

        float maxClosestMultiple = (ceil(shirts / bags)) * bags;
        if ((shirts - minClosestMultiple) <= (maxClosestMultiple - shirts))

        {
            int shirtsPerBag = minClosestMultiple / bags;
            int shirtsInLastBag = shirts - shirtsPerBag * (bags - 1);
            for (int i = 0; i < bags - 1; i++)
            {
                distributedList[i] = shirtsPerBag;
            }
            distributedList[bags - 1] = shirtsInLastBag;

            return distributedList;
        }
        else
        {
            int shirtsPerBag = maxClosestMultiple / bags;
            int shirtsInLastBag = shirts - shirtsPerBag * (bags - 1);
            for (int i = 0; i < bags - 1; i++)
            {
                distributedList[i] = shirtsPerBag;
            }
            distributedList[bags - 1] = shirtsInLastBag;

            return distributedList;
        }
    }
    else
    {
        cout << "Wrong Input" << endl;
        vector<int> nullVector(bags, 0);
        return nullVector;
    }
}

void print(vector<int> list, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
}

int main()
{

    // TEST CASE 01
    float bag1 = 10;
    float shirt1 = 100;
    cout << "Test Case 1 ---> "
         << "Bags: " << bag1 << " Shirts: " << shirt1 << endl;
    vector<int> result1 = evenDistribution(bag1, shirt1);
    cout << "Distribution: ";
    print(result1, bag1);
    cout << endl;
    cout << endl;

    // TEST CASE 02
    float bag2 = 10;
    float shirt2 = 9;
    cout << "Test Case 2 ---> "
         << "Bags: " << bag2 << " Shirts: " << shirt2 << endl;
    vector<int> result2 = evenDistribution(bag2, shirt2);
    cout << "Distribution: ";
    print(result2, bag2);
    cout << endl;
    cout << endl;

    // TEST CASE 03
    float bag3 = 10;
    float shirt3 = 95;
    cout << "Test Case 3 ---> "
         << "Bags: " << bag3 << " Shirts: " << shirt3 << endl;
    vector<int> result3 = evenDistribution(bag3, shirt3);
    print(result3, bag3);
    cout << endl;
    cout << endl;

    // TEST CASE 04
    float bag4 = 10;
    float shirt4 = 108;
    cout << "Test Case 4 ---> "
         << "Bags: " << bag4 << " Shirts: " << shirt4 << endl;
    vector<int> result4 = evenDistribution(bag4, shirt4);
    print(result4, bag4);
    cout << endl;
    cout << endl;

    // TEST CASE 05
    float bag5 = 10;
    float shirt5 = 92;
    cout << "Test Case 5 ---> "
         << "Bags: " << bag2 << " Shirts: " << shirt5 << endl;
    vector<int> result5 = evenDistribution(bag5, shirt5);

    print(result5, bag5);
    cout << endl;
    cout << endl;
}