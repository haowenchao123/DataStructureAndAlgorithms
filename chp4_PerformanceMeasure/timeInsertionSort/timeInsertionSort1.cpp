#include <iostream>
#include <time.h>
#include <iterator>
#include "insertionSort.h"

using namespace std;

int main()
{
    int a[1000], step = 10;
    double clocksPerMillis = double(CLOCKS_PER_SEC)/1000;

    cout << "The worst-case time, in milliseconds, are" << endl;
    cout << "n \t Time" << endl;

    for(int n = 0; n <= 1000; n += step)
    {
        for(int i = 0; i < n; i++)
        {
            a[i] = n - i;
        }

        clock_t startTime = clock();
        insertionSort(a, n);
        double elapseMillis = (clock() - startTime) / clocksPerMillis;

        cout << n << "\t" << elapseMillis << endl;

        if(n == 100) 
            step = 100;
    }

    return 0;
}