int main () {
    int kJqSgeIUmc;
    int h3Ku2V;
    int Ox2qtp0j7NB;
    int KmidtuQ;
    int vAdoZeQO;
    int lQBz4Jk75 [1000];
    int rR9nCs1rlmL [1000];
    kJqSgeIUmc = -1;
    scanf ("%d", &h3Ku2V);
    {
        Ox2qtp0j7NB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (h3Ku2V > Ox2qtp0j7NB) {
            scanf ("%d", &lQBz4Jk75[Ox2qtp0j7NB]);
            Ox2qtp0j7NB = Ox2qtp0j7NB +1;
        };
    }
    {
        KmidtuQ = 1;
        while (KmidtuQ <= h3Ku2V) {
            {
                int rR9nCs1rlmL = 0;
                while (rR9nCs1rlmL < h3Ku2V - KmidtuQ) {
                    if (lQBz4Jk75[rR9nCs1rlmL + 1] < lQBz4Jk75[rR9nCs1rlmL]) {
                        vAdoZeQO = lQBz4Jk75[rR9nCs1rlmL + 1];
                        lQBz4Jk75[rR9nCs1rlmL + 1] = lQBz4Jk75[rR9nCs1rlmL];
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
                        lQBz4Jk75[rR9nCs1rlmL] = vAdoZeQO;
                    }
                    rR9nCs1rlmL = rR9nCs1rlmL + 1;
                };
            }
            KmidtuQ++;
        };
    }
    {
        int Qqm0Ma3bZ = 0;
        while (Qqm0Ma3bZ < h3Ku2V) {
            if (lQBz4Jk75[Qqm0Ma3bZ] % 2 == 1) {
                kJqSgeIUmc++;
                rR9nCs1rlmL[kJqSgeIUmc] = lQBz4Jk75[Qqm0Ma3bZ];
            }
            Qqm0Ma3bZ++;
        };
    }
    {
        int O4hPAFcJe = 0;
        while (O4hPAFcJe <= kJqSgeIUmc) {
            if (O4hPAFcJe < kJqSgeIUmc) {
                printf ("%d,", rR9nCs1rlmL[O4hPAFcJe]);
            }
            else if (O4hPAFcJe == kJqSgeIUmc) {
                printf ("%d", rR9nCs1rlmL[O4hPAFcJe]);
            }
            O4hPAFcJe++;
        };
    }
    return 0;
}

