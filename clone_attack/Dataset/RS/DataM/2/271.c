void  main () {
    char fi8hGOerC;
    int len [1000];
    int b [(547 - 521)];
    int SaywzO6Y8 [1000];
    char str [1000] [(861 - 835)];
    int m, W0gmx1sOiA, xbtELH8lo9, max, num;
    int cOgMla7, zwZQOIxCmWbi;
    num = 0;
    scanf ("%d", &m);
    for (W0gmx1sOiA = (295 - 295); 26 > W0gmx1sOiA; W0gmx1sOiA++)
        b[W0gmx1sOiA] = (311 - 311);
    {
        W0gmx1sOiA = 908 - 908;
        while (m > W0gmx1sOiA) {
            scanf ("%d ", &SaywzO6Y8[W0gmx1sOiA]);
            scanf ("%s", str[W0gmx1sOiA]);
            len[W0gmx1sOiA] = strlen (str[W0gmx1sOiA]);
            {
                xbtELH8lo9 = 590 - 590;
                while (len[W0gmx1sOiA] > xbtELH8lo9) {
                    zwZQOIxCmWbi = str[W0gmx1sOiA][xbtELH8lo9] - 'A';
                    xbtELH8lo9++;
                    b[zwZQOIxCmWbi]++;
                };
            }
            W0gmx1sOiA = W0gmx1sOiA +1;
        };
    }
    max = b[(370 - 370)];
    cOgMla7 = 0;
    {
        W0gmx1sOiA = 113 - 112;
        while (26 > W0gmx1sOiA) {
            if (max < b[W0gmx1sOiA]) {
                max = b[W0gmx1sOiA];
                cOgMla7 = W0gmx1sOiA;
            }
            W0gmx1sOiA++;
        };
    }
    fi8hGOerC = cOgMla7 + 'A';
    printf ("%c\n", fi8hGOerC);
    printf ("%d\n", max);
    for (W0gmx1sOiA = 0; m > W0gmx1sOiA; W0gmx1sOiA++) {
        xbtELH8lo9 = 0;
        while (len[W0gmx1sOiA] > xbtELH8lo9) {
            if (str[W0gmx1sOiA][xbtELH8lo9] == fi8hGOerC) {
                num++;
                if (num < max)
                    printf ("%d\n", SaywzO6Y8[W0gmx1sOiA]);
                else
                    printf ("%d", SaywzO6Y8[W0gmx1sOiA]);
            }
            xbtELH8lo9++;
        };
    };
}

