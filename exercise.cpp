#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int count, sum, min, max;
    count = sum = min = max = 0;
    float avg = 0;

    cout << "Enter a number count: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        int number = 0;

        cout << "Enter a random number (signed or unsigned): ";
        cin >> number;

        if (i == 0 || number < min) {
            min = number;
        }

        if (i == 0 || number > max) {
            max = number;
        }

        sum += number;
    }

    if (count > 0) {
        avg = float(sum) / count;
    }

    cout << "Min:" << min << endl;
    cout << "Max:" << max << endl;
    cout << "Sum:" << sum << endl;
    cout << "Avg:" << avg << endl;
    cout << "Count:" << count << endl;

    return 0;
}
