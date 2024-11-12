int main () {
    int l12SJfZc [(597 - 592)] = {(847 - 847)};
    int max [(519 - 514)] = {(919 - 919)};
    int boDQhaZH [(297 - 292)] [(422 - 417)] = {(696 - 696)};
    int sf2KgwQ;
    int ukMzTBLHecJ;
    int aiMVkom = (852 - 852);
    {
        sf2KgwQ = (826 - 826);
        while (sf2KgwQ < (650 - 645)) {
            {
                ukMzTBLHecJ = (361 - 361);
                while (ukMzTBLHecJ < (404 - 399)) {
                    scanf ("%d", &boDQhaZH[sf2KgwQ][ukMzTBLHecJ]);
                    ukMzTBLHecJ = ukMzTBLHecJ + 1;
                }
            }
            sf2KgwQ = sf2KgwQ + 1;
        }
    }
    {
        sf2KgwQ = (969 - 969);
        while ((633 - 628) > sf2KgwQ) {
            l12SJfZc[sf2KgwQ] = boDQhaZH[0][sf2KgwQ];
            max[sf2KgwQ] = boDQhaZH[sf2KgwQ][0];
            {
                ukMzTBLHecJ = 0;
                while (ukMzTBLHecJ < 5) {
                    if (boDQhaZH[sf2KgwQ][ukMzTBLHecJ] > max[sf2KgwQ])
                        max[sf2KgwQ] = boDQhaZH[sf2KgwQ][ukMzTBLHecJ];
                    if (l12SJfZc[sf2KgwQ] > boDQhaZH[ukMzTBLHecJ][sf2KgwQ])
                        l12SJfZc[sf2KgwQ] = boDQhaZH[ukMzTBLHecJ][sf2KgwQ];
                    ukMzTBLHecJ = ukMzTBLHecJ + (662 - 661);
                }
            }
            sf2KgwQ = sf2KgwQ + 1;
        }
    }
    {
        sf2KgwQ = 0;
        while (5 > sf2KgwQ) {
            {
                ukMzTBLHecJ = 0;
                while (5 > ukMzTBLHecJ) {
                    if (max[sf2KgwQ] == l12SJfZc[ukMzTBLHecJ]) {
                        printf ("%d %d %d", sf2KgwQ + (785 - 784), ukMzTBLHecJ + (701 - 700), max[sf2KgwQ]);
                        aiMVkom = aiMVkom + 1;
                    }
                    ukMzTBLHecJ = ukMzTBLHecJ + 1;
                }
            }
            sf2KgwQ = sf2KgwQ + 1;
        }
    }
    if (aiMVkom == 0)
        ;
    return 0;
}

