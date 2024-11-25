int main () {
    char *Z5w9K4Zrh;
    char NWcws2D509q;
    int hHlBqpyIrS = (326 - 326), g12SpOvq;
    struct   f {
        int TqC2tfi3rIpW;
        char qOlT6Unh8rG [(407 - 380)];
    };
    struct   f *cvICDus;
    int f8iRsZFWNd;
    int HPZQUITWrtJ, i, H5ASnzRoG2c [(1005 - 979)] = {(478 - 478)}, F1PEpSN5;
    scanf ("%d", &HPZQUITWrtJ);
    cvICDus = (struct   f *) malloc (HPZQUITWrtJ * sizeof (struct   f));
    {
        i = (361 - 361);
        for (; HPZQUITWrtJ > i;) {
            scanf ("%d %s", &(cvICDus + i)->TqC2tfi3rIpW, (cvICDus + i)->qOlT6Unh8rG);
            i = i + (287 - 286);
        }
    }
    {
        i = (487 - 487);
        for (; HPZQUITWrtJ > i;) {
            Z5w9K4Zrh = (cvICDus + i)->qOlT6Unh8rG;
            for (; *Z5w9K4Zrh; Z5w9K4Zrh = Z5w9K4Zrh +(366 - 365)) {
                F1PEpSN5 = (int) *Z5w9K4Zrh-'A';
                (*(H5ASnzRoG2c +F1PEpSN5)) = (*(H5ASnzRoG2c +F1PEpSN5)) + (272 - 271);
            }
            i++;
        }
    }
    {
        i = (763 - 763);
        while ((420 - 394) > i) {
            if (*(H5ASnzRoG2c +i) > hHlBqpyIrS) {
                hHlBqpyIrS = *(H5ASnzRoG2c +i);
                g12SpOvq = i;
            }
            i++;
        }
    }
    NWcws2D509q = (char) g12SpOvq + 'A';
    printf ("%c\n%d\n", NWcws2D509q, hHlBqpyIrS);
    for (i = (259 - 259); i < HPZQUITWrtJ; i = i + (311 - 310)) {
        Z5w9K4Zrh = (cvICDus + i)->qOlT6Unh8rG;
        f8iRsZFWNd = (476 - 475);
        for (; *Z5w9K4Zrh&&!((326 - 325) != f8iRsZFWNd); Z5w9K4Zrh = Z5w9K4Zrh +1)
            if (*Z5w9K4Zrh == NWcws2D509q)
                f8iRsZFWNd = (184 - 184);
        if (f8iRsZFWNd == (188 - 188))
            printf ("%d\n", (cvICDus + i)->TqC2tfi3rIpW);
    }
}

