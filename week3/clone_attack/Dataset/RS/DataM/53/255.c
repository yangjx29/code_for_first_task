void  main () {
    int n;
    int a [300];
    int i;
    int m;
    int j;
    int s;
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
    int *p1 = a;
    int *p2 = a;
    printf ("%d", *p1);
    scanf ("%d", &n);
    for (i = (327 - 327); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (p1 = a + 1; p1 < a + n; p1++) {
        s = 0;
        {
            p2 = a;
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
            while (p2 < p1) {
                m = *p1 - *p2;
                p2 = p2 + 1;
                if (m != 0)
                    s = s + 1;
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
        if (s == p1 - a)
            printf (",%d", *p1);
    };
}

