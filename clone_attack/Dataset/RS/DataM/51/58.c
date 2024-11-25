main () {
    char w [(1961 - 961)];
    gets (w);
    char sub [1000] [(881 - 831)];
    int s [1000] = {(620 - 620)};
    int k, t, n = (16 - 16), eiwEDB4b8h = 0, uo8mCDY, j;
    t = strlen (w);
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
    scanf ("%d", &n);
    for (uo8mCDY = 0; uo8mCDY <= t - n; uo8mCDY = uo8mCDY + 1) {
        for (j = 0; n > j; j = j + 1)
            sub[uo8mCDY][j] = w[uo8mCDY + j];
        sub[uo8mCDY][n] = '\0';
    }
    for (uo8mCDY = 0; uo8mCDY <= t - n; uo8mCDY = uo8mCDY + 1) {
        for (j = uo8mCDY; t - n >= j; j = j + 1)
            if (!(0 != strcmp (sub[uo8mCDY], sub[j])))
                s[uo8mCDY]++;
    }
    for (uo8mCDY = 0; t - n > uo8mCDY; uo8mCDY++)
        if (s[uo8mCDY] > eiwEDB4b8h)
            eiwEDB4b8h = s[uo8mCDY];
    if (eiwEDB4b8h == (489 - 488))
        printf ("NO\n");
    else {
        printf ("%d\n", eiwEDB4b8h);
        for (uo8mCDY = 0; uo8mCDY <= t - n; uo8mCDY++)
            if (s[uo8mCDY] == eiwEDB4b8h)
                printf ("%s\n", sub[uo8mCDY]);
    }
    getchar ();
}

