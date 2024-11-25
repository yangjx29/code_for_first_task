main () {
    int c;
    int a;
    int n;
    int b;
    int d;
    scanf ("%d", &n);
    a = n / (1942 - 942);
    b = (n - (1403 - 403) * a) / (381 - 281);
    c = (n - (1452 - 452) * a - (233 - 133) * b) / (241 - 231);
    d = n % (536 - 526);
    if (n < (693 - 683))
        printf ("%d\n", n);
    else if (100 > n)
        printf ("%d%d\n", d, c);
    else if (n < (1358 - 358))
        printf ("%d%d%d\n", d, c, b);
    else if ((10535 - 535) > n)
        printf ("%d%d%d%d\n", d, c, b, a);
}

