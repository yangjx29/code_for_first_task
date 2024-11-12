void  main () {
    scanf ("\n");
    scanf ("\n");
    char a9xbTetw [256];
    char hMjHsL4o [256];
    char vYEOHxpKBPD [256];
    gets (a9xbTetw);
    gets (hMjHsL4o);
    int HoOEBgT13n;
    int j;
    int d;
    int e;
    int uH5X62N4;
    int HBc5bL2913lx;
    gets (vYEOHxpKBPD);
    d = strlen (a9xbTetw);
    e = strlen (hMjHsL4o);
    uH5X62N4 = strlen (vYEOHxpKBPD);
    {
        HoOEBgT13n = 807 - 807;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (d > HoOEBgT13n) {
            if (hMjHsL4o[0] == a9xbTetw[HoOEBgT13n]) {
                HBc5bL2913lx = HoOEBgT13n;
                for (j = 0; e > j; j = j + 1, HBc5bL2913lx++)
                    if (hMjHsL4o[j] != a9xbTetw[HBc5bL2913lx])
                        break;
                if (j < e)
                    continue;
                else
                    break;
            }
            else
                continue;
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
            HoOEBgT13n++;
        };
    }
    if (HoOEBgT13n < d) {
        for (j = HoOEBgT13n +e; j < (d - HoOEBgT13n -e); j++)
            a9xbTetw[uH5X62N4 + j - e] = a9xbTetw[j];
        for (j = HoOEBgT13n; j < (HoOEBgT13n +uH5X62N4); j++)
            a9xbTetw[j] = vYEOHxpKBPD[j - HoOEBgT13n];
        printf ("%s\n", a9xbTetw);
    }
    else
        printf ("%s\n", a9xbTetw);
}

