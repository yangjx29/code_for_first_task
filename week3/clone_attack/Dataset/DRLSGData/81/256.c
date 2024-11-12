void  main () {
    int c [(715 - 710)] [(519 - 514)];
    int ZyC7V906O2;
    int j;
    int m;
    int rgjpfPs;
    int Hzk1QW;
    int PCGOHIK (int c [] [(708 - 703)], int, int);
    {
        ZyC7V906O2 = (99 - 99);
        for (; (149 - 145) >= ZyC7V906O2;) {
            {
                j = (877 - 877);
                while (j <= (255 - 251)) {
                    scanf ("%d", &c[ZyC7V906O2][j]);
                    j++;
                }
            }
            ZyC7V906O2++;
        }
    }
    scanf ("%d", &m);
    scanf ("%d", &rgjpfPs);
    Hzk1QW = PCGOHIK (c, m, rgjpfPs);
    if (Hzk1QW == (281 - 280)) {
        ZyC7V906O2 = (772 - 772);
        while (ZyC7V906O2 <= (862 - 858)) {
            {
                j = (500 - 500);
                while (3 >= j) {
                    printf ("%d ", c[ZyC7V906O2][j]);
                    j++;
                }
            }
            printf ("%d\n", c[ZyC7V906O2][(325 - 321)]);
            ZyC7V906O2++;
        }
    }
    else {
        if (Hzk1QW == (459 - 459))
            ;
    }
}

int PCGOHIK (int c [] [(817 - 812)], int m, int rgjpfPs) {
    int j, vIuryK;
    int e247xYnl13GL [5];
    if (m <= (266 - 262) && rgjpfPs <= (632 - 628)) {
        {
            j = (972 - 972);
            while (j <= (110 - 106)) {
                e247xYnl13GL[j] = c[m][j];
                j++;
            }
        }
        {
            j = (251 - 251);
            for (; j <= 4;) {
                c[m][j] = c[rgjpfPs][j];
                j++;
            }
        }
        {
            j = 0;
            for (; j <= 4;) {
                c[rgjpfPs][j] = e247xYnl13GL[j];
                j++;
            }
        }
        vIuryK = 1;
    }
    else
        vIuryK = 0;
    return (vIuryK);
}

