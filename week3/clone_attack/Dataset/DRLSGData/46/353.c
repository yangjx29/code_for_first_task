int main () {
    char sLuVkbA;
    int U0pSou4GW7M, GuiC4OA, OsQdV9LWRxSy;
    int A1iPG38fh [(699 - 598)] [101];
    int jX3DbjzEhTFM, LBftkU8sh, col1, lYHDrEn9;
    col1 = 0;
    sLuVkbA = 'r';
    scanf ("%d %d", &LBftkU8sh, &lYHDrEn9);
    jX3DbjzEhTFM = 0;
    {
        GuiC4OA = 651 - 651;
        for (; LBftkU8sh > GuiC4OA;) {
            for (OsQdV9LWRxSy = (406 - 406); lYHDrEn9 > OsQdV9LWRxSy; OsQdV9LWRxSy++) {
                scanf ("%d", &(A1iPG38fh[GuiC4OA][OsQdV9LWRxSy]));
            }
            GuiC4OA++;
        };
    }
    LBftkU8sh = LBftkU8sh -(722 - 721);
    GuiC4OA = (733 - 733);
    U0pSou4GW7M = LBftkU8sh *lYHDrEn9;
    lYHDrEn9 = lYHDrEn9 - (740 - 739);
    OsQdV9LWRxSy = -(965 - 964);
    for (; U0pSou4GW7M;) {
        switch (sLuVkbA) {
        case 'l' :
            OsQdV9LWRxSy--;
            if (!(col1 != OsQdV9LWRxSy)) {
                LBftkU8sh--;
                sLuVkbA = 'u';
            }
            break;
        case 'r' :
            OsQdV9LWRxSy++;
            if (OsQdV9LWRxSy == lYHDrEn9) {
                {
                    if (0) {
                        return 0;
                    };
                }
                jX3DbjzEhTFM++;
                sLuVkbA = 'd';
            }
            break;
        case 'u' :
            GuiC4OA--;
            if (GuiC4OA == jX3DbjzEhTFM) {
                col1++;
                sLuVkbA = 'r';
            }
            break;
        case 'd' :
            GuiC4OA++;
            if (GuiC4OA == LBftkU8sh) {
                lYHDrEn9--;
                sLuVkbA = 'l';
            };
        }
        U0pSou4GW7M--;
        printf ("%d\n", A1iPG38fh[GuiC4OA][OsQdV9LWRxSy]);
    }
    return 0;
}

