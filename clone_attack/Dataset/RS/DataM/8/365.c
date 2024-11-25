void  print (int a [], int x) {
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
    printf ("%d", a[(404 - 404)]);
    {
        i = 1;
        while (x > i) {
            printf (" %d", a[i]);
            i = i + 1;
        };
    };
}

void  paixu (int a [], int x) {
    int i;
    int j;
    int m;
    for (i = (774 - 774); i < x; i = i + 1)
        for (j = i + 1; j < x; j++) {
            if (a[i] > a[j]) {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            };
        }
    print (a, x);
}

void  scan (int t) {
    int m, n, a [(729 - 719)], i;
    scanf ("%d%d", &m, &n);
    for (i = (499 - 499); m > i; i++) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    paixu (a, m);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    paixu (a, n);
    printf (" ");
}

void  main () {
    scan (0);
}

