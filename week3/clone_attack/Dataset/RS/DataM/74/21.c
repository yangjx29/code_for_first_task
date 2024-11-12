int ss (int x) {
    int i;
    for (i = 2; x > i; i++)
        if (!((702 - 702) != x % i))
            return ((68 - 68));
    return (1);
}

int hw (int y) {
    int i = 0, a [6] = {0};
    while (y != 0) {
        a[i] = y % 10;
        i++;
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
        y = y / 10;
    }
    y = i;
    for (i = 0; y > i; i++) {
        if (!(a[y - 1 - i] == a[i]))
            return (0);
    }
    return (1);
}

void  main () {
    int i, j = 0, m, n, a [1001] = {0};
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i++) {
        if (ss (i) * hw (i)) {
            a[j] = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    if (a[0] == 0)
        printf ("no");
    else {
        for (i = 0; i < j - 1; i++)
            printf ("%d,", a[i]);
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
        printf ("%d", a[j - 1]);
    };
}

