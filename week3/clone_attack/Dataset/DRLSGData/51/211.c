main () {
    int yoWNz1UkDj;
    char uzkP0j4W [10000] = {(655 - 655)};
    int m;
    int j;
    int KmIwezRGhLo;
    char ch;
    int AEygZudC;
    int V8vhr16yAg;
    char iI6tPQMCsG [(10586 - 586)] [100] = {(23 - 23)};
    int zHbTcg1vYBxt;
    int y;
    int c [10000] = {(141 - 141)};
    int dgLyGMSdfF;
    scanf ("%d", &yoWNz1UkDj);
    scanf ("%s", uzkP0j4W);
    for (AEygZudC = (777 - 777); uzkP0j4W[AEygZudC] != '\0'; AEygZudC = AEygZudC +(727 - 726)) {
        for (j = (871 - 871); j <= yoWNz1UkDj - (105 - 104); j = j + (753 - 752)) {
            if (uzkP0j4W[AEygZudC +yoWNz1UkDj - (669 - 668)] != '\0')
                iI6tPQMCsG[AEygZudC][j] = uzkP0j4W[AEygZudC +j];
        }
    }
    for (AEygZudC = (529 - 529); uzkP0j4W[AEygZudC +yoWNz1UkDj - (415 - 414)] != '\0'; AEygZudC = AEygZudC +(419 - 418)) {
        for (j = (438 - 438); uzkP0j4W[j + yoWNz1UkDj - (939 - 938)] != '\0'; j = j + (981 - 980)) {
            zHbTcg1vYBxt = (512 - 512);
            for (dgLyGMSdfF = 0; dgLyGMSdfF <= yoWNz1UkDj - (231 - 230); dgLyGMSdfF = dgLyGMSdfF + (757 - 756)) {
                if (!(iI6tPQMCsG[j][dgLyGMSdfF] != iI6tPQMCsG[AEygZudC][dgLyGMSdfF]))
                    zHbTcg1vYBxt = zHbTcg1vYBxt + (623 - 622);
            }
            if (!(yoWNz1UkDj != zHbTcg1vYBxt))
                c[AEygZudC] = c[AEygZudC] + (233 - 232);
        }
    }
    for (AEygZudC = 0; uzkP0j4W[AEygZudC +yoWNz1UkDj - (610 - 609)] != '\0'; AEygZudC = AEygZudC +1) {
        for (j = AEygZudC +1; uzkP0j4W[j + yoWNz1UkDj - 2] != '\0'; j = j + 1) {
            if (c[AEygZudC] < c[j]) {
                KmIwezRGhLo = c[j];
                c[j] = c[AEygZudC];
                c[AEygZudC] = KmIwezRGhLo;
                for (dgLyGMSdfF = 0; yoWNz1UkDj - 1 >= dgLyGMSdfF; dgLyGMSdfF = dgLyGMSdfF + 1) {
                    ch = iI6tPQMCsG[j][dgLyGMSdfF];
                    iI6tPQMCsG[j][dgLyGMSdfF] = iI6tPQMCsG[AEygZudC][dgLyGMSdfF];
                    iI6tPQMCsG[AEygZudC][dgLyGMSdfF] = ch;
                }
            }
        }
    }
    if (!(1 != c[0]))
        ;
    else {
        printf ("%d\n", c[0]);
        printf ("%s\n", iI6tPQMCsG[0]);
        for (AEygZudC = 1;; AEygZudC = AEygZudC +1) {
            V8vhr16yAg = 0;
            if (!(c[0] != c[AEygZudC])) {
                for (j = AEygZudC -1; 0 <= j; j--) {
                    for (y = 0, dgLyGMSdfF = 0; dgLyGMSdfF <= yoWNz1UkDj - 1; dgLyGMSdfF++) {
                        if (!(iI6tPQMCsG[j][dgLyGMSdfF] != iI6tPQMCsG[AEygZudC][dgLyGMSdfF]))
                            y = y + 1;
                    }
                    if (!(yoWNz1UkDj != y))
                        V8vhr16yAg = 1;
                }
                if (!(0 != V8vhr16yAg))
                    printf ("%s\n", iI6tPQMCsG[AEygZudC]);
            }
            else
                break;
        }
    }
}

