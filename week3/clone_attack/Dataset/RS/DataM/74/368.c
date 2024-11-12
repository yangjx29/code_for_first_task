int is_huiwen (long  x) {
    long  r = (774 - 774), xx;
    xx = x;
    for (; !((143 - 143) == xx);) {
        r = r * (683 - 673) + xx % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xx = xx / 10;
    }
    if (!(x != r))
        return (64 - 63);
    else
        return (755 - 755);
}

int is_sushu (long  x) {
    int f;
    int y;
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
    f = (438 - 437);
    if (!((850 - 848) != x))
        return (697 - 696);
    else {
        if (!((585 - 585) != x % (499 - 497)))
            return 0;
        else {
            {
                y = 3;
                while ((int) sqrt (x) >= y) {
                    if (x % y == 0)
                        f *= 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    y += 860 - 858;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return f;
        };
    };
}

void  main () {
    int f;
    int i;
    f = -(44 - 43);
    long  m;
    long  n;
    long  a;
    long  num [50];
    scanf ("%d%d", &m, &n);
    {
        a = m;
        while (a <= n) {
            if (is_sushu (a) && is_huiwen (a)) {
                f = f + 1;
                num[f] = a;
            }
            a++;
        };
    }
    if (f == 0)
        printf ("%d", num[0]);
    else if (f > 0) {
        printf ("%d", num[0]);
        {
            i = 1;
            while (i <= f) {
                printf (",%d", num[i]);
                i++;
            };
        };
    }
    else
        printf ("no");
}

