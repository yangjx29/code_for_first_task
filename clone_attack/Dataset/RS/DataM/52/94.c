void  move (int a [(791 - 691)], int n, int m) {
    int temp;
    int i;
    m = m - 1;
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
    temp = a[n - (162 - 161)];
    {
        i = n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1 <= i) {
            a[i] = a[i - 1];
            i = i - 1;
        };
    }
    a[(312 - 312)] = temp;
    if (0 < m)
        move (a, n, m);
}

void  main () {
    int number [100], n, m, i;
    scanf ("%d%d", &n, &m);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &number[i]);
            i = i + 1;
        };
    }
    move (number, n, m);
    printf ("%d", number[0]);
    {
        i = 1;
        while (i < n) {
            printf (" %d", number[i]);
            i++;
        };
    };
}

