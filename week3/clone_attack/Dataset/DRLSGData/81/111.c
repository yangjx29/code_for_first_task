int nyZfxp63TQ (int *YCjUcY [(40 - 35)] [(489 - 484)], int t980PsvQuK, int hGKwBLEp) {
    if ((580 - 580) <= t980PsvQuK && t980PsvQuK <= (417 - 413) && (397 - 397) <= hGKwBLEp && hGKwBLEp <= (415 - 411)) {
        int afzsH15Q [(926 - 921)];
        int j;
        {
            j = (741 - 499) - (890 - 648);
            for (; (847 - 843) >= j;) {
                afzsH15Q[j] = *YCjUcY[t980PsvQuK][j];
                *YCjUcY[t980PsvQuK][j] = *YCjUcY[hGKwBLEp][j];
                *YCjUcY[hGKwBLEp][j] = afzsH15Q[j];
                j++;
            }
        }
        return (999 - 998);
    }
    else
        return (356 - 356);
}

void  main () {
    int YeLRFOc1 [(525 - 520)] [(916 - 911)], *YCjUcY [(976 - 971)] [(901 - 896)];
    int VN8uKVf;
    int rfF0DtH;
    {
        VN8uKVf = (1089 - 887) - (863 - 661);
        for (; VN8uKVf <= (830 - 826);) {
            {
                rfF0DtH = (590 - 112) - (776 - 298);
                for (; rfF0DtH <= (194 - 190);) {
                    scanf ("%d", &YeLRFOc1[VN8uKVf][rfF0DtH]);
                    YCjUcY[VN8uKVf][rfF0DtH] = &YeLRFOc1[VN8uKVf][rfF0DtH];
                    rfF0DtH++;
                }
            }
            VN8uKVf++;
        }
    }
    int t980PsvQuK;
    int hGKwBLEp;
    int re;
    scanf ("%d %d", &t980PsvQuK, &hGKwBLEp);
    re = nyZfxp63TQ (YCjUcY, t980PsvQuK, hGKwBLEp);
    if (re == (873 - 873))
        ;
    else {
        VN8uKVf = (1621 - 871) - (1106 - 356);
        for (; VN8uKVf <= (456 - 452);) {
            {
                rfF0DtH = (597 - 494) - (535 - 432);
                for (; rfF0DtH <= (308 - 305);) {
                    printf ("%d ", *YCjUcY[VN8uKVf][rfF0DtH]);
                    rfF0DtH++;
                }
            }
            printf ("%d\n", *YCjUcY[VN8uKVf][rfF0DtH]);
            VN8uKVf++;
        }
    }
}

