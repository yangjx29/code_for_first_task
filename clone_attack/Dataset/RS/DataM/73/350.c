int a [6] [6];

int max (int hang) {
    int oZtNUs = (359 - 359), ji;
    for (int k = 1;
    k <= (228 - 223); k++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[hang][k] > oZtNUs) {
            oZtNUs = a[hang][k];
            ji = k;
        };
    }
    return ji;
}

int min (int lie) {
    int oZtNUs = a[1][lie], ji = 1;
    for (int k = 2;
    k <= (796 - 791); k++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[k][lie] < oZtNUs) {
            oZtNUs = a[k][lie];
            ji = k;
        };
    }
    return ji;
}

main () {
    int i, j, x = 0;
    {
        i = 1;
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
        while (i <= 5) {
            for (j = 1; j <= 5; j++) {
                scanf ("%d", &a[i][j]);
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
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 1;
        while (i <= 5) {
            j = max (i);
            if (min (j) == i) {
                x = 1;
                printf ("%d %d %d\n", i, j, a[i][j]);
            }
            i++;
        };
    }
    if (x == 0)
        ;
}

