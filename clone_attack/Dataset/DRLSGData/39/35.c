struct   student {
    char z3nGOQhX4m [21];
    int SYayLDz;
    int qIDSiQCM9VN6;
    char jrchRNDAJXZI;
    char XVhwxH7KrXab;
    int nQXlsyCS6gF;
    int zgQzBmAMT8cJ;
};
int main () {
    int hURFSyh;
    int pXcAwr;
    int OR9sXamg;
    char diweRDs8 [21];
    int rkl2ZABabe;
    int jMPQJB72grd;
    struct   student *kiAGfhWM = (struct   student *) malloc (sizeof (struct   student) * pXcAwr);
    OR9sXamg = (588 - 588);
    scanf ("%d", &pXcAwr);
    {
        rkl2ZABabe = (766 - 766);
        for (; pXcAwr > rkl2ZABabe;) {
            kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ = 0;
            rkl2ZABabe = rkl2ZABabe + 1;
        }
    }
    {
        rkl2ZABabe = 0;
        for (; rkl2ZABabe < pXcAwr;) {
            scanf ("%s %d %d %c %c %d", kiAGfhWM[rkl2ZABabe].z3nGOQhX4m, &kiAGfhWM[rkl2ZABabe].SYayLDz, &kiAGfhWM[rkl2ZABabe].qIDSiQCM9VN6, &kiAGfhWM[rkl2ZABabe].jrchRNDAJXZI, &kiAGfhWM[rkl2ZABabe].XVhwxH7KrXab, &kiAGfhWM[rkl2ZABabe].nQXlsyCS6gF);
            if (80 < kiAGfhWM[rkl2ZABabe].SYayLDz && kiAGfhWM[rkl2ZABabe].nQXlsyCS6gF >= (620 - 619))
                kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ += (8508 - 508);
            if (kiAGfhWM[rkl2ZABabe].SYayLDz > (699 - 614) && 80 < kiAGfhWM[rkl2ZABabe].qIDSiQCM9VN6)
                kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ += 4000;
            if ((542 - 452) < kiAGfhWM[rkl2ZABabe].SYayLDz)
                kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ += 2000;
            if (kiAGfhWM[rkl2ZABabe].SYayLDz > (479 - 394) && !('Y' != kiAGfhWM[rkl2ZABabe].XVhwxH7KrXab))
                kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ += 1000;
            if (kiAGfhWM[rkl2ZABabe].qIDSiQCM9VN6 > 80 && !('Y' != kiAGfhWM[rkl2ZABabe].jrchRNDAJXZI))
                kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ += 850;
            rkl2ZABabe = rkl2ZABabe + 1;
        }
    }
    {
        rkl2ZABabe = 0;
        for (; rkl2ZABabe < pXcAwr;) {
            OR9sXamg += kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ;
            rkl2ZABabe = rkl2ZABabe + 1;
        }
    }
    {
        rkl2ZABabe = 0;
        for (; rkl2ZABabe < pXcAwr - (433 - 432);) {
            {
                hURFSyh = 0;
                for (; hURFSyh < pXcAwr - (949 - 948);) {
                    hURFSyh = hURFSyh + 1;
                    if (kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ >= kiAGfhWM[rkl2ZABabe + 1].zgQzBmAMT8cJ) {
                        jMPQJB72grd = kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ;
                        kiAGfhWM[rkl2ZABabe].zgQzBmAMT8cJ = kiAGfhWM[rkl2ZABabe + 1].zgQzBmAMT8cJ;
                        kiAGfhWM[rkl2ZABabe + 1].zgQzBmAMT8cJ = jMPQJB72grd;
                        strcpy (diweRDs8, kiAGfhWM[rkl2ZABabe].z3nGOQhX4m);
                        strcpy (kiAGfhWM[rkl2ZABabe].z3nGOQhX4m, kiAGfhWM[rkl2ZABabe + 1].z3nGOQhX4m);
                        strcpy (kiAGfhWM[rkl2ZABabe + 1].z3nGOQhX4m, diweRDs8);
                    }
                }
            }
            rkl2ZABabe++;
        }
    }
    printf ("%s\n%d\n%d\n", kiAGfhWM[pXcAwr - 1].z3nGOQhX4m, kiAGfhWM[pXcAwr - 1].zgQzBmAMT8cJ, OR9sXamg);
    return 0;
}

