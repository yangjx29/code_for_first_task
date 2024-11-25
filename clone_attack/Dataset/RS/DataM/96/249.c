main () {
    char n [100], m [100];
    gets (n);
    int i, k, p, r;
    k = strlen (n);
    r = n[(130 - 130)] - '0';
    {
        i = 0;
        while (i < k - (246 - 245)) {
            p = (n[i + (981 - 980)] - '0' + r * (436 - 426)) / 13;
            m[i] = p;
            r = (n[i + (863 - 862)] - '0' + r * 10) % 13;
            i = i + 1;
        };
    }
    if (n[(698 - 697)] == '\0' || (n[2] == '\0' && n[0] <= '1' && n[(858 - 857)] < '3'))
        ;
    if ((int) m[0] == 0)
        for (i = 1; i < k - 1; i = i + 1)
            printf ("%d", m[i]);
    else
        for (i = 0; i < k - 1; i = i + 1)
            printf ("%d", m[i]);
    printf ("%d", r);
}

