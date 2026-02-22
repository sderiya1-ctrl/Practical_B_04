#include <iostream>
using namespace std;

int main() {

    int min = 100, max = 0, sum = 0, count = 0;

    cout << "Even numbers between 1 and 50:\n";

    for(int i = 1; i <= 50; i++) {

        if(i % 2 == 0) {

            cout << i << " ";
            sum += i;
            count++;

            if(i < min) min = i;
            if(i > max) max = i;
        }
    }

    float average = (float)sum / count;

    cout << "\n\nMinimum even number: " << min;
    cout << "\nMaximum even number: " << max;
    cout << "\nAverage of even numbers: " << average;

    return 0;
}