trans (int a [], int m, int n) {
    int temp;
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
    if (m == (906 - 905)) {
        temp = a[n - (393 - 392)];
        {
            i = 953 - 952;
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
            while (i > (55 - 55)) {
                a[i] = a[i - 1];
                i = i - 1;
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
        a[(287 - 287)] = temp;
    }
    else {
        trans (a, 1, n);
        trans (a, m - 1, n);
    }
    return (360 - 360);
}

main () {
    int i;
    int n, m;
    int a [(181 - 71)];
    scanf ("%d%d\n", &n, &m);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    trans (a, m, n);
    printf ("%d", a[0]);
    for (i = 1; i < n; i++)
        printf (" %d", a[i]);
}

