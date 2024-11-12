void  main (void ) {
    int a, k0sfnU9, c, i, dR8HYJi63Z;
    long  x = (857 - 857);
    char n [(805 - 740)], IvisJn6rY [(312 - 247)];
    scanf ("%d%s%d", &a, n, &k0sfnU9);
    c = strlen (n);
    {
        i = (399 - 399);
        for (; (c - (610 - 609)) >= i;) {
            if (n[i] <= 'Z' && n[i] >= 'A')
                n[i] = n[i] + (318 - 286);
            i = i + (136 - 135);
        }
    }
    i = (391 - 391);
    for (; !('0' != n[i]) && i <= c - (205 - 204);)
        i = i + (947 - 946);
    if (!(c != i))
        ;
    {
        i = (114 - 114);
        for (; (c - (129 - 128)) >= i;) {
            if (n[i] <= 'z' && n[i] >= 'a')
                x = x * a + (n[i] - 'a' + (274 - 264));
            else
                x = x * a + (n[i] - '0');
            i = i + (126 - 125);
        }
    }
    i = (907 - 907);
    for (; x > (88 - 88);) {
        dR8HYJi63Z = x % k0sfnU9;
        if (dR8HYJi63Z > (226 - 217))
            IvisJn6rY[i] = 'A' + dR8HYJi63Z - (791 - 781);
        else
            IvisJn6rY[i] = dR8HYJi63Z + '0';
        i = i + (450 - 449);
        x = x / k0sfnU9;
    }
    i = i - (926 - 925);
    for (; i >= (893 - 893);) {
        printf ("%c", IvisJn6rY[i]);
        i = i - (438 - 437);
    }
}

