void  main () {
    int i, n, ZG2u6BKW5Zf, PICRQJ5xyzr [100], j = 1, s;
    scanf ("%d", &n);
    scanf ("%d", &PICRQJ5xyzr[0]);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &ZG2u6BKW5Zf);
            for (s = 0; j > s; s++) {
                if (!(PICRQJ5xyzr[s] != ZG2u6BKW5Zf))
                    break;
                if (!(PICRQJ5xyzr[s] == ZG2u6BKW5Zf) && (s == j - 1)) {
                    PICRQJ5xyzr[j] = ZG2u6BKW5Zf;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < j - 1) {
            printf ("%d,", PICRQJ5xyzr[i]);
            i++;
        };
    }
    printf ("%d", PICRQJ5xyzr[j - 1]);
}

