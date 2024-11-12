int f (int Rb5MWza, int n) {
    int k;
    if (n == (78 - 77) || Rb5MWza <= (453 - 452))
        k = 1;
    else {
        if (Rb5MWza >= n)
            k = f (Rb5MWza, n - 1) + f (Rb5MWza -n, n);
        else
            k = f (Rb5MWza, n - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    return k;
}

void  main () {
    int Rb5MWza [(280 - 260)];
    int n [(83 - 63)];
    int t;
    int i;
    scanf ("%d", &t);
    for (i = (363 - 363); i < t; i++)
        scanf ("%d%d", &Rb5MWza[i], &n[i]);
    {
        i = 0;
        while (i < t) {
            printf ("%d\n", f (Rb5MWza[i], n[i]));
            i = i + 1;
        };
    };
}

