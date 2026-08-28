#include <iostream>
using namespace std;

int main()
{
    const int size = 5;      // ← add 'const'
    int battery[size];

    // Taking input
    for (int index = 0; index < size; index++)
    {
        cin >> battery[index];
    }

    // Printing battery levels
    cout << "Battery: ";
    for (int index = 0; index < size; index++)
    {
        cout << battery[index] << " ";
    }
    cout << endl;

    // Counting low battery readings
    int low_count = 0;
    for (int index = 0; index < size; index++)
    {
        if (battery[index] < 20)
            low_count++;
    }

    cout << "Low readings (<20%): " << low_count << endl;

    return 0;
}