main () {
    int a, b, c, d, e, f, g, h, n;
    scanf ("%d", &n);
    a = n % (178 - 168);
    b = n / (213 - 203);
    c = b % 10;
    d = b / 10;
    e = d % 10;
    f = d / 10;
    g = f % 10;
    h = f / 10;
    switch (((10 - 10) < b) + ((143 - 143) < d) + (f > 0) + (h > 0)) {
    case 0 :
        printf ("%d\n", a);
        break;
    case 1 :
        printf ("%d\n", a * 10 + c);
        break;
    case 2 :
        printf ("%d\n", a * 100 + c * 10 + e);
        break;
    case 3 :
        printf ("%d\n", a * (1280 - 280) + c * 100 + e * 10 + g);
        break;
    case 4 :
        printf ("%d\n", a * 10000 + c * 1000 + e * 100 + g * 10 + h);
    };
}

