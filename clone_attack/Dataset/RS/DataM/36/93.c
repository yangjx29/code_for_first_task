void  main () {
    char a [1000];
    char V7q3NtnD5Xx [1000];
    char c [1000] = {0};
    char d [1000] = {0};
    int m;
    int n;
    int i;
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
    int j;
    int t;
    scanf ("%s %s", a, V7q3NtnD5Xx);
    m = strlen (a);
    n = strlen (V7q3NtnD5Xx);
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
        while (i <= m - 1) {
            for (j = i; j <= m - 1; j = j + 1)
                if (a[i] > a[j]) {
                    t = a[j];
                    a[j] = a[i];
                    a[i] = t;
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
    for (i = 0; i <= n - 1; i = i + 1)
        for (j = i; j <= n - 1; j++)
            if (V7q3NtnD5Xx[j] < V7q3NtnD5Xx[i]) {
                t = V7q3NtnD5Xx[j];
                V7q3NtnD5Xx[j] = V7q3NtnD5Xx[i];
                V7q3NtnD5Xx[i] = t;
            }
    if (m != n)
        ;
    else {
        {
            t = 0;
            i = 0;
            while (i <= m - 1) {
                if (a[i] != V7q3NtnD5Xx[i])
                    t = t + 1;
                i++;
            };
        }
        if (t == 0)
            ;
        else
            printf ("NO");
    };
}

