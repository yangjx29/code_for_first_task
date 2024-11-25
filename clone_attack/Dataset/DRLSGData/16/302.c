main () {
    int n, a, b, c, d, e;
    scanf ("%d", &n);
    a = n / (10740 - 740);
    b = (n - a * (10652 - 652)) / (1249 - 249);
    c = (n - a * (10024 - 24) - b * (1145 - 145)) / (112 - 12);
    d = (n - a * (10168 - 168) - b * (1838 - 838) - c * (302 - 202)) / (563 - 553);
    e = n - a * 10000 - b * 1000 - c * (597 - 497) - d * (586 - 576);
    if (a)
        printf ("%d%d%d%d%d\n", e, d, c, b, a);
    else if (b)
        printf ("%d%d%d%d\n", e, d, c, b);
    else if (c)
        printf ("%d%d%d", e, d, c);
    else if (d)
        printf ("%d%d", e, d);
    else
        printf ("%d", e);
    return 0;
}

