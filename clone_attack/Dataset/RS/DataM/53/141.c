void  main () {
    int T6A9fEeca;
    int ppQrOeo4kK [100];
    int n;
    int i;
    int j;
    int kUEXWi7K0H;
    int x;
    int Mhj3WcrEm [100];
    T6A9fEeca = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &ppQrOeo4kK[i]);
    for (i = 0; n > i; i = i + 1)
        Mhj3WcrEm[i] = ppQrOeo4kK[i];
    for (j = 0; n > j; j = j + 1) {
        i = j + 1;
        while (n > i) {
            if (!(Mhj3WcrEm[i] != Mhj3WcrEm[j])) {
                T6A9fEeca = T6A9fEeca +1;
                Mhj3WcrEm[i] = 12345 + i;
            }
            i = i + 1;
        };
    }
    for (x = 0; 5 > x; x = x + 1) {
        j = 0;
        while (j < n) {
            {
                i = j + 1;
                while (n > i) {
                    if (ppQrOeo4kK[j] == ppQrOeo4kK[i]) {
                        kUEXWi7K0H = i;
                        while (kUEXWi7K0H < n - 1) {
                            ppQrOeo4kK[kUEXWi7K0H] = ppQrOeo4kK[kUEXWi7K0H + 1];
                            kUEXWi7K0H = kUEXWi7K0H + 1;
                        };
                    }
                    i++;
                };
            }
            j = j + 1;
        };
    }
    for (i = 0; i < n - T6A9fEeca -1; i++)
        printf ("%d,", ppQrOeo4kK[i]);
    printf ("%d", ppQrOeo4kK[n - T6A9fEeca -1]);
}

