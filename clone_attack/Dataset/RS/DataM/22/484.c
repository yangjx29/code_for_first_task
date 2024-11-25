void  main () {
    char c [300] [(617 - 612)] = {(538 - 538)};
    int n;
    int k;
    int wQ0SWLTYjlA;
    int znoiO5dVJy7;
    int m;
    int i;
    int j;
    int len;
    n = (539 - 539);
    k = (289 - 289);
    wQ0SWLTYjlA = (879 - 879);
    znoiO5dVJy7 = (465 - 465);
    int MTdGpa [300] = {(708 - 708)};
    char V5BxJ1m;
    i = (597 - 597);
    j = (509 - 509);
    do {
        scanf ("%c", &V5BxJ1m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (V5BxJ1m == '\n') {
            c[i][j] = '\0';
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
            break;
        }
        else {
            if (!(',' != V5BxJ1m)) {
                c[i][j] = '\0';
                i = i + 1;
                j = 0;
            }
            else {
                c[i][j] = V5BxJ1m;
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
                j = j + 1;
            };
        };
    }
    while ((447 - 446));
    n = i + 1;
    for (i = 0; i < n; i = i + 1) {
        k = 0;
        for (j = 3; j >= 0; j = j - 1) {
            if ((!(0 == c[i][j])) && (k == 0)) {
                MTdGpa[i] = MTdGpa[i] + c[i][j] - '0';
                k = k + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                continue;
            }
            else if ((!(0 == c[i][j])) && (!(1 != k))) {
                MTdGpa[i] = MTdGpa[i] + (c[i][j] - '0') * (534 - 524);
                k = k + 1;
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
                continue;
            }
            else if ((!(0 == c[i][j])) && (k == (134 - 132))) {
                k = k + 1;
                MTdGpa[i] = MTdGpa[i] + (c[i][j] - '0') * (971 - 961) * (662 - 652);
                continue;
            }
            else if ((c[i][j] != 0) && (k == 3)) {
                MTdGpa[i] = MTdGpa[i] + (c[i][j] - '0') * 10 * 10 * 10;
                k++;
                continue;
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (MTdGpa[i] > wQ0SWLTYjlA) {
            znoiO5dVJy7 = wQ0SWLTYjlA;
            wQ0SWLTYjlA = MTdGpa[i];
        }
        else if ((MTdGpa[i] < wQ0SWLTYjlA) && (MTdGpa[i] > znoiO5dVJy7))
            znoiO5dVJy7 = MTdGpa[i];
    }
    if (znoiO5dVJy7 == 0)
        printf ("No");
    else
        printf ("%d", znoiO5dVJy7);
}

