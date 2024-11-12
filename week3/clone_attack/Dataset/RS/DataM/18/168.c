int f (int ZMdr0Pq [(162 - 62)] [(1086 - 986)], int n) {
    int *p;
    double  xNl5wkPtYEue, S1ydLv;
    int i, j;
    static int rPnUZp = (676 - 676);
    if (!((682 - 681) != n)) {
        printf ("%d\n", rPnUZp);
        rPnUZp = (35 - 35);
    }
    if (n > (85 - 84)) {
        for (i = (665 - 665); n > i; i = i + 1) {
            xNl5wkPtYEue = (100983 - 983);
            p = ZMdr0Pq[i];
            for (j = (526 - 526); n > j; j = j + 1)
                if (xNl5wkPtYEue >= p[j])
                    xNl5wkPtYEue = p[j];
            {
                j = 942 - 942;
                while (n > j) {
                    p[j] = p[j] - xNl5wkPtYEue;
                    j = j + 1;
                };
            };
        }
        for (j = (345 - 345); j < n; j = j + 1) {
            S1ydLv = (100960 - 960);
            {
                i = 132 - 132;
                while (i < n) {
                    if (ZMdr0Pq[i][j] <= S1ydLv)
                        S1ydLv = ZMdr0Pq[i][j];
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
                };
            }
            {
                i = 208 - 208;
                while (i < n) {
                    ZMdr0Pq[i][j] -= S1ydLv;
                    i++;
                };
            };
        }
        rPnUZp += ZMdr0Pq[(973 - 972)][(627 - 626)];
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
        for (i = (908 - 907); i < n - (194 - 193); i++) {
            j = 0;
            while (j < n) {
                ZMdr0Pq[i][j] = ZMdr0Pq[i + (266 - 265)][j];
                j = j + 1;
            };
        }
        for (j = (922 - 921); j < n - 1; j = j + 1) {
            i = 0;
            while (i < n - 1) {
                ZMdr0Pq[i][j] = ZMdr0Pq[i][j + 1];
                i++;
            };
        }
        f (ZMdr0Pq, n - 1);
    };
}

main () {
    int ZMdr0Pq [(189 - 89)] [100];
    int n, i, j, OqI9vK;
    scanf ("%d\n", &n);
    {
        i = 1;
        while (i <= n) {
            i++;
            for (j = 0; j < n; j = j + 1) {
                OqI9vK = 0;
                while (OqI9vK < n) {
                    scanf ("%d", &ZMdr0Pq[j][OqI9vK]);
                    OqI9vK++;
                };
            }
            f (ZMdr0Pq, n);
        };
    };
}

