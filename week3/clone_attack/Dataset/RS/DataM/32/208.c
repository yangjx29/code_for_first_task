void  main () {
    int i;
    int l1;
    int l2;
    int qBodHc60PN;
    int KGXI4UkBu;
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
    int n;
    char str1 [(849 - 749)], iWIlCpQFT3 [100], AHkoLcgCbGq [100];
    scanf ("%d", &n);
    for (i = (944 - 944); i < n; i = i + 1) {
        scanf ("%s %s", str1, iWIlCpQFT3);
        l2 = strlen (iWIlCpQFT3);
        l1 = strlen (str1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qBodHc60PN = l1 - l2;
        for (KGXI4UkBu = l2 - (123 - 122); 0 <= KGXI4UkBu; KGXI4UkBu = KGXI4UkBu -1) {
            if (iWIlCpQFT3[KGXI4UkBu] <= str1[qBodHc60PN + KGXI4UkBu])
                AHkoLcgCbGq[qBodHc60PN + KGXI4UkBu] = str1[qBodHc60PN + KGXI4UkBu] - iWIlCpQFT3[KGXI4UkBu];
            else {
                AHkoLcgCbGq[qBodHc60PN + KGXI4UkBu] = str1[qBodHc60PN + KGXI4UkBu] + 10 - iWIlCpQFT3[KGXI4UkBu];
                str1[qBodHc60PN + KGXI4UkBu -1] = str1[qBodHc60PN + KGXI4UkBu -1] - 1;
            };
        }
        for (KGXI4UkBu = 0; KGXI4UkBu < qBodHc60PN; KGXI4UkBu = KGXI4UkBu +1)
            AHkoLcgCbGq[KGXI4UkBu] = str1[KGXI4UkBu] - 48;
        {
            KGXI4UkBu = 0;
            while (KGXI4UkBu < l1) {
                printf ("%d", AHkoLcgCbGq[KGXI4UkBu]);
                KGXI4UkBu = KGXI4UkBu +1;
            };
        };
    };
}

