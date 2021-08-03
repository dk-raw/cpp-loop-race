#include <iostream>
#include <deque>
#include <chrono>
using namespace std;
using namespace chrono;

int AVERAGE(deque<int> nums)
{
    int sum = 0;
    int j = 0;
    do
        sum += nums[j];
    while (j < nums.size());
    return sum / nums.size();
}

class LOOP
{
public:
    static void DO_LOOP_1MILL_TIMES()
    {
        int i = 0;
        do
        {
            i++;
        } while (i < 1000000);
    }
    static void WHILE_LOOP_1MILL_TIMES()
    {
        int i = 0;
        while (i < 1000000)
        {
            i++;
        }
    }
    static void FOR_LOOP_1MILL_TIMES()
    {
        for (int i = 0; i < 1000000; i++)
        {
            ;
        }
    }
};

int main()
{
    cout << endl << endl << "DO WHILE LOOP 1 MILLION TIMES" << endl;
    int i = 0;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::DO_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        switch (i)
        {
        case 10:
            cout << duration.count() << endl;
        }
        cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << endl << endl << "WHILE LOOP 1 MILLION TIMES" << endl;
    i = 0;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        switch (i)
        {
        case 10:
            cout << duration.count() << endl;
        }
        cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
    cout << endl << endl << "FOR LOOP 1 MILLION TIMES" << endl;
    i = 0;
    do
    {
        auto start = high_resolution_clock::now();
        LOOP::WHILE_LOOP_1MILL_TIMES();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        switch (i)
        {
        case 10:
            cout << duration.count() << endl;
        }
        cout << duration.count() << "," << endl;
        i++;
    } while (i < 10);
}