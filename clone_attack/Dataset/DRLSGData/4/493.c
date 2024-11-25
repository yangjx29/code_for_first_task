void  main () {
    int wh7fIU2RHSMT;
    int E7eD5N;
    int wYNVHvKiMp0;
    int kSMtz1iesI;
    int mHY4I5Baf;
    int PLStOZDl [100] [100];
    int TYrd3W6;
    int KOK8MR;
    int qHroOWTzGQ;
    scanf ("%d%d", &wh7fIU2RHSMT, &qHroOWTzGQ);
    {
        mHY4I5Baf = 0;
        for (; wh7fIU2RHSMT > mHY4I5Baf;) {
            {
                kSMtz1iesI = 0;
                for (; qHroOWTzGQ > kSMtz1iesI;) {
                    scanf ("%d", &PLStOZDl[mHY4I5Baf][kSMtz1iesI]);
                    kSMtz1iesI = kSMtz1iesI + 1;
                }
            }
            mHY4I5Baf = mHY4I5Baf + 1;
        }
    }
    if (wh7fIU2RHSMT <= qHroOWTzGQ) {
        {
            TYrd3W6 = 0;
            for (; TYrd3W6 < qHroOWTzGQ;) {
                {
                    wYNVHvKiMp0 = 0;
                    for (; wh7fIU2RHSMT > wYNVHvKiMp0 && wYNVHvKiMp0 <= TYrd3W6;) {
                        printf ("%d\n", PLStOZDl[wYNVHvKiMp0][TYrd3W6 -wYNVHvKiMp0]);
                        wYNVHvKiMp0 = wYNVHvKiMp0 + 1;
                    }
                }
                TYrd3W6 = TYrd3W6 +1;
            }
        }
        {
            E7eD5N = 1;
            for (; E7eD5N < wh7fIU2RHSMT;) {
                {
                    KOK8MR = 0;
                    for (; wh7fIU2RHSMT - E7eD5N > KOK8MR;) {
                        printf ("%d\n", PLStOZDl[E7eD5N +KOK8MR][qHroOWTzGQ - 1 - KOK8MR]);
                        KOK8MR = KOK8MR +1;
                    }
                }
                E7eD5N = E7eD5N +1;
            }
        }
    }
    else {
        {
            TYrd3W6 = 0;
            for (; TYrd3W6 < qHroOWTzGQ;) {
                {
                    wYNVHvKiMp0 = 0;
                    for (; wYNVHvKiMp0 < wh7fIU2RHSMT && wYNVHvKiMp0 <= TYrd3W6;) {
                        printf ("%d\n", PLStOZDl[wYNVHvKiMp0][TYrd3W6 -wYNVHvKiMp0]);
                        wYNVHvKiMp0 = wYNVHvKiMp0 + 1;
                    }
                }
                TYrd3W6 = TYrd3W6 +1;
            }
        }
        {
            E7eD5N = 1;
            for (; E7eD5N < wh7fIU2RHSMT;) {
                KOK8MR = 0;
                for (; KOK8MR < wh7fIU2RHSMT - E7eD5N &&KOK8MR < qHroOWTzGQ;) {
                    printf ("%d\n", PLStOZDl[E7eD5N +KOK8MR][qHroOWTzGQ - 1 - KOK8MR]);
                    KOK8MR = KOK8MR +1;
                }
                E7eD5N = E7eD5N +1;
            }
        }
    }
}

