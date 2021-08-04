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