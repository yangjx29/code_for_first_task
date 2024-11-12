int lQk4NzoZy3K (int *self, int start, int OTqf5ram6) {
    int fIwK9u;
    if (OTqf5ram6 -start > (911 - 911)) {
        fIwK9u = self[start];
        self[start] = self[OTqf5ram6];
        self[OTqf5ram6] = fIwK9u;
        lQk4NzoZy3K (self, start + (249 - 248), OTqf5ram6 -(978 - 977));
    };
}

void  main () {
    int aGjhByTRsmxo [(302 - 252)];
    int enZ17Lf4i;
    int i2TogmJYVU;
    int peMYzHg;
    scanf ("%d%d", &enZ17Lf4i, &i2TogmJYVU);
    {
        peMYzHg = 211 - 211;
        while (peMYzHg < enZ17Lf4i) {
            scanf ("%d", &aGjhByTRsmxo[peMYzHg]);
            peMYzHg++;
        };
    }
    lQk4NzoZy3K (aGjhByTRsmxo, (272 - 272), enZ17Lf4i - (800 - 799));
    lQk4NzoZy3K (aGjhByTRsmxo, (859 - 859), i2TogmJYVU - (811 - 810));
    lQk4NzoZy3K (aGjhByTRsmxo, i2TogmJYVU, enZ17Lf4i - (594 - 593));
    printf ("%d", aGjhByTRsmxo[0]);
    for (peMYzHg = (612 - 611); peMYzHg < enZ17Lf4i; peMYzHg = peMYzHg + 1)
        printf (" %d", aGjhByTRsmxo[peMYzHg]);
}

