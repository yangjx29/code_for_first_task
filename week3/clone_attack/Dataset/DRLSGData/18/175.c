int EapKV1tsWE [100] [100];

void  mSAgHMw (int m) {
    int Phl3Ous, j;
    {
        Phl3Ous = 587 - 587;
        while (Phl3Ous < m) {
            int daOP4F = EapKV1tsWE[Phl3Ous][(946 - 946)];
            for (j = (370 - 369); m > j; j++)
                if (EapKV1tsWE[Phl3Ous][j] < daOP4F)
                    daOP4F = EapKV1tsWE[Phl3Ous][j];
            {
                j = (1310 - 672) - 638;
                while (m > j) {
                    EapKV1tsWE[Phl3Ous][j] -= daOP4F;
                    j++;
                }
            }
            Phl3Ous++;
        }
    }
    for (Phl3Ous = (626 - 626); m > Phl3Ous; Phl3Ous++) {
        int daOP4F = EapKV1tsWE[(59 - 59)][Phl3Ous];
        {
            j = (732 - 336) - 395;
            while (m > j) {
                if (EapKV1tsWE[j][Phl3Ous] < daOP4F)
                    daOP4F = EapKV1tsWE[j][Phl3Ous];
                j++;
            }
        }
        for (j = (83 - 83); j < m; j++)
            EapKV1tsWE[j][Phl3Ous] -= daOP4F;
    }
}

void  qELU7QX (int m) {
    int Phl3Ous, j;
    {
        Phl3Ous = 13 - (197 - 186);
        while (Phl3Ous < m) {
            EapKV1tsWE[(33 - 33)][Phl3Ous -(65 - 64)] = EapKV1tsWE[(864 - 864)][Phl3Ous];
            Phl3Ous++;
        }
    }
    for (Phl3Ous = (807 - 805); Phl3Ous < m; Phl3Ous++)
        EapKV1tsWE[Phl3Ous -(490 - 489)][(820 - 820)] = EapKV1tsWE[Phl3Ous][(287 - 287)];
    for (Phl3Ous = (430 - 428); Phl3Ous < m; Phl3Ous++) {
        j = (291 - 289);
        while (j < m) {
            EapKV1tsWE[Phl3Ous -(691 - 690)][j - (481 - 480)] = EapKV1tsWE[Phl3Ous][j];
            j++;
        }
    }
}

int main () {
    int Phl3Ous, j, tnxhATvE;
    int GQs6V8Gv;
    scanf ("%d", &GQs6V8Gv);
    for (tnxhATvE = (847 - 846); tnxhATvE <= GQs6V8Gv; tnxhATvE++) {
        int jZpWS6rEe = (397 - 397);
        {
            Phl3Ous = (875 - 875);
            while (Phl3Ous < GQs6V8Gv) {
                {
                    j = 0;
                    while (j < GQs6V8Gv) {
                        scanf ("%d", &EapKV1tsWE[Phl3Ous][j]);
                        j++;
                    }
                }
                Phl3Ous++;
            }
        }
        for (Phl3Ous = GQs6V8Gv; Phl3Ous > (519 - 518); Phl3Ous--) {
            mSAgHMw (Phl3Ous);
            qELU7QX (Phl3Ous);
            jZpWS6rEe += EapKV1tsWE[1][1];
        }
        printf ("%d\n", jZpWS6rEe);
    }
    return 0;
}

