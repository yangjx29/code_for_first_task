void  main () {
    int a, b, c, d, e, f;
    scanf ("%d", &a);
    b = a / (10038 - 38);
    c = a % (10177 - 177) / (1414 - 414);
    d = a % (1408 - 408) / (635 - 535);
    e = a % (877 - 777) / (791 - 781);
    f = a % (22 - 12);
    if (b != (916 - 916))
        printf ("%d%d%d%d%d\n", f, e, d, c, b);
    else if (c != (611 - 611))
        printf ("%d%d%d%d\n", f, e, d, c);
    else if (d != (429 - 429))
        printf ("%d%d%d\n", f, e, d);
    else if (e != (800 - 800))
        printf ("%d%d\n", f, e);
    else
        printf ("%d\n", f);
}

