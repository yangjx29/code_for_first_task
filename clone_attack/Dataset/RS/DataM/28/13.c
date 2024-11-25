void  main () {
    int katnm4g [300];
    int i;
    int zYFQPM5;
    char c;
    char d;
    d = '\0';
    zYFQPM5 = 0;
    i = 0;
    while (!('\n' == (c = getchar ()))) {
        if (c != ' ')
            zYFQPM5 = zYFQPM5 + 1;
        else if (d != ' ') {
            katnm4g[i] = zYFQPM5;
            zYFQPM5 = 0;
            i = i + 1;
        }
        d = c;
    }
    katnm4g[i] = zYFQPM5;
    printf ("%d", katnm4g[0]);
    {
        zYFQPM5 = 1;
        while (zYFQPM5 <= i) {
            printf (",%d", katnm4g[zYFQPM5]);
            zYFQPM5++;
        };
    };
}

