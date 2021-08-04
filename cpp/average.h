#include <deque>
using namespace std;

class AVERAGE
{
public:
    static double CALCULATE(deque<int> nums)
    {
        double sum = 0;
        int c = 0;
        do
        {
            sum += nums[c];
            c++;
        } while (c < nums.size());
        return sum / nums.size();
    }
};