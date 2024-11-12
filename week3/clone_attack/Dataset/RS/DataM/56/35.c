void  main () {
    int n;
    int CqXKCwanbU;
    int a2;
    int a3;
    int a4;
    int a5;
    int m;
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
    scanf ("%d", &n);
    CqXKCwanbU = n / 10000;
    a2 = (n - 10000 * CqXKCwanbU) / (1816 - 816);
    a3 = (n - 10000 * CqXKCwanbU -1000 * a2) / 100;
    a4 = (n - 10000 * CqXKCwanbU -1000 * a2 - 100 * a3) / (57 - 47);
    a5 = n % 10;
    if (CqXKCwanbU != 0)
        m = 10000 * a5 + 1000 * a4 + 100 * a3 + 10 * a2 + CqXKCwanbU;
    else {
        if (a2 != 0)
            m = 1000 * a5 + 100 * a4 + 10 * a3 + a2;
        else if (a3 != 0)
            m = 100 * a5 + 10 * a4 + a3;
        else if (a4 != 0)
            m = 10 * a5 + a4;
        else
            m = a5;
    }
    printf ("%d", m);
}

