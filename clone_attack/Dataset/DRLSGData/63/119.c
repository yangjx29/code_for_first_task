main () {
    int vfct40TUdOS, D2B8wf, kWhGT9p;
    int gXPv5cC [(1079 - 979)] [(628 - 528)], KOnSfwzuK [(962 - 862)] [(441 - 341)], lFJfbKsAir [(469 - 369)] [100];
    scanf ("%d%d", &vfct40TUdOS, &kWhGT9p);
    {
        int hhEHsTv8QgcO = (228 - 228);
        while (hhEHsTv8QgcO < vfct40TUdOS) {
            {
                int pGdCa54 = (188 - 188);
                while (pGdCa54 < kWhGT9p) {
                    scanf ("%d", &gXPv5cC[hhEHsTv8QgcO][pGdCa54]);
                    pGdCa54++;
                }
            }
            hhEHsTv8QgcO++;
        }
    }
    scanf ("%d%d", &kWhGT9p, &D2B8wf);
    {
        int hhEHsTv8QgcO = (420 - 420);
        while (hhEHsTv8QgcO < kWhGT9p) {
            {
                int pGdCa54 = (212 - 212);
                while (pGdCa54 < D2B8wf) {
                    scanf ("%d", &KOnSfwzuK[hhEHsTv8QgcO][pGdCa54]);
                    pGdCa54++;
                }
            }
            hhEHsTv8QgcO++;
        }
    }
    {
        int hhEHsTv8QgcO = (489 - 489);
        while (hhEHsTv8QgcO < vfct40TUdOS) {
            {
                int pGdCa54 = 0;
                while (pGdCa54 < D2B8wf) {
                    lFJfbKsAir[hhEHsTv8QgcO][pGdCa54] = 0;
                    {
                        int RxcYWZt = 0;
                        while (RxcYWZt < kWhGT9p) {
                            lFJfbKsAir[hhEHsTv8QgcO][pGdCa54] = lFJfbKsAir[hhEHsTv8QgcO][pGdCa54] + gXPv5cC[hhEHsTv8QgcO][RxcYWZt] * KOnSfwzuK[RxcYWZt][pGdCa54];
                            RxcYWZt++;
                        }
                    }
                    pGdCa54++;
                }
            }
            hhEHsTv8QgcO++;
        }
    }
    {
        int hhEHsTv8QgcO = 0;
        while (hhEHsTv8QgcO < vfct40TUdOS) {
            {
                int pGdCa54 = 0;
                while (pGdCa54 < D2B8wf) {
                    if (pGdCa54 == 0)
                        printf ("%d", lFJfbKsAir[hhEHsTv8QgcO][pGdCa54]);
                    else
                        printf (" %d", lFJfbKsAir[hhEHsTv8QgcO][pGdCa54]);
                    pGdCa54++;
                }
            }
            printf ("\n");
            hhEHsTv8QgcO++;
        }
    }
}

