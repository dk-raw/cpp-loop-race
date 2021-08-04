#include <deque>
using namespace std;

class AVERAGE
{
public:
    static double CALCULATE(deque<int> nums)
    {
        double sum = 0;
        int j = 0;
        do
        {
            sum += nums[j];
            j++;
        } while (j < nums.size());
        return sum / nums.size();
    }
};