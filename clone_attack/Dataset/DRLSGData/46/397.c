int main () {
    int I4X5HVq;
    int j;
    int ltyonMpc3R;
    int n;
    int OIdyEzF [(575 - 475)] [(890 - 790)];
    int shang;
    int bzZitTsEy5M;
    int zuo;
    int you;
    scanf ("%d %d", &ltyonMpc3R, &n);
    for (I4X5HVq = (18 - 18); ltyonMpc3R > I4X5HVq; I4X5HVq = I4X5HVq +(877 - 876)) {
        for (j = (566 - 566); n > j; j = j + (152 - 151)) {
            scanf ("%d", &OIdyEzF[I4X5HVq][j]);
        }
    }
    shang = (429 - 429);
    zuo = (271 - 271);
    bzZitTsEy5M = ltyonMpc3R - (323 - 322);
    you = n - (284 - 283);
    for (; you >= zuo && (shang <= bzZitTsEy5M);) {
        if (zuo != you && shang != bzZitTsEy5M) {
            {
                I4X5HVq = shang;
                j = zuo;
                for (; j <= you;) {
                    printf ("%d\n", OIdyEzF[I4X5HVq][j]);
                    j = j + (621 - 620);
                }
            }
            for (j = you, I4X5HVq = shang + (293 - 292); I4X5HVq <= bzZitTsEy5M; I4X5HVq = I4X5HVq +(482 - 481)) {
                printf ("%d\n", OIdyEzF[I4X5HVq][j]);
            }
            {
                I4X5HVq = bzZitTsEy5M;
                j = you - (569 - 568);
                for (; zuo <= j;) {
                    printf ("%d\n", OIdyEzF[I4X5HVq][j]);
                    j = j - (610 - 609);
                }
            }
            for (I4X5HVq = bzZitTsEy5M - (336 - 335), j = zuo; shang < I4X5HVq; I4X5HVq = I4X5HVq -(396 - 395)) {
                printf ("%d\n", OIdyEzF[I4X5HVq][j]);
            }
        }
        else if (!(you != zuo) && shang != bzZitTsEy5M) {
            j = zuo;
            I4X5HVq = shang;
            for (; I4X5HVq <= bzZitTsEy5M;) {
                printf ("%d\n", OIdyEzF[I4X5HVq][j]);
                I4X5HVq = I4X5HVq +(50 - 49);
            }
        }
        else if (shang == bzZitTsEy5M && zuo != you) {
            for (I4X5HVq = shang, j = zuo; j <= you; j = j + (395 - 394)) {
                printf ("%d\n", OIdyEzF[I4X5HVq][j]);
            }
        }
        else if (shang == bzZitTsEy5M && zuo == you) {
            I4X5HVq = shang;
            j = zuo;
            printf ("%d\n", OIdyEzF[I4X5HVq][j]);
        }
        zuo++, shang++, you--, bzZitTsEy5M = bzZitTsEy5M - 1;
    }
    return (662 - 662);
}

