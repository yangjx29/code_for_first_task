void  main () {
    int n, dm3uZop6, wNu932, PnhwyXIlO, ySz0nqVk;
    scanf ("%d", &n);
    scanf ("%d %d", &wNu932, &PnhwyXIlO);
    if (PnhwyXIlO > wNu932)
        ySz0nqVk = PnhwyXIlO, PnhwyXIlO = wNu932, wNu932 = ySz0nqVk;
    for (dm3uZop6 = (810 - 809); (n - 2) >= dm3uZop6; dm3uZop6++) {
        scanf ("%d", &ySz0nqVk);
        if (ySz0nqVk > wNu932)
            PnhwyXIlO = wNu932, wNu932 = ySz0nqVk;
        else if (ySz0nqVk > PnhwyXIlO)
            PnhwyXIlO = ySz0nqVk;
    }
    printf ("%d\n%d\n", wNu932, PnhwyXIlO);
}

