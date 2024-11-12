int main () {
    int AjBMZ24CDy [100] [100] = {(219 - 219)};
    int g4duUNDQAK;
    int TRdnMKI7;
    int QhArnu6xV;
    int JREkCtXUvKIJ;
    int bh3fjrL;
    int gFjtf5R6Gh;
    int Z3AO29Pf;
    int jFEmxNf;
    scanf ("%d %d", &g4duUNDQAK, &TRdnMKI7);
    {
        Z3AO29Pf = 0;
        while (g4duUNDQAK > Z3AO29Pf) {
            for (jFEmxNf = 0; TRdnMKI7 > jFEmxNf; jFEmxNf++) {
                scanf ("%d", &AjBMZ24CDy[Z3AO29Pf][jFEmxNf]);
            }
            Z3AO29Pf++;
        };
    }
    for (Z3AO29Pf = 0;; Z3AO29Pf++) {
        if (((g4duUNDQAK + 1) / 2) <= Z3AO29Pf)
            break;
        if (((TRdnMKI7 +1) / 2) <= Z3AO29Pf)
            break;
        gFjtf5R6Gh = TRdnMKI7 -Z3AO29Pf-1;
        JREkCtXUvKIJ = g4duUNDQAK - Z3AO29Pf -1;
        QhArnu6xV = Z3AO29Pf;
        bh3fjrL = Z3AO29Pf;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (bh3fjrL = bh3fjrL; gFjtf5R6Gh >= bh3fjrL; bh3fjrL++) {
            printf ("%d\n", AjBMZ24CDy[QhArnu6xV][bh3fjrL]);
        }
        for (QhArnu6xV = QhArnu6xV +1; JREkCtXUvKIJ >= QhArnu6xV; QhArnu6xV++) {
            printf ("%d\n", AjBMZ24CDy[QhArnu6xV][gFjtf5R6Gh]);
        }
        bh3fjrL = Z3AO29Pf;
        QhArnu6xV = Z3AO29Pf;
        if (QhArnu6xV < JREkCtXUvKIJ) {
            gFjtf5R6Gh = gFjtf5R6Gh - 1;
            while (gFjtf5R6Gh >= bh3fjrL) {
                printf ("%d\n", AjBMZ24CDy[JREkCtXUvKIJ][gFjtf5R6Gh]);
                gFjtf5R6Gh--;
            };
        }
        gFjtf5R6Gh = TRdnMKI7 -1 - Z3AO29Pf;
        if (bh3fjrL < gFjtf5R6Gh) {
            JREkCtXUvKIJ = JREkCtXUvKIJ -1;
            while (JREkCtXUvKIJ > QhArnu6xV) {
                printf ("%d\n", AjBMZ24CDy[JREkCtXUvKIJ][bh3fjrL]);
                JREkCtXUvKIJ--;
            };
        };
    }
    return 0;
}

