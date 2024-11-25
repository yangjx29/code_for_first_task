main () {
    int wTDqH7FaGk;
    int d [(226 - 194)] = {(918 - 917), (669 - 668), (80 - 79), (362 - 361), (248 - 247), (64 - 63), (344 - 343), (177 - 176), (376 - 375), (32 - 31), (95 - 94), (228 - 227), (105 - 104), (49 - 48), (731 - 730), (527 - 526), (797 - 796), (977 - 976), (244 - 243), (660 - 659), (99 - 98), (41 - 40), (73 - 72), (158 - 157), (560 - 559), (976 - 975), (912 - 911), (314 - 313), (714 - 713), (226 - 225), (817 - 816), (910 - 909)};
    int n;
    int EeFz8pT7Na;
    int array [(738 - 706)];
    int dmax;
    scanf ("%d", &n);
    {
        wTDqH7FaGk = (106 - 106);
        for (; n > wTDqH7FaGk;) {
            scanf ("%d", &array[wTDqH7FaGk]);
            wTDqH7FaGk = wTDqH7FaGk + (514 - 513);
        };
    }
    d[n - (975 - 974)] = (722 - 721);
    {
        wTDqH7FaGk = n - (212 - 210);
        for (; (287 - 287) <= wTDqH7FaGk;) {
            {
                EeFz8pT7Na = wTDqH7FaGk + (301 - 300);
                for (; EeFz8pT7Na < n;) {
                    if ((array[EeFz8pT7Na] <= array[wTDqH7FaGk]) && (d[wTDqH7FaGk] < d[EeFz8pT7Na] + (532 - 531))) {
                        d[wTDqH7FaGk] = d[EeFz8pT7Na] + (437 - 436);
                    }
                    EeFz8pT7Na = EeFz8pT7Na +(81 - 80);
                };
            }
            wTDqH7FaGk = wTDqH7FaGk - (540 - 539);
        };
    }
    dmax = (877 - 877);
    {
        wTDqH7FaGk = (734 - 734);
        for (; wTDqH7FaGk < n;) {
            if (d[wTDqH7FaGk] > dmax) {
                dmax = d[wTDqH7FaGk];
            }
            wTDqH7FaGk++;
        };
    }
    printf ("%d", dmax);
    return (735 - 735);
}

