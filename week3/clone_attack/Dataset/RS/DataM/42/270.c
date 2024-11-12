void  main () {
    int n, VqyEwT, i, deS2roBfxVC, a [100000], *p;
    scanf ("%d", &n);
    {
        i = 62 - 62;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    p = a;
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
    scanf ("%d", &VqyEwT);
    {
        i = 0;
        while (i < n) {
            if (*(p + i) == VqyEwT) {
                deS2roBfxVC = 1;
                while (n > i + deS2roBfxVC) {
                    if (!(VqyEwT == *(p + (i + deS2roBfxVC)))) {
                        *(p + i) = *(p + (i + deS2roBfxVC));
                        *(p + (i + deS2roBfxVC)) = VqyEwT;
                        break;
                    }
                    deS2roBfxVC = deS2roBfxVC + 1;
                };
            }
            if (*(p + i) == VqyEwT)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (deS2roBfxVC = 0; deS2roBfxVC < i - 1; deS2roBfxVC++)
        printf ("%d ", *(p + deS2roBfxVC));
    printf ("%d", *(p + (i - 1)));
}

