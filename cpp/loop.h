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
        int j = 0;
        while (j < 1000000)
        {
            j++;
        }
    }
    static void FOR_LOOP_1MILL_TIMES()
    {
        for (int k = 0; k < 1000000; k++)
        {
            ;
        }
    }
};