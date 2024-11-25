int main () {
    int DpcmUq [11] [11];
    int YBgKZvtM3jD [11] [11];
    int pRaVBDJ;
    int Imj4uA0;
    {
        int bhyxmPkgMiNL;
        bhyxmPkgMiNL = 0;
        while (bhyxmPkgMiNL < 11) {
            {
                int eR30GlI = 0;
                while (eR30GlI < 11) {
                    YBgKZvtM3jD[bhyxmPkgMiNL][eR30GlI] = 0;
                    DpcmUq[bhyxmPkgMiNL][eR30GlI] = 0;
                    eR30GlI = eR30GlI + 1;
                }
            }
            bhyxmPkgMiNL = bhyxmPkgMiNL + 1;
        }
    }
    scanf ("%d %d", &Imj4uA0, &pRaVBDJ);
    YBgKZvtM3jD[5][5] = Imj4uA0;
    {
        int bhyxmPkgMiNL;
        bhyxmPkgMiNL = 0;
        while (bhyxmPkgMiNL < pRaVBDJ) {
            bhyxmPkgMiNL = bhyxmPkgMiNL + 1;
            {
                int rQlYWXMdEi;
                rQlYWXMdEi = 1;
                while (rQlYWXMdEi < 10) {
                    {
                        int PwruiAPf1H;
                        PwruiAPf1H = 1;
                        while (10 > PwruiAPf1H) {
                            DpcmUq[rQlYWXMdEi][PwruiAPf1H] = YBgKZvtM3jD[rQlYWXMdEi][PwruiAPf1H] + YBgKZvtM3jD[rQlYWXMdEi - 1][PwruiAPf1H] + YBgKZvtM3jD[rQlYWXMdEi][PwruiAPf1H -1] + YBgKZvtM3jD[rQlYWXMdEi - 1][PwruiAPf1H -1] + YBgKZvtM3jD[rQlYWXMdEi - 1][PwruiAPf1H +1] + YBgKZvtM3jD[rQlYWXMdEi][PwruiAPf1H +1] + YBgKZvtM3jD[rQlYWXMdEi + 1][PwruiAPf1H +1] + YBgKZvtM3jD[rQlYWXMdEi + 1][PwruiAPf1H] + YBgKZvtM3jD[rQlYWXMdEi + 1][PwruiAPf1H -1];
                            PwruiAPf1H = PwruiAPf1H +1;
                        }
                    }
                    rQlYWXMdEi = rQlYWXMdEi + 1;
                }
            }
            {
                int rQlYWXMdEi;
                rQlYWXMdEi = 1;
                while (10 > rQlYWXMdEi) {
                    {
                        int PwruiAPf1H;
                        PwruiAPf1H = 1;
                        while (PwruiAPf1H < 10) {
                            YBgKZvtM3jD[rQlYWXMdEi][PwruiAPf1H] = YBgKZvtM3jD[rQlYWXMdEi][PwruiAPf1H] + DpcmUq[rQlYWXMdEi][PwruiAPf1H];
                            PwruiAPf1H = PwruiAPf1H +1;
                        }
                    }
                    rQlYWXMdEi = rQlYWXMdEi + 1;
                }
            }
        }
    }
    {
        int bhyxmPkgMiNL;
        bhyxmPkgMiNL = 1;
        while (10 > bhyxmPkgMiNL) {
            {
                int eR30GlI;
                eR30GlI = 1;
                while (10 > eR30GlI) {
                    if (eR30GlI == 1)
                        printf ("%d", YBgKZvtM3jD[bhyxmPkgMiNL][eR30GlI]);
                    else
                        printf (" %d", YBgKZvtM3jD[bhyxmPkgMiNL][eR30GlI]);
                    eR30GlI = eR30GlI + 1;
                }
            }
            bhyxmPkgMiNL = bhyxmPkgMiNL + 1;
            printf ("\n");
        }
    }
    return 0;
}

