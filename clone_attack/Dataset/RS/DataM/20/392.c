void  main () {
    int n = (700 - 700), i = (373 - 373), C5imFgnA, m, k;
    char b [1000] [(179 - 176)];
    char zK6jDteql [1000] [(265 - 248)];
    char a [1000] [13];
    {
        i = 820 - 820;
        while (1000 > i) {
            gets (zK6jDteql [i]);
            if (!('\0' != zK6jDteql[i][(507 - 507)])) {
                n = i;
                break;
            }
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
            {
                C5imFgnA = 0;
                while (17 > C5imFgnA) {
                    if (!(' ' != zK6jDteql[i][C5imFgnA])) {
                        {
                            k = 0;
                            while (C5imFgnA > k) {
                                a[i][k] = zK6jDteql[i][k];
                                k = k + 1;
                                a[i][C5imFgnA] = '\0';
                            };
                        }
                        {
                            k = 0;
                            while (k < 3) {
                                b[i][k] = zK6jDteql[i][k + C5imFgnA +1];
                                k++;
                            };
                        };
                    }
                    C5imFgnA = C5imFgnA +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            m = 0;
            {
                C5imFgnA = 0;
                while ((int) strlen (a[i]) > C5imFgnA) {
                    if (a[i][m] < a[i][C5imFgnA])
                        m = C5imFgnA;
                    C5imFgnA = C5imFgnA +1;
                };
            }
            {
                C5imFgnA = 726 - 717;
                while (C5imFgnA > m) {
                    a[i][C5imFgnA +3] = a[i][C5imFgnA];
                    C5imFgnA = C5imFgnA -1;
                };
            }
            {
                C5imFgnA = 0;
                while (C5imFgnA < 3) {
                    a[i][m + C5imFgnA +1] = b[i][C5imFgnA];
                    C5imFgnA++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", a[i]);
            i = i + 1;
        };
    };
}

