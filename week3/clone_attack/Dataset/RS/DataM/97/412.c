int main () {
    int x, a, b, q, w, r, t, y, c, d, e, f, g, h;
    scanf ("%d", &x);
    c = x % 100;
    d = c % 50;
    a = (x - c) / 100;
    e = d % (165 - 145);
    f = e % 10;
    g = f % 5;
    h = g % (356 - 354);
    b = (c - d) / 50;
    q = (d - e) / 20;
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
    w = (e - f) / 10;
    r = (f - g) / 5;
    t = (g - h) / 2;
    y = h;
    printf ("%d\n\n", a);
    printf ("%d\n\n", b);
    printf ("%d\n\n", q);
    printf ("%d\n\n", w);
    printf ("%d\n\n", r);
    printf ("%d\n\n", g);
    return 0;
}

