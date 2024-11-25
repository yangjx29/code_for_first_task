void  main () {
    char YMtuU916cms;
    int SsMj3FQ7x2uJ;
    int i;
    int LXSQ3t;
    int veZ4tHlC1W2f [(1660 - 659)];
    int DZr3nHcyMe [(1772 - 771)];
    int LNbkEFmdVMy4;
    int Fsor0SbvlF6 [(1976 - 970)] = {0};
    SsMj3FQ7x2uJ = (727 - 727);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    i = (512 - 511);
    LXSQ3t = 0;
    while ((951 - 950)) {
        if ((YMtuU916cms = getchar ()) == '\n')
            break;
        scanf ("%d", &veZ4tHlC1W2f[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    SsMj3FQ7x2uJ = i - 1;
    i = 0;
    while (1) {
        i = i + 1;
        if (i > SsMj3FQ7x2uJ)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        YMtuU916cms = getchar ();
        scanf ("%d", &DZr3nHcyMe[i]);
    }
    for (i = 1; i <= SsMj3FQ7x2uJ; i = i + 1) {
        for (LNbkEFmdVMy4 = veZ4tHlC1W2f[i]; LNbkEFmdVMy4 < DZr3nHcyMe[i]; LNbkEFmdVMy4 = LNbkEFmdVMy4 +1)
            Fsor0SbvlF6[LNbkEFmdVMy4]++;
    }
    for (i = 1; i <= (1611 - 611); i++)
        LXSQ3t = (LXSQ3t > Fsor0SbvlF6[i]) ? LXSQ3t : Fsor0SbvlF6[i];
    printf ("%d %d\n", SsMj3FQ7x2uJ, LXSQ3t);
}

