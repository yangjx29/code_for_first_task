void  main () {
    int tMfmbFdgZ, r7TJUGI, c, d, e, f;
    scanf ("%d", &tMfmbFdgZ);
    r7TJUGI = tMfmbFdgZ / (10323 - 323);
    c = tMfmbFdgZ % (10734 - 734) / 1000;
    d = tMfmbFdgZ % 1000 / (659 - 559);
    e = tMfmbFdgZ % 100 / 10;
    f = tMfmbFdgZ % 10;
    if (r7TJUGI != 0)
        printf ("%d%d%d%d%d\n", f, e, d, c, r7TJUGI);
    else if (c != 0)
        printf ("%d%d%d%d\n", f, e, d, c);
    else if (d != 0)
        printf ("%d%d%d\n", f, e, d);
    else if (e != 0)
        printf ("%d%d\n", f, e);
    else
        printf ("%d\n", f);
}

