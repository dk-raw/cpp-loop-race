#include <iostream>
#include <chrono>
#include <string>
#include "loop.h"
#include "average.h"
using namespace std;
using namespace chrono;

int main()
{
    deque<int> LOOP_TIMES = {};
    string AVERAGE_TIMES[2][1] = {};
    int i = 0;
    cout << endl
         << endl
         << "DO WHILE LOOP 1 MILLION TIMES" << endl;
    do
    {
        auto START = high_resolution_clock::now();
        LOOP::DO_LOOP_1MILL_TIMES();
        auto STOP = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(STOP - START);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;
    AVERAGE_TIMES[0][0] = "DO WHILE LOOP";
    AVERAGE_TIMES[0][1] = to_string(AVERAGE::CALCULATE(LOOP_TIMES));

    cout << endl
         << endl
         << "WHILE LOOP 1 MILLION TIMES" << endl;

    LOOP_TIMES.clear();
    i = 0;
    do
    {
        auto START = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto STOP = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(STOP - START);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;
    AVERAGE_TIMES[1][0] = "WHILE LOOP";
    AVERAGE_TIMES[1][1] = to_string(AVERAGE::CALCULATE(LOOP_TIMES));

    cout << endl
         << endl
         << "FOR LOOP 1 MILLION TIMES" << endl;

    LOOP_TIMES.clear();
    i = 0;
    do
    {
        auto START = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto STOP = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(STOP - START);
        LOOP_TIMES.push_front(duration.count());
        if (i == 9)
            cout << duration.count() << endl;
        else
            cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << "AVERAGE:" << AVERAGE::CALCULATE(LOOP_TIMES) << endl;
    AVERAGE_TIMES[2][0] = "FOR WHILE";
    AVERAGE_TIMES[2][1] = to_string(AVERAGE::CALCULATE(LOOP_TIMES));

    cout << endl
         << endl;
    //print the averages
}