#include <iostream>
using namespace std;

int main()
{
    const int size = 5;      // ← add 'const'
    int steps[size];

    cout << "Enter the step counts : " << endl;
    // Taking input
    for (int index = 0; index < size; index++)
    {
        cin >> steps[index];
    }

    // Printing the array
    cout << "Steps: ";
    for (int index = 0; index < size; index++)
    {
        cout << steps[index] << " ";
    }
    cout << endl;

    // Calculating the total
    int total = 0;
    for (int index = 0; index < size; index++)
    {
        total += steps[index];
    }

    cout << "Total: " << total << endl;

    return 0;
}