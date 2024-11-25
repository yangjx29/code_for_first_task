void  main () {
    int t, *p, a [100], m, XasRipqthOn, i, j;
    scanf ("%d%d", &XasRipqthOn, &m);
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
    for (i = 0; XasRipqthOn > i; i++)
        scanf ("%d", &a[i]);
    for (j = 0; m > j; j++) {
        p = a;
        for (i = XasRipqthOn -1; 0 < i; i = i - 1)
            *(p + i) = *(p + i - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t = a[XasRipqthOn -1];
        a[0] = t;
    }
    {
        i = 0;
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
        while (XasRipqthOn > i) {
            printf ("%d", a[i]);
            if (i < XasRipqthOn -1)
                printf (" ");
            i++;
        };
    };
}

