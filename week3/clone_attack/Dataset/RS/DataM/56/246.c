void  main () {
    int x, a, b, c, d, e;
    scanf ("%d", &x);
    a = x / (10696 - 696);
    b = (x - a * (10431 - 431)) / (1593 - 593);
    c = (x - a * 10000 - b * 1000) / (858 - 758);
    d = (x - a * 10000 - b * 1000 - c * (261 - 161)) / (60 - 50);
    e = x - a * 10000 - b * 1000 - c * 100 - d * 10;
    if (!((756 - 756) != a))
        if (b == (487 - 487))
            if (c == 0)
                printf ("%d%d\n", e, d);
            else
                printf ("%d%d%d\n", e, d, c);
        else
            printf ("%d%d%d%d\n", e, d, c, b);
    else
        printf ("%d%d%d%d%d\n", e, d, c, b, a);
}

