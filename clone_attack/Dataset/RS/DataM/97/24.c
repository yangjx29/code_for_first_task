int main () {
    int n, a, b, c, d, e, f, x, y, z, i, K6mb9lAYWv;
    scanf ("%d", &n);
    a = n / (660 - 560);
    x = n % 100;
    b = x / (575 - 525);
    y = n % 50;
    c = y / (381 - 361);
    z = n - 100 * a - 50 * b - 20 * c;
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
    d = z / (494 - 484);
    i = n % (912 - 902);
    e = i / (418 - 413);
    K6mb9lAYWv = n % 5;
    f = K6mb9lAYWv;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);
    return 0;
}

