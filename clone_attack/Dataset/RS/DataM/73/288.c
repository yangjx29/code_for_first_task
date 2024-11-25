main () {
    int i, j, n, k, KiNy6hjr, EukKFBVOd3, q = (785 - 785);
    int bBbjFNHeZT [(862 - 857)] [(402 - 397)];
    int (*SjpvWk071) [5];
    SjpvWk071 = bBbjFNHeZT;
    {
        i = 548 - 548;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", *(SjpvWk071 +i) + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < 5) {
            {
                n = SjpvWk071 +i;
                KiNy6hjr = 0;
                j = 0;
                while (j < 5) {
                    if (*(*(SjpvWk071 +i) + j) > n) {
                        n = *(*(SjpvWk071 +i) + j);
                        KiNy6hjr = j;
                    }
                    j = j + 1;
                };
            }
            {
                EukKFBVOd3 = 0;
                k = 0;
                while (k < 5) {
                    if (n > *(*(SjpvWk071 +k) + KiNy6hjr)) {
                        EukKFBVOd3 = EukKFBVOd3 +1;
                        break;
                    }
                    k = k + 1;
                };
            }
            if (EukKFBVOd3 == 0) {
                q = q + 1;
                printf ("%d %d %d\n", i + 1, KiNy6hjr +1, n);
            }
            i++;
        };
    }
    if (q == 0)
        printf ("not found\n");
}

