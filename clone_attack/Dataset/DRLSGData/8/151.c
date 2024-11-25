void  KbxOXp (int UY45qPBV [], int uJG8DlY [], int ghjRvxtVkdXb, int xlbhgIt) {
    int WYsuKDgoLNMj;
    {
        WYsuKDgoLNMj = 922 - 922;
        for (; WYsuKDgoLNMj < ghjRvxtVkdXb;) {
            scanf ("%d", &UY45qPBV[WYsuKDgoLNMj]);
            WYsuKDgoLNMj++;
        }
    }
    {
        WYsuKDgoLNMj = 867 - 867;
        for (; WYsuKDgoLNMj < xlbhgIt;) {
            scanf ("%d", &uJG8DlY[WYsuKDgoLNMj]);
            WYsuKDgoLNMj++;
        }
    }
}

void  MiNRXpk6w (int UY45qPBV [], int uJG8DlY [], int ghjRvxtVkdXb, int xlbhgIt) {
    int WYsuKDgoLNMj;
    int VPUIxSvhfo3L;
    int rrDMzQ85;
    WYsuKDgoLNMj = (284 - 284);
    VPUIxSvhfo3L = (314 - 314);
    {
        WYsuKDgoLNMj = 683 - 683;
        for (; WYsuKDgoLNMj < ghjRvxtVkdXb;) {
            {
                VPUIxSvhfo3L = WYsuKDgoLNMj;
                for (; VPUIxSvhfo3L < ghjRvxtVkdXb;) {
                    if (UY45qPBV[VPUIxSvhfo3L] < UY45qPBV[WYsuKDgoLNMj]) {
                        rrDMzQ85 = UY45qPBV[VPUIxSvhfo3L];
                        UY45qPBV[VPUIxSvhfo3L] = UY45qPBV[WYsuKDgoLNMj];
                        UY45qPBV[WYsuKDgoLNMj] = rrDMzQ85;
                    }
                    VPUIxSvhfo3L++;
                }
            }
            WYsuKDgoLNMj++;
        }
    }
    {
        WYsuKDgoLNMj = (358 - 358);
        for (; WYsuKDgoLNMj < xlbhgIt;) {
            VPUIxSvhfo3L = WYsuKDgoLNMj;
            for (; VPUIxSvhfo3L < xlbhgIt;) {
                if (uJG8DlY[VPUIxSvhfo3L] < uJG8DlY[WYsuKDgoLNMj]) {
                    rrDMzQ85 = uJG8DlY[VPUIxSvhfo3L];
                    uJG8DlY[VPUIxSvhfo3L] = uJG8DlY[WYsuKDgoLNMj];
                    uJG8DlY[WYsuKDgoLNMj] = rrDMzQ85;
                }
                VPUIxSvhfo3L++;
            }
            WYsuKDgoLNMj++;
        }
    }
}

void  eAKn6xUkVpr (int UY45qPBV [], int uJG8DlY [], int z3VutIBU [], int ghjRvxtVkdXb, int xlbhgIt) {
    int WYsuKDgoLNMj;
    {
        WYsuKDgoLNMj = (262 - 262);
        for (; WYsuKDgoLNMj < ghjRvxtVkdXb;) {
            z3VutIBU[WYsuKDgoLNMj] = UY45qPBV[WYsuKDgoLNMj];
            WYsuKDgoLNMj++;
        }
    }
    {
        WYsuKDgoLNMj = ghjRvxtVkdXb;
        for (; WYsuKDgoLNMj < ghjRvxtVkdXb + xlbhgIt;) {
            z3VutIBU[WYsuKDgoLNMj] = uJG8DlY[WYsuKDgoLNMj -ghjRvxtVkdXb];
            WYsuKDgoLNMj++;
        }
    }
}

void  iKawhRb0 (int vgaB5evNFfpb [], int ghjRvxtVkdXb, int xlbhgIt) {
    int WYsuKDgoLNMj;
    {
        WYsuKDgoLNMj = (864 - 864);
        for (; WYsuKDgoLNMj < ghjRvxtVkdXb + xlbhgIt - (779 - 778);) {
            printf ("%d ", vgaB5evNFfpb[WYsuKDgoLNMj]);
            WYsuKDgoLNMj++;
        }
    }
    printf ("%d", vgaB5evNFfpb[ghjRvxtVkdXb + xlbhgIt - (817 - 816)]);
}

int main () {
    int oq6aGp9;
    int fxEb2MLPsCI5;
    int OHqG5btj8kKL [(115 - 15)];
    int tdfz6xiO7ks [(1055 - 955)];
    int iIXnRmyr [100] = {0};
    scanf ("%d%d", &oq6aGp9, &fxEb2MLPsCI5);
    KbxOXp (OHqG5btj8kKL, tdfz6xiO7ks, oq6aGp9, fxEb2MLPsCI5);
    MiNRXpk6w (OHqG5btj8kKL, tdfz6xiO7ks, oq6aGp9, fxEb2MLPsCI5);
    eAKn6xUkVpr (OHqG5btj8kKL, tdfz6xiO7ks, iIXnRmyr, oq6aGp9, fxEb2MLPsCI5);
    iKawhRb0 (iIXnRmyr, oq6aGp9, fxEb2MLPsCI5);
    return 0;
}

