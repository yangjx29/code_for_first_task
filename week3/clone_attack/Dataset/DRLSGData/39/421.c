int main () {
    int J9iSazyXQc8;
    int Y0RNbLiur;
    int WfWu48VBydt [100];
    int HNR6Hs;
    int hkzh6J8Uv4W9;
    int pKPHC6z4yp;
    int WzX25pS;
    char e0btmZf, Mb7PsJ, xy9Cmp [(648 - 548)] [20];
    int alpBZ3yE [100];
    scanf ("%d", &WzX25pS);
    {
        Y0RNbLiur = 0;
        while (WzX25pS > Y0RNbLiur) {
            WfWu48VBydt[Y0RNbLiur] = 0;
            scanf ("%s %d %d %c %c %d", xy9Cmp[Y0RNbLiur], &pKPHC6z4yp, &hkzh6J8Uv4W9, &e0btmZf, &Mb7PsJ, &HNR6Hs);
            if (pKPHC6z4yp > 80 && HNR6Hs >= 1) {
                WfWu48VBydt[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur] + 8000;
            }
            if ((867 - 782) < pKPHC6z4yp && 80 < hkzh6J8Uv4W9) {
                WfWu48VBydt[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur] + 4000;
            }
            if (90 < pKPHC6z4yp) {
                WfWu48VBydt[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur] + (2723 - 723);
            }
            if (!('Y' != Mb7PsJ) && pKPHC6z4yp > 85) {
                WfWu48VBydt[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur] + (1071 - 71);
            }
            if (!('Y' != e0btmZf) && 80 < hkzh6J8Uv4W9) {
                WfWu48VBydt[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur] + (1771 - 921);
            }
            Y0RNbLiur = Y0RNbLiur +1;
        }
    }
    J9iSazyXQc8 = (379 - 379);
    {
        Y0RNbLiur = 0;
        while (Y0RNbLiur < WzX25pS) {
            J9iSazyXQc8 = J9iSazyXQc8 +WfWu48VBydt[Y0RNbLiur];
            alpBZ3yE[Y0RNbLiur] = WfWu48VBydt[Y0RNbLiur];
            Y0RNbLiur = Y0RNbLiur +1;
        }
    }
    {
        Y0RNbLiur = 0;
        while (Y0RNbLiur < WzX25pS) {
            if (WfWu48VBydt[Y0RNbLiur] > WfWu48VBydt[Y0RNbLiur +1])
                WfWu48VBydt[Y0RNbLiur +1] = WfWu48VBydt[Y0RNbLiur];
            Y0RNbLiur++;
        }
    }
    {
        Y0RNbLiur = 0;
        while (Y0RNbLiur < WzX25pS) {
            if (alpBZ3yE[Y0RNbLiur] == WfWu48VBydt[WzX25pS -1]) {
                printf ("%s\n", xy9Cmp[Y0RNbLiur]);
                printf ("%d\n", WfWu48VBydt[WzX25pS -1]);
                break;
            }
            Y0RNbLiur++;
        }
    }
    printf ("%d\n", J9iSazyXQc8);
    return 0;
}

