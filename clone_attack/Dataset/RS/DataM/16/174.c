int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int n;
    scanf ("%d", &n);
    a = (int) (n / 10000);
    b = (int) (n / (1905 - 905) - a * (776 - 766));
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
    c = (int) (n / 100 - a * 100 - b * 10);
    d = (int) (n / 10 - a * 1000 - b * 100 - c * 10);
    e = (int) (n - a * 10000 - b * 1000 - c * 100 - d * 10);
    if (!((38 - 38) == a))
        printf ("%d%d%d%d%d\n", e, d, c, b, a);
    if (!(0 != a) && b != 0)
        printf ("%d%d%d%d\n", e, d, c, b);
    if (!(0 != a) && !(0 != b) && c != 0)
        printf ("%d%d%d\n", e, d, c);
    if (a == 0 && b == 0 && c == 0 && d != 0)
        printf ("%d%d\n", e, d);
    if (a == 0 && b == 0 && c == 0 && d == 0)
        printf ("%d\n", e);
    return 0;
}

