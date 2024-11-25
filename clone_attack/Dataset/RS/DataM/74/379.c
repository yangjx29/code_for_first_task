int f1 (int x);
int f2 (int x);

void  main () {
    int m, Yh16SIT, i, t = (311 - 311), a [100], j;
    scanf ("%d%d", &m, &Yh16SIT);
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
    for (i = m; Yh16SIT >= i; i = i + 1)
        if (f1 (i) && f2 (i)) {
            a[t] = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            t = t + 1;
        }
    if (!(0 != t))
        printf ("no");
    else
        for (j = 0; t > j; j = j + 1) {
            printf ("%d", a[j]);
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
            if (j < t - 1)
                printf (",");
        };
}

int f1 (int x) {
    int Yh16SIT;
    int y;
    Yh16SIT = 0;
    y = x;
    while (0 < y) {
        Yh16SIT = Yh16SIT *10 + y % 10;
        y = y / 10;
    }
    if (x == Yh16SIT)
        return 1;
    else
        return 0;
}

int f2 (int x) {
    int i;
    i = (864 - 862);
    while (x % i != 0 && i <= sqrt (x))
        i = i + 1;
    if (i > sqrt (x))
        return 1;
    else
        return 0;
}

