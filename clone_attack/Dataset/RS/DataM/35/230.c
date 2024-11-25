void  main () {
    int a [8] [8], h, l, OxjwlRc;
    int i, uz8OJc1DTGwB, GzZUYJABcb7T;
    int max;
    scanf ("%d,%d", &h, &l);
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
    getchar ();
    {
        i = 652 - 652;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < h) {
            for (uz8OJc1DTGwB = 0; uz8OJc1DTGwB < l; uz8OJc1DTGwB++) {
                scanf ("%d", &a[i][uz8OJc1DTGwB]);
                getchar ();
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
    for (i = 0; i < h; i++) {
        max = 0;
        for (uz8OJc1DTGwB = 0; uz8OJc1DTGwB < l; uz8OJc1DTGwB++) {
            if (a[i][uz8OJc1DTGwB] > max)
                max = a[i][uz8OJc1DTGwB];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            uz8OJc1DTGwB = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (uz8OJc1DTGwB < l) {
                if (max == a[i][uz8OJc1DTGwB])
                    break;
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
                uz8OJc1DTGwB++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        OxjwlRc = 1;
        for (GzZUYJABcb7T = 0; GzZUYJABcb7T < h; GzZUYJABcb7T++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (max > a[GzZUYJABcb7T][uz8OJc1DTGwB]) {
                OxjwlRc = 0;
                break;
            };
        }
        if (OxjwlRc == 0)
            continue;
        else {
            printf ("%d+%d", i, uz8OJc1DTGwB);
            break;
        };
    }
    if (OxjwlRc == 0)
        printf ("No");
}

