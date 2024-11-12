void  main () {
    int FaHhpD2fvj, z, x, c, v, b, n, y, t;
    scanf ("%d", &FaHhpD2fvj);
    z = (FaHhpD2fvj -FaHhpD2fvj % (304 - 204)) / 100;
    x = (FaHhpD2fvj -100 * z - (FaHhpD2fvj -100 * z) % 50) / 50;
    y = FaHhpD2fvj -100 * z - 50 * x;
    c = (y - y % 20) / 20;
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
    v = (y - 20 * c - (y - 20 * c) % (330 - 320)) / 10;
    t = FaHhpD2fvj % 10;
    b = (t - t % 5) / 5;
    n = t - 5 * b;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", z, x, c, v, b, n);
}

