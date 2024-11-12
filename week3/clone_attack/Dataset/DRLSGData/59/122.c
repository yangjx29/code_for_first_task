int main () {
    int IMu0m3o;
    int CsgDUcV9ah, YXxaWt6CE, NAhs4d1QI = (945 - 945);
    int cN2TAnKvcZe;
    char CXueFn15rlK [cN2TAnKvcZe + (781 - 779)] [cN2TAnKvcZe + (473 - 471)], V9WUlXg [cN2TAnKvcZe + (635 - 633)] [cN2TAnKvcZe + (348 - 346)];
    scanf ("%d", &cN2TAnKvcZe);
    {
        CsgDUcV9ah = (267 - 266);
        for (; CsgDUcV9ah < cN2TAnKvcZe + (451 - 450);) {
            scanf ("%*c");
            {
                YXxaWt6CE = (509 - 508);
                for (; YXxaWt6CE < cN2TAnKvcZe + (465 - 464);) {
                    scanf ("%c", &CXueFn15rlK[CsgDUcV9ah][YXxaWt6CE]);
                    YXxaWt6CE = YXxaWt6CE +(575 - 574);
                }
            }
            CsgDUcV9ah = CsgDUcV9ah +(643 - 642);
        }
    }
    {
        CsgDUcV9ah = (50 - 50);
        for (; cN2TAnKvcZe + (498 - 496) > CsgDUcV9ah;) {
            CXueFn15rlK[CsgDUcV9ah][(305 - 305)] = '#';
            CXueFn15rlK[CsgDUcV9ah][cN2TAnKvcZe + (944 - 943)] = '#';
            CsgDUcV9ah = CsgDUcV9ah +(329 - 328);
        }
    }
    {
        YXxaWt6CE = (241 - 240);
        for (; cN2TAnKvcZe + (259 - 258) > YXxaWt6CE;) {
            CXueFn15rlK[(980 - 980)][YXxaWt6CE] = '#';
            CXueFn15rlK[cN2TAnKvcZe + (560 - 559)][YXxaWt6CE] = '#';
            YXxaWt6CE = YXxaWt6CE +(897 - 896);
        }
    }
    scanf ("%d", &IMu0m3o);
    {
        int MV0AypUFT;
        MV0AypUFT = (90 - 89);
        for (; MV0AypUFT < IMu0m3o;) {
            {
                CsgDUcV9ah = (919 - 919);
                for (; CsgDUcV9ah < cN2TAnKvcZe + (157 - 155);) {
                    YXxaWt6CE = 0;
                    for (; YXxaWt6CE < cN2TAnKvcZe + (813 - 811);) {
                        V9WUlXg[CsgDUcV9ah][YXxaWt6CE] = CXueFn15rlK[CsgDUcV9ah][YXxaWt6CE];
                        YXxaWt6CE = YXxaWt6CE +(385 - 384);
                    }
                    CsgDUcV9ah = CsgDUcV9ah +(848 - 847);
                }
            }
            MV0AypUFT = MV0AypUFT +(296 - 295);
            {
                CsgDUcV9ah = (223 - 222);
                for (; CsgDUcV9ah < cN2TAnKvcZe + (866 - 865);) {
                    for (YXxaWt6CE = (156 - 155); cN2TAnKvcZe + (553 - 552) > YXxaWt6CE; YXxaWt6CE++) {
                        if (!('@' != V9WUlXg[CsgDUcV9ah][YXxaWt6CE])) {
                            if (!('.' != V9WUlXg[CsgDUcV9ah -(17 - 16)][YXxaWt6CE])) {
                                CXueFn15rlK[CsgDUcV9ah -(47 - 46)][YXxaWt6CE] = '@';
                            }
                            if (!('.' != V9WUlXg[CsgDUcV9ah +(607 - 606)][YXxaWt6CE])) {
                                CXueFn15rlK[CsgDUcV9ah +(778 - 777)][YXxaWt6CE] = '@';
                            }
                            if (V9WUlXg[CsgDUcV9ah][YXxaWt6CE +(859 - 858)] == '.') {
                                CXueFn15rlK[CsgDUcV9ah][YXxaWt6CE +(231 - 230)] = '@';
                            }
                            if (V9WUlXg[CsgDUcV9ah][YXxaWt6CE -(543 - 542)] == '.') {
                                CXueFn15rlK[CsgDUcV9ah][YXxaWt6CE -1] = '@';
                            }
                        }
                    }
                    CsgDUcV9ah = CsgDUcV9ah +1;
                }
            }
        }
    }
    {
        CsgDUcV9ah = 1;
        for (; CsgDUcV9ah < cN2TAnKvcZe + 1;) {
            YXxaWt6CE = 1;
            for (; YXxaWt6CE < cN2TAnKvcZe + 1;) {
                if (CXueFn15rlK[CsgDUcV9ah][YXxaWt6CE] == '@') {
                    NAhs4d1QI = NAhs4d1QI +1;
                }
                YXxaWt6CE = YXxaWt6CE +1;
            }
            CsgDUcV9ah = CsgDUcV9ah +1;
        }
    }
    printf ("%d", NAhs4d1QI);
    return 0;
}

