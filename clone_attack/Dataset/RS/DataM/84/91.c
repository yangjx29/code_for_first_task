void  main () {
    int a [100];
    int n;
    int tOGiD74y;
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
    scanf ("%d", &n);
    if (1 < n && n < 100) {
        for (i = 0; i <= n - 1; i = i + 1)
            scanf ("%d", &a[i]);
        for (j = 0; j < n - 1; j = j + 1) {
            for (i = 0; i < n - 1 - j; i = i + 1)
                if ((abs (a[i])) > (abs (a[i + 1]))) {
                    tOGiD74y = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = tOGiD74y;
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
        printf ("%d\n%d\n", a[n - 1], a[n - 2]);
        printf ("\n");
    };
}

