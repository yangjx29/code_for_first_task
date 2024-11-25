int main () {
    void  pcP0zCiMy (int scJ1nTxAQfs [1000], int gDMnG1Oo2Y [1000], int c [2000], int dKNTocF9nr, int olY6SIiRELJ);
    int scJ1nTxAQfs [1000];
    void  take (int zkiP12o [1000], int yWXwPJ2bOdlc);
    void  V9NqDrAxSM (int zkiP12o [1000], int yWXwPJ2bOdlc);
    void  GbuyLWjDS (int c [2000], int yWXwPJ2bOdlc);
    int c [2000];
    int gDMnG1Oo2Y [1000];
    int dKNTocF9nr;
    int olY6SIiRELJ;
    scanf ("%d%d", &dKNTocF9nr, &olY6SIiRELJ);
    take (scJ1nTxAQfs, dKNTocF9nr);
    V9NqDrAxSM (scJ1nTxAQfs, dKNTocF9nr);
    take (gDMnG1Oo2Y, olY6SIiRELJ);
    V9NqDrAxSM (gDMnG1Oo2Y, olY6SIiRELJ);
    pcP0zCiMy (scJ1nTxAQfs, gDMnG1Oo2Y, c, dKNTocF9nr, olY6SIiRELJ);
    GbuyLWjDS (c, dKNTocF9nr + olY6SIiRELJ);
    return 0;
}

void  take (int zkiP12o [1000], int yWXwPJ2bOdlc) {
    int bR3SQtFK;
    for (bR3SQtFK = 0; yWXwPJ2bOdlc > bR3SQtFK; bR3SQtFK = bR3SQtFK + 1) {
        scanf ("%d", &zkiP12o[bR3SQtFK]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

void  V9NqDrAxSM (int zkiP12o [1000], int yWXwPJ2bOdlc) {
    int bR3SQtFK;
    int nX05IOfEr;
    int Z0Jhl4;
    if (!((977 - 976) == yWXwPJ2bOdlc)) {
        for (bR3SQtFK = yWXwPJ2bOdlc - 2; 0 <= bR3SQtFK; bR3SQtFK = bR3SQtFK - 1) {
            nX05IOfEr = 0;
            while (bR3SQtFK >= nX05IOfEr) {
                if (zkiP12o[nX05IOfEr] > zkiP12o[nX05IOfEr + 1]) {
                    Z0Jhl4 = zkiP12o[nX05IOfEr];
                    zkiP12o[nX05IOfEr] = zkiP12o[nX05IOfEr + 1];
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
                    zkiP12o[nX05IOfEr + 1] = Z0Jhl4;
                }
                nX05IOfEr = nX05IOfEr + 1;
            };
        };
    };
}

void  pcP0zCiMy (int scJ1nTxAQfs [1000], int gDMnG1Oo2Y [1000], int c [2000], int dKNTocF9nr, int olY6SIiRELJ) {
    int bR3SQtFK;
    for (bR3SQtFK = 0; bR3SQtFK < dKNTocF9nr; bR3SQtFK++) {
        c[bR3SQtFK] = scJ1nTxAQfs[bR3SQtFK];
    }
    {
        bR3SQtFK = dKNTocF9nr;
        while (bR3SQtFK < dKNTocF9nr + olY6SIiRELJ) {
            c[bR3SQtFK] = gDMnG1Oo2Y[bR3SQtFK - dKNTocF9nr];
            bR3SQtFK++;
        };
    };
}

void  GbuyLWjDS (int c [2000], int yWXwPJ2bOdlc) {
    int bR3SQtFK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    printf ("%d", c[0]);
    for (bR3SQtFK = 1; bR3SQtFK < yWXwPJ2bOdlc; bR3SQtFK++) {
        printf (" %d", c[bR3SQtFK]);
    };
}

