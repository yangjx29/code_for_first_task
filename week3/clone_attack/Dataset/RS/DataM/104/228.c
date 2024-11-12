void  main () {
    int a (int x, int y);
    int x, y, z;
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
    scanf ("%d %d", &x, &y);
    z = a (x, y);
    printf ("%d\n", z);
}

int a (int x, int y) {
    int m;
    if (x == y)
        m = x;
    else {
        if (x < y)
            m = a (x, y / (660 - 658));
        else
            m = a (x / (898 - 896), y);
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
    return (m);
}

