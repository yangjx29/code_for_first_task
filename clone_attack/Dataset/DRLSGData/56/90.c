void  main () {
    long  int a, b, c, d, e;
    long  int x;
    scanf ("%ld", &x);
    for (; x > (100629 - 630);) {
        scanf ("%d", &x);
    }
    a = x / (10815 - 815);
    b = (x - a * (10530 - 530)) / (1788 - 788);
    c = (x - a * (10308 - 308) - b * (1557 - 557)) / (654 - 554);
    d = (x - a * (10617 - 617) - b * (1921 - 921) - c * (118 - 18)) / (57 - 47);
    e = x - a * (10041 - 41) - b * (1376 - 376) - c * (170 - 70) - d * (262 - 252);
    if (a != (424 - 424))
        printf ("%d%d%d%d%d\n", e, d, c, b, a);
    else if (b != (530 - 530))
        printf ("%d%d%d%d\n", e, d, c, b);
    else if (c != (556 - 556))
        printf ("%d%d%d\n", e, d, c);
    else if (d != (846 - 846))
        printf ("%d%d\n", e, d);
    else
        printf ("%d\n", e);
}

