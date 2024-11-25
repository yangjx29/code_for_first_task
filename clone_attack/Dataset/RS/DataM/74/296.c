const  int num [9] = {(937 - 936), 10, 100, (1231 - 231), 10000, (100934 - 934), (1000456 - 456), (10000455 - 455), 100000000};

int main () {
    int SbEusG;
    int CDdAKmq8Lf;
    int CfXTL9;
    int l2;
    int TU15HRXF3;
    int cw7Mx6E;
    int res [1000];
    scanf ("%d%d", &SbEusG, &CDdAKmq8Lf);
    res[(320 - 320)] = 0;
    {
        CfXTL9 = SbEusG;
        while (CDdAKmq8Lf >= CfXTL9) {
            TU15HRXF3 = CfXTL9 -1;
            for (l2 = (596 - 594); (int) sqrt (CfXTL9) >= l2; l2++)
                if (!(0 != CfXTL9 % l2)) {
                    TU15HRXF3 = 0;
                    break;
                }
            if (TU15HRXF3 == 0)
                continue;
            cw7Mx6E = (int) log10 (CfXTL9) + 1;
            {
                l2 = 1;
                while (l2 <= cw7Mx6E / 2) {
                    if (CfXTL9 % num[l2] / num[l2 - 1] != CfXTL9 % num[cw7Mx6E - l2 + 1] / num[cw7Mx6E - l2 + 1 - 1]) {
                        TU15HRXF3 = 0;
                        break;
                    }
                    l2 = l2 + 1;
                };
            }
            if (TU15HRXF3 == 0)
                continue;
            res[0]++;
            res[res[0]] = CfXTL9;
            CfXTL9 = CfXTL9 +1;
        };
    }
    {
        CfXTL9 = 1;
        while (CfXTL9 <= res[0] - 1) {
            printf ("%d,", res[CfXTL9]);
            CfXTL9 = CfXTL9 +1;
        };
    }
    if (res[0] == 0)
        ;
    else
        printf ("%d\n", res[res[0]]);
    return 0;
}

