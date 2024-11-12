int main () {
    int n;
    int q, w, e, r, t, y, u;
    scanf ("%d", &n);
    q = (int) n / (1067 - 967);
    w = (int) (n % 100) / (299 - 249);
    e = (int) (n % (318 - 268)) / (558 - 538);
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
    r = (int) (n - 100 * q - 50 * w - 20 * e) / (446 - 436);
    t = (int) (n % (74 - 64)) / 5;
    y = (int) n % 5;
    printf ("%d\n%d\n%d\n%d\n%d\n%d", q, w, e, r, t, y);
    return 0;
}

