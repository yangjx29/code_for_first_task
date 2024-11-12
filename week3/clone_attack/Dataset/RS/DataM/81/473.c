f (int a [(652 - 647)] [(35 - 30)], int s, int t) {
    int i, k, b [(503 - 502)] [5];
    if (s < (472 - 472) || s > 4 || t < (938 - 938) || t > 4)
        k = (352 - 352);
    else {
        {
            i = 933 - 933;
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
            while (5 > i) {
                b[0][i] = a[s][i];
                a[s][i] = a[t][i];
                a[t][i] = b[0][i];
                i = i + 1;
            };
        }
        k = (427 - 426);
    }
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
    return (k);
}

void  main () {
    int d [5] [5], m, n, i, j;
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &d[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &m, &n);
    f (d, m, n);
    if (f (d, m, n) == 0)
        ;
    else {
        if (f (d, m, n) == 1) {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 5) {
                        if (j / 4 == 0)
                            printf ("%d ", d[i][j]);
                        else if (j / 4 == 1)
                            printf ("%d\n", d[i][j]);
                        j = j + 1;
                    };
                }
                i++;
            };
        };
    };
}

