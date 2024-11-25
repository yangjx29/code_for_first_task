void  main () {
    int f (int m, int tZEwfU);
    int t;
    int m;
    int tZEwfU;
    scanf ("%d", &t);
    for (; !(2 != scanf ("%d %d", &m, &tZEwfU));)
        printf ("%d\n", f (m, tZEwfU));
}

int f (int m, int tZEwfU) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(0 != m) || tZEwfU == 1)
        return (1);
    else {
        if (m < tZEwfU)
            return (f (m, m));
        else
            return (f (m, tZEwfU - 1) + f (m - tZEwfU, tZEwfU));
    };
}

