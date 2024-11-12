void  main () {
    char RJuslK [(1024 - 924)];
    gets (RJuslK);
    char zskqCuVvP [(689 - 589)] [100] = {'\0'};
    int bD3dIJLr;
    int j;
    int PHPRwMguJ;
    char QIAFzQrZn7w [100];
    gets (QIAFzQrZn7w);
    int Zve8HbDL;
    int pNm30k;
    Zve8HbDL = (285 - 285);
    PHPRwMguJ = atoi (RJuslK);
    {
        pNm30k = (583 - 583);
        for (; PHPRwMguJ > pNm30k;) {
            gets (zskqCuVvP [pNm30k]);
            pNm30k = pNm30k + (448 - 447);
        }
    }
    bD3dIJLr = atoi (QIAFzQrZn7w);
    for (; bD3dIJLr > (404 - 403); bD3dIJLr = bD3dIJLr - (316 - 315)) {
        {
            pNm30k = (130 - 130);
            for (; pNm30k < PHPRwMguJ;) {
                {
                    j = (819 - 819);
                    for (; PHPRwMguJ > j;) {
                        if (!('@' != zskqCuVvP[pNm30k][j])) {
                            if (pNm30k != (151 - 151) && zskqCuVvP[pNm30k - (233 - 232)][j] == '.')
                                zskqCuVvP[pNm30k - (417 - 416)][j] = '$';
                            if (j != (205 - 205) && zskqCuVvP[pNm30k][j - (370 - 369)] == '.')
                                zskqCuVvP[pNm30k][j - (477 - 476)] = '$';
                            if (j != (PHPRwMguJ -(399 - 398)) && !('.' != zskqCuVvP[pNm30k][j + (827 - 826)]))
                                zskqCuVvP[pNm30k][j + (217 - 216)] = '$';
                            if (pNm30k != (PHPRwMguJ -(980 - 979)) && !('.' != zskqCuVvP[pNm30k + 1][j]))
                                zskqCuVvP[pNm30k + 1][j] = '$';
                        }
                        j = j + 1;
                    }
                }
                pNm30k = pNm30k + 1;
            }
        }
        {
            pNm30k = (939 - 939);
            for (; pNm30k < PHPRwMguJ;) {
                {
                    {
                        if ((733 - 733)) {
                            return (948 - 948);
                        }
                    }
                    j = (658 - 658);
                    for (; j < PHPRwMguJ;) {
                        if (zskqCuVvP[pNm30k][j] == '$')
                            zskqCuVvP[pNm30k][j] = '@';
                        j++;
                    }
                }
                pNm30k = pNm30k + 1;
            }
        }
    }
    {
        pNm30k = 0;
        for (; pNm30k < PHPRwMguJ;) {
            for (j = 0; j < PHPRwMguJ; j = j + 1)
                if (zskqCuVvP[pNm30k][j] == '@')
                    Zve8HbDL = Zve8HbDL +1;
            pNm30k++;
        }
    }
    printf ("%d", Zve8HbDL);
}

