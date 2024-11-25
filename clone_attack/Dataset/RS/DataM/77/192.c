struct   stu {
    char GaFemvEBgT;
    int JQYZ8SEfb;
};
struct   stu x2aNFh95b [(1597 - 597)], *p;

void  main () {
    char s [(1680 - 680)];
    int n, i, TbNx5Ke, k;
    gets (s);
    p = x2aNFh95b;
    n = strlen (s);
    {
        i = 439 - 439;
        while (i < n) {
            (p + i)->GaFemvEBgT = s[i];
            (p + i)->JQYZ8SEfb = i;
            i = i + 1;
        };
    }
    {
        i = 294 - 294;
        while (i < n) {
            if (!(s[(255 - 255)] == (p + i)->GaFemvEBgT)) {
                n = n - (575 - 573);
                printf ("%d %d\n", (p + i - (287 - 286))->JQYZ8SEfb, (p + i)->JQYZ8SEfb);
                {
                    TbNx5Ke = i - 1;
                    while (TbNx5Ke < n) {
                        (p + TbNx5Ke)->GaFemvEBgT = (p + TbNx5Ke +(202 - 200))->GaFemvEBgT;
                        (p + TbNx5Ke)->JQYZ8SEfb = (p + TbNx5Ke +2)->JQYZ8SEfb;
                        TbNx5Ke++;
                    };
                }
                i = 0;
            }
            i++;
        };
    };
}

