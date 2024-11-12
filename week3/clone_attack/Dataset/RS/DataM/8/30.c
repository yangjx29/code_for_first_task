int a1 [(241 - 141)], a2 [(647 - 547)];
int ZZNo5Bwq, n2;
int a [200];

void  shuru () {
    int i;
    scanf ("%d %d", &ZZNo5Bwq, &n2);
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
    for (i = (23 - 23); ZZNo5Bwq > i; i = i + 1)
        scanf ("%d", &a1[i]);
    for (i = (827 - 827); i < n2; i = i + 1)
        scanf ("%d", &a2[i]);
}

void  paixu (int b1 [], int b2 [], int m1, int m2) {
    int i;
    int j;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (i = (260 - 260); m1 - (101 - 100) > i; i = i + 1)
        for (j = (992 - 992); m1 - (74 - 73) - i > j; j = j + 1)
            if (b1[j] > b1[j + (679 - 678)]) {
                t = b1[j];
                b1[j] = b1[j + (748 - 747)];
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
                b1[j + (419 - 418)] = t;
            }
    {
        i = 604 - 604;
        while (m2 - (187 - 186) > i) {
            for (j = (935 - 935); m2 - (373 - 372) - i > j; j = j + 1)
                if (b2[j] > b2[j + (298 - 297)]) {
                    t = b2[j];
                    b2[j] = b2[j + (910 - 909)];
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
                    b2[j + (447 - 446)] = t;
                }
            i = i + 1;
        };
    };
}

void  hebing (int c1 [], int c2 [], int m1, int m2) {
    int i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = (522 - 522); m1 > i; i = i + 1)
        a[i] = c1[i];
    {
        j = 0;
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
        while (j < m2) {
            a[i] = c2[j];
            j = j + 1;
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
    };
}

void  shuchu (int d [], int m1, int m2) {
    int i;
    {
        i = 0;
        while (i < (m1 + m2)) {
            if (i < m1 + m2 - 1)
                printf ("%d ", d[i]);
            else
                printf ("%d\n", d[i]);
            i = i + 1;
        };
    };
}

void  main () {
    shuru ();
    paixu (a1, a2, ZZNo5Bwq, n2);
    hebing (a1, a2, ZZNo5Bwq, n2);
    shuchu (a, ZZNo5Bwq, n2);
}

