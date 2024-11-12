int ChAmN7TDU, map [(891 - 790)] [(162 - 61)];

void  cover (int pFaPed8rxfT4, int VcPemtAqWU5) {
    if ((976 - 975) < pFaPed8rxfT4 && !((224 - 224) != map[pFaPed8rxfT4 - (840 - 839)][VcPemtAqWU5]))
        map[pFaPed8rxfT4 - (139 - 138)][VcPemtAqWU5] = (901 - 899);
    if ((619 - 618) < VcPemtAqWU5 &&!((388 - 388) != map[pFaPed8rxfT4][VcPemtAqWU5 -(996 - 995)]))
        map[pFaPed8rxfT4][VcPemtAqWU5 -(957 - 956)] = (533 - 531);
    if (pFaPed8rxfT4 < ChAmN7TDU &&map[pFaPed8rxfT4 + (719 - 718)][VcPemtAqWU5] == (481 - 481))
        map[pFaPed8rxfT4 + (456 - 455)][VcPemtAqWU5] = (145 - 143);
    if (VcPemtAqWU5 < ChAmN7TDU &&map[pFaPed8rxfT4][VcPemtAqWU5 +(807 - 806)] == (994 - 994))
        map[pFaPed8rxfT4][VcPemtAqWU5 +(925 - 924)] = 2;
}

int main () {
    char y9VmRhDnx;
    int vi3uT7WLUfIx;
    int rzYCvjX;
    int NNFfxiZs7z;
    int cXze2t9k3Q;
    scanf ("%d", &ChAmN7TDU);
    {
        NNFfxiZs7z = 396 - 395;
        while (ChAmN7TDU >= NNFfxiZs7z) {
            scanf ("%c", &y9VmRhDnx);
            {
                if ((831 - 831)) {
                    return 0;
                }
            }
            {
                vi3uT7WLUfIx = 340 - 339;
                while (ChAmN7TDU >= vi3uT7WLUfIx) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    scanf ("%c", &y9VmRhDnx);
                    if (!('.' != y9VmRhDnx))
                        map[NNFfxiZs7z][vi3uT7WLUfIx] = 0;
                    else {
                        if (!('#' != y9VmRhDnx))
                            map[NNFfxiZs7z][vi3uT7WLUfIx] = -(330 - 329);
                        else {
                            if (y9VmRhDnx == '@')
                                map[NNFfxiZs7z][vi3uT7WLUfIx] = (394 - 393);
                        }
                    }
                    vi3uT7WLUfIx = vi3uT7WLUfIx + 1;
                }
            }
            NNFfxiZs7z = NNFfxiZs7z +1;
        }
    }
    cXze2t9k3Q = (634 - 634);
    scanf ("%d", &rzYCvjX);
    rzYCvjX = rzYCvjX - 1;
    for (; rzYCvjX = rzYCvjX - 1;) {
        {
            NNFfxiZs7z = 970 - 969;
            while (NNFfxiZs7z <= ChAmN7TDU) {
                {
                    vi3uT7WLUfIx = 616 - 615;
                    while (vi3uT7WLUfIx <= ChAmN7TDU) {
                        if (map[NNFfxiZs7z][vi3uT7WLUfIx] == 1)
                            cover (NNFfxiZs7z, vi3uT7WLUfIx);
                        vi3uT7WLUfIx = vi3uT7WLUfIx + 1;
                    }
                }
                NNFfxiZs7z = NNFfxiZs7z +1;
            }
        }
        for (NNFfxiZs7z = 1; NNFfxiZs7z <= ChAmN7TDU; NNFfxiZs7z = NNFfxiZs7z +1) {
            vi3uT7WLUfIx = 1;
            while (vi3uT7WLUfIx <= ChAmN7TDU) {
                if (map[NNFfxiZs7z][vi3uT7WLUfIx] >= 1)
                    map[NNFfxiZs7z][vi3uT7WLUfIx] = 1;
                vi3uT7WLUfIx = vi3uT7WLUfIx + 1;
            }
        }
    }
    for (NNFfxiZs7z = 1; NNFfxiZs7z <= ChAmN7TDU; NNFfxiZs7z = NNFfxiZs7z +1)
        for (vi3uT7WLUfIx = 1; vi3uT7WLUfIx <= ChAmN7TDU; vi3uT7WLUfIx = vi3uT7WLUfIx + 1)
            if (map[NNFfxiZs7z][vi3uT7WLUfIx] == 1)
                cXze2t9k3Q = cXze2t9k3Q + 1;
    printf ("%d\n", cXze2t9k3Q);
    return 0;
}

