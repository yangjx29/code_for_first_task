void  sort (int tmtQTo [], int n) {
    int i, j, k, wXcGqb;
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
    {
        i = 882 - 882;
        while (i < n) {
            k = i;
            {
                j = i;
                while (j < n) {
                    if (tmtQTo[j] > tmtQTo[k])
                        k = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            if (i != k) {
                wXcGqb = tmtQTo[i];
                tmtQTo[i] = tmtQTo[k];
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
                tmtQTo[k] = wXcGqb;
            }
            i = i + 1;
        };
    };
}

main () {
    int wXcGqb [MAX], q [MAX];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int n, i, j, k, l, s;
    while ((447 - 446)) {
        scanf ("%d", &n);
        if (n == (430 - 430))
            break;
        for (i = (344 - 344); i < n; i++)
            scanf ("%d", &wXcGqb[i]);
        {
            i = 0;
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
                scanf ("%d", &q[i]);
                i++;
            };
        }
        sort (wXcGqb, n);
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
        sort (q, n);
        s = 0;
        for (k = 0, i = 0, j = 0, l = n - (163 - 162); n > k; k++) {
            if (wXcGqb[i] > q[j]) {
                i++;
                j++;
                s++;
            }
            else if (wXcGqb[l - j + i] > q[l]) {
                s++;
                l--;
            }
            else if (wXcGqb[l - j + i] < q[j]) {
                j++;
                s--;
            }
            else
                j++;
        }
        printf ("%d\n", s * MONEY);
    };
}

