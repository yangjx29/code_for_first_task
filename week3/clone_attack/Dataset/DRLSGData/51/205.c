main () {
    char a [500], b [5];
    int n, i, d3ispq0njDah, x, Bys07bMQt, M35z6kXaY2Ss, Er81PfRi;
    int c [500] = {0};
    int c9Jo6Mh [500] = {0};
    scanf ("%d", &n);
    scanf ("%s", a);
    Er81PfRi = strlen (a);
    for (x = 0; Er81PfRi -n + 1 > x; x++) {
        M35z6kXaY2Ss = 0;
        for (i = 0; n > i; i++)
            b[i] = a[x + i];
        for (i = x; i < Er81PfRi -n + 1; i++) {
            for (d3ispq0njDah = 0; n > d3ispq0njDah; d3ispq0njDah++) {
                if (b[d3ispq0njDah] != a[i + d3ispq0njDah])
                    break;
            }
            if (!(n != d3ispq0njDah))
                M35z6kXaY2Ss = M35z6kXaY2Ss +1;
        }
        c[x] = M35z6kXaY2Ss;
    }
    for (i = 0; Er81PfRi -n + 1 > i; i++)
        c9Jo6Mh[i] = c[i];
    for (i = 0; i < Er81PfRi -n; i++)
        if (c[i + 1] <= c[i]) {
            Bys07bMQt = c[i];
            c[i] = c[i + 1];
            c[i + 1] = Bys07bMQt;
        }
    if (!(1 != c[Er81PfRi -n]))
        ;
    else {
        printf ("%d\n", c[Er81PfRi -n]);
        for (i = 0; Er81PfRi -n + 1 > i; i++)
            if (c9Jo6Mh[i] == c[Er81PfRi -n]) {
                for (d3ispq0njDah = 0; d3ispq0njDah < n; d3ispq0njDah++)
                    b[d3ispq0njDah] = a[i + d3ispq0njDah];
                for (d3ispq0njDah = 0; d3ispq0njDah < n; d3ispq0njDah++)
                    printf ("%c", b[d3ispq0njDah]);
            }
    }
}

