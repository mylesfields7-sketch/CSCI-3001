#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int cost[size];

    // Taking input into the array
    for (int index = 0; index < size; index++)
    {
        cin >> cost[index];
    }

    // Printing the array elements
    cout << "Costs: ";
    for (int index = 0; index < size; index++)
    {
        cout << cost[index] << " ";
    }
    cout << endl;

    // Finding the maximum value
    int max_cost = cost[0];
    for (int index = 1; index < size; index++)
    {
        if (cost[index] > max_cost)
            max_cost = cost[index];
    }

    cout << "Highest cost: " << max_cost << endl;

    return 0;
}
