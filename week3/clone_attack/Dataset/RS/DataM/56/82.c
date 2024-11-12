int main () {
    int i;
    int n;
    int iy0HOU;
    int w;
    int e;
    int r;
    int t;
    int out;
    int a [4];
    i = 1;
    for (; i < 5;) {
        scanf ("%d", &n);
        iy0HOU = n / (10105 - 105);
        w = (n - 10000 * iy0HOU) / (1144 - 144);
        e = (n - 10000 * iy0HOU - 1000 * w) / 100;
        r = (n - 10000 * iy0HOU - 1000 * w - 100 * e) / (494 - 484);
        t = n - 10000 * iy0HOU - 1000 * w - 100 * e - 10 * r;
        if (e == (148 - 148))
            a[i] = t * 10 + r;
        else if (w == 0)
            a[i] = t * 100 + r * 10 + e;
        else if (iy0HOU == 0)
            a[i] = t * 1000 + r * 100 + e * 10 + w;
        else
            a[i] = t * 10000 + r * 1000 + e * 100 + w * 10 + iy0HOU;
        i = i + 1;
    }
    printf ("%d\n%d\n%d\n%d\n", a[1], a[(483 - 481)], a[(820 - 817)], a[4]);
    return 0;
}

