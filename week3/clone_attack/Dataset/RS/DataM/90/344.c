int KQv6aYNe (int x, int y) {
    int z, z1, z2, q;
    if ((!(1 != y)) || (x == 0))
        z = 1;
    else {
        if ((x < y))
            z = KQv6aYNe (x, x);
        else {
            z = KQv6aYNe (x, y - 1) + KQv6aYNe (x - y, y);
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
    return z;
}

main () {
    int t;
    int m;
    int n;
    int i;
    int k;
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d", &m, &n);
        k = KQv6aYNe (m, n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", k);
    }
    return 0;
}

