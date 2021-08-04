#include <iostream>
#include <chrono>
#include "loop.h"
#include "average.h"
using namespace std;
using namespace chrono;

int main()
{
    deque<int> LOOP_TIMES = {};
    int i = 0;
    cout << endl
         << endl
         << "DO WHILE LOOP 1 MILLION TIMES" << endl;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::DO_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;

    cout << endl
         << endl
         << "WHILE LOOP 1 MILLION TIMES" << endl;

    LOOP_TIMES.clear();
    i = 0;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;

    cout << endl
         << endl
         << "FOR LOOP 1 MILLION TIMES" << endl;

    LOOP_TIMES.clear();
    i = 0;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;
}