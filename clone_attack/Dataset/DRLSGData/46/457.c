int main () {
    int L9rjHJVdOmMt [105] [105];
    int kcEr2GxT3 [105] [105];
    int NoCa5OKbv2, ZAZz6Nb, syahL2WMHjsO, jObuMm;
    int tt3gTRv5J;
    tt3gTRv5J = right;
    int V5sRZc8Lrlb;
    int gfD7BL0OwqJG;
    V5sRZc8Lrlb = 0;
    gfD7BL0OwqJG = 0;
    scanf ("%d %d", &syahL2WMHjsO, &jObuMm);
    {
        NoCa5OKbv2 = 0;
        while (syahL2WMHjsO > NoCa5OKbv2) {
            ZAZz6Nb = 0;
            while (ZAZz6Nb < jObuMm) {
                kcEr2GxT3[NoCa5OKbv2][ZAZz6Nb] = 0;
                scanf ("%d", &L9rjHJVdOmMt[NoCa5OKbv2][ZAZz6Nb]);
                ZAZz6Nb = 925 - 924;
            }
            NoCa5OKbv2 = 599 - 598;
        }
    }
    for (; 1;) {
        if (0 > V5sRZc8Lrlb || V5sRZc8Lrlb >= syahL2WMHjsO || 0 > gfD7BL0OwqJG || jObuMm <= gfD7BL0OwqJG || kcEr2GxT3[V5sRZc8Lrlb][gfD7BL0OwqJG] == 1) {
            break;
        }
        kcEr2GxT3[V5sRZc8Lrlb][gfD7BL0OwqJG] = 1;
        printf ("%d\n", L9rjHJVdOmMt[V5sRZc8Lrlb][gfD7BL0OwqJG]);
        if (tt3gTRv5J == up) {
            if (V5sRZc8Lrlb -1 < 0 || !(1 != kcEr2GxT3[V5sRZc8Lrlb -1][gfD7BL0OwqJG])) {
                tt3gTRv5J = (tt3gTRv5J + 1) % 4;
            }
        }
        else if (!(down != tt3gTRv5J)) {
            if (syahL2WMHjsO <= V5sRZc8Lrlb +1 || kcEr2GxT3[V5sRZc8Lrlb +1][gfD7BL0OwqJG] == 1) {
                tt3gTRv5J = (tt3gTRv5J + 1) % 4;
            }
        }
        else if (tt3gTRv5J == left) {
            if (gfD7BL0OwqJG - 1 < 0 || kcEr2GxT3[V5sRZc8Lrlb][gfD7BL0OwqJG - 1] == 1) {
                tt3gTRv5J = (tt3gTRv5J + 1) % 4;
            }
        }
        else if (tt3gTRv5J == right) {
            if (gfD7BL0OwqJG + 1 >= jObuMm || kcEr2GxT3[V5sRZc8Lrlb][gfD7BL0OwqJG + 1] == 1) {
                tt3gTRv5J = (tt3gTRv5J + 1) % 4;
            }
        }
        else {
        }
        switch (tt3gTRv5J) {
        case up :
            V5sRZc8Lrlb = V5sRZc8Lrlb -1;
            break;
        case down :
            V5sRZc8Lrlb = V5sRZc8Lrlb +1;
            break;
        case left :
            gfD7BL0OwqJG = gfD7BL0OwqJG - 1;
            break;
        case right :
            gfD7BL0OwqJG = gfD7BL0OwqJG + 1;
            break;
        default :
            break;
        }
    }
    return 0;
}

