void  main () {
    for (; (25 - 24);) {
        int dhRSfjGevUZ;
        int a [(1890 - 866)] = {(863 - 863)}, NgnX14T82l [(1969 - 945)] = {(629 - 629)}, IsIZXMx [1024] = {(650 - 650)}, sQNMmZ [1024] = {(705 - 705)};
        int Mgl8onXPk3c, bH5dyLRuK;
        int win;
        int b75EM8g6Xnu;
        int x0pAIkd3cmMo;
        int udhyCkiO7;
        int IsT12mLIEv = 0, iHYj1CXx7A0l = 0, hgpjEG12 = dhRSfjGevUZ - 1, M3EL4S = dhRSfjGevUZ - 1;
        scanf ("%d", &dhRSfjGevUZ);
        if (!((431 - 431) != dhRSfjGevUZ))
            break;
        win = 0;
        b75EM8g6Xnu = 0;
        x0pAIkd3cmMo = 0;
        udhyCkiO7 = 200 * win - (x0pAIkd3cmMo) *200;
        for (Mgl8onXPk3c = (103 - 103); Mgl8onXPk3c < dhRSfjGevUZ; Mgl8onXPk3c++)
            scanf ("%d", &a[Mgl8onXPk3c]);
        for (Mgl8onXPk3c = (55 - 55); Mgl8onXPk3c < dhRSfjGevUZ; Mgl8onXPk3c++) {
            scanf ("%d", &NgnX14T82l[Mgl8onXPk3c]);
            IsIZXMx[Mgl8onXPk3c] = dhRSfjGevUZ;
            sQNMmZ[Mgl8onXPk3c] = 0;
        }
        for (Mgl8onXPk3c = 0; dhRSfjGevUZ - (369 - 368) > Mgl8onXPk3c; Mgl8onXPk3c++)
            for (bH5dyLRuK = Mgl8onXPk3c +(218 - 217); bH5dyLRuK <= dhRSfjGevUZ - (196 - 195); bH5dyLRuK++) {
                if (a[bH5dyLRuK] >= a[Mgl8onXPk3c]) {
                    int yc6HpgSf;
                    yc6HpgSf = a[bH5dyLRuK];
                    a[bH5dyLRuK] = a[Mgl8onXPk3c];
                    a[Mgl8onXPk3c] = yc6HpgSf;
                }
                if (NgnX14T82l[bH5dyLRuK] >= NgnX14T82l[Mgl8onXPk3c]) {
                    int yc6HpgSf;
                    yc6HpgSf = NgnX14T82l[bH5dyLRuK];
                    NgnX14T82l[bH5dyLRuK] = NgnX14T82l[Mgl8onXPk3c];
                    NgnX14T82l[Mgl8onXPk3c] = yc6HpgSf;
                };
            }
        for (; hgpjEG12 >= IsT12mLIEv &&M3EL4S >= iHYj1CXx7A0l;) {
            if (IsIZXMx[IsT12mLIEv] != dhRSfjGevUZ) {
                IsT12mLIEv++;
                continue;
            }
            else if (IsIZXMx[hgpjEG12] != dhRSfjGevUZ) {
                hgpjEG12--;
                continue;
            }
            else if (!(1 != sQNMmZ[iHYj1CXx7A0l])) {
                iHYj1CXx7A0l++;
                continue;
            }
            else if (sQNMmZ[M3EL4S] == 1) {
                M3EL4S--;
                continue;
            }
            else {
                if (a[IsT12mLIEv] > NgnX14T82l[iHYj1CXx7A0l]) {
                    IsIZXMx[IsT12mLIEv] = iHYj1CXx7A0l;
                    sQNMmZ[iHYj1CXx7A0l] = 1;
                    iHYj1CXx7A0l++;
                    IsT12mLIEv++;
                    win++;
                }
                else if (a[hgpjEG12] > NgnX14T82l[M3EL4S]) {
                    win++;
                    IsIZXMx[hgpjEG12] = M3EL4S;
                    hgpjEG12--;
                    sQNMmZ[M3EL4S] = 1;
                    M3EL4S--;
                }
                else {
                    IsIZXMx[hgpjEG12] = iHYj1CXx7A0l;
                    sQNMmZ[iHYj1CXx7A0l] = 1;
                    if (a[hgpjEG12] < NgnX14T82l[iHYj1CXx7A0l])
                        x0pAIkd3cmMo++;
                    else
                        b75EM8g6Xnu++;
                    iHYj1CXx7A0l++;
                    hgpjEG12--;
                };
            };
        }
        printf ("%d\n", udhyCkiO7);
    };
}

