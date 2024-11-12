void  main () {
    int JENOeDGsjR [(87 - 61)] = {(781 - 781)};
    int n, tCJTKD4pUi, ylcjYA4, j, k, max;
    char io0Vfg [(735 - 709)], f, x;
    struct   book {
        int x79EjwdT;
        char cQ2JyW5Ld [(815 - 789)];
    };
    struct   book b [(1940 - 940)];
    scanf ("%d", &n);
    {
        ylcjYA4 = 389 - 389;
        for (; ylcjYA4 < n;) {
            scanf ("%d %s", &b[ylcjYA4].x79EjwdT, &b[ylcjYA4].cQ2JyW5Ld);
            ylcjYA4 = ylcjYA4 + 1;
        }
    }
    {
        ylcjYA4 = 729 - 729;
        for (; ylcjYA4 < n;) {
            strcpy (io0Vfg, b[ylcjYA4].cQ2JyW5Ld);
            ylcjYA4 = ylcjYA4 + 1;
            tCJTKD4pUi = strlen (io0Vfg);
            for (j = (431 - 431); tCJTKD4pUi > j; j = j + 1)
                if ('A' <= (x = io0Vfg[j]) && (x = io0Vfg[j]) <= 'Z')
                    JENOeDGsjR[x - 'A']++;
        }
    }
    max = JENOeDGsjR[(624 - 624)];
    k = (894 - 894);
    {
        ylcjYA4 = 756 - 756;
        for (; (252 - 226) > ylcjYA4;) {
            if (JENOeDGsjR[ylcjYA4] > max) {
                max = JENOeDGsjR[ylcjYA4];
                k = ylcjYA4;
            }
            ylcjYA4 = ylcjYA4 + 1;
        }
    }
    printf ("%c\n%d\n", k + 'A', max);
    {
        ylcjYA4 = 456 - 456;
        for (; ylcjYA4 < n;) {
            strcpy (io0Vfg, b[ylcjYA4].cQ2JyW5Ld);
            tCJTKD4pUi = strlen (io0Vfg);
            for (j = 0; j < tCJTKD4pUi; j = j + 1)
                if ((f = io0Vfg[j]) == k + 'A')
                    printf ("%d\n", b[ylcjYA4].x79EjwdT);
            ylcjYA4 = ylcjYA4 + 1;
        }
    }
}

