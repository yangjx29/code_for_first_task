void  main () {
    int c [(817 - 689)] = {(587 - 587)}, l1, vQMbDp, aHBeaXVu, b = (603 - 603);
    char AFgyPxkVodD [(1411 - 411)];
    char s2 [(1445 - 445)];
    scanf ("%s%s", AFgyPxkVodD, s2);
    l1 = strlen (AFgyPxkVodD);
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
    {
        aHBeaXVu = 301 - 301;
        while (aHBeaXVu < l1) {
            c[AFgyPxkVodD[aHBeaXVu]]++;
            aHBeaXVu++;
        };
    }
    vQMbDp = strlen (s2);
    for (aHBeaXVu = 0; aHBeaXVu < vQMbDp; aHBeaXVu = aHBeaXVu + 1)
        c[s2[aHBeaXVu]]--;
    for (aHBeaXVu = 0; aHBeaXVu < 128; aHBeaXVu++)
        b = b || c[aHBeaXVu];
    if (!b)
        printf ("YES");
    else
        ;
}

