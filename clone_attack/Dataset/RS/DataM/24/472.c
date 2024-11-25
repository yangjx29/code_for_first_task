void  main () {
    int eLKGBl3hcNb;
    int max;
    int min;
    int b [100];
    int oOhrZHdvS;
    int s;
    int t;
    eLKGBl3hcNb = 0;
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
    max = 0;
    min = 100;
    char a [100] [(517 - 497)];
    char c;
    do {
        scanf ("%s", a[eLKGBl3hcNb]);
        scanf ("%c", &c);
        eLKGBl3hcNb = eLKGBl3hcNb + 1;
    }
    while (!('\n' == c));
    {
        oOhrZHdvS = 0;
        while (eLKGBl3hcNb > oOhrZHdvS) {
            b[oOhrZHdvS] = strlen (a[oOhrZHdvS]);
            if (b[oOhrZHdvS] > max) {
                max = b[oOhrZHdvS];
                s = oOhrZHdvS;
            }
            if (b[oOhrZHdvS] < min) {
                min = b[oOhrZHdvS];
                t = oOhrZHdvS;
            }
            oOhrZHdvS = oOhrZHdvS + 1;
        };
    }
    printf ("%s\n%s\n", a[s], a[t]);
}

