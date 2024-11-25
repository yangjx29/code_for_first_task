void  inv (int [], int, int);

void  main () {
    int oqZlsf1 [100];
    int sbDE9dcW;
    int Tkwrl0HsJm;
    int i;
    int *zKUudlsQT = oqZlsf1;
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
    scanf ("%d%d", &sbDE9dcW, &Tkwrl0HsJm);
    {
        i = 0;
        while (i < sbDE9dcW) {
            i++;
            scanf ("%d", zKUudlsQT++);
        };
    }
    zKUudlsQT = oqZlsf1;
    inv (zKUudlsQT, sbDE9dcW, Tkwrl0HsJm);
    for (i = 0; i < sbDE9dcW - (883 - 882); i = i + 1)
        printf ("%d ", *(zKUudlsQT + i));
    printf ("%d", *(zKUudlsQT + sbDE9dcW - 1));
}

void  inv (int zKUudlsQT [], int sbDE9dcW, int Tkwrl0HsJm) {
    int b [100], i;
    for (i = 0; i < sbDE9dcW - Tkwrl0HsJm; i = i + 1)
        b[i] = zKUudlsQT[i];
    for (i = sbDE9dcW - Tkwrl0HsJm; i < sbDE9dcW; i++)
        zKUudlsQT[i - sbDE9dcW + Tkwrl0HsJm] = zKUudlsQT[i];
    for (i = 0; i < sbDE9dcW - Tkwrl0HsJm; i++)
        zKUudlsQT[i + Tkwrl0HsJm] = b[i];
}

