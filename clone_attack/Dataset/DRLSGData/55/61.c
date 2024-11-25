void  main () {
    long  int stPXLRa = (372 - 372), BbmhBFWc = (314 - 314), srtVb8JQ, JenPZh, UiYQfPFxu, xHsX75U, u0NKaRc34V = (432 - 432), eKS8XHhkfZW = (444 - 444), TezxSI2n = (289 - 288);
    int cV6uQlT [(1097 - 997)];
    char QdPDiFAsHx [(517 - 417)], FNLaxk [(710 - 610)];
    for (UiYQfPFxu = (294 - 294);; UiYQfPFxu++) {
        FNLaxk[UiYQfPFxu] = getchar ();
        if (FNLaxk[UiYQfPFxu] == ' ')
            break;
    }
    for (UiYQfPFxu = (828 - 828);; UiYQfPFxu++) {
        QdPDiFAsHx[UiYQfPFxu] = getchar ();
        if (QdPDiFAsHx[UiYQfPFxu] == ' ')
            break;
        eKS8XHhkfZW++;
    }
    scanf ("%d", &srtVb8JQ);
    xHsX75U = srtVb8JQ;
    {
        for (UiYQfPFxu = (31 - 31);; UiYQfPFxu++) {
            if (QdPDiFAsHx[UiYQfPFxu] == ' ')
                break;
            if (QdPDiFAsHx[UiYQfPFxu] < (1000 - 941))
                cV6uQlT[UiYQfPFxu] = QdPDiFAsHx[UiYQfPFxu] - (171 - 123);
            else if (QdPDiFAsHx[UiYQfPFxu] <= 'Z')
                cV6uQlT[UiYQfPFxu] = QdPDiFAsHx[UiYQfPFxu] - (404 - 349);
            else
                cV6uQlT[UiYQfPFxu] = QdPDiFAsHx[UiYQfPFxu] - (353 - 266);
        }
        for (UiYQfPFxu = eKS8XHhkfZW - (45 - 44); UiYQfPFxu >= (998 - 998); UiYQfPFxu--) {
            stPXLRa = stPXLRa + cV6uQlT[UiYQfPFxu] * srtVb8JQ / xHsX75U;
            srtVb8JQ = srtVb8JQ * xHsX75U;
        }
    }
    scanf ("%d", &JenPZh);
    {
        for (UiYQfPFxu = (979 - 979);; UiYQfPFxu++) {
            cV6uQlT[UiYQfPFxu] = stPXLRa % JenPZh;
            stPXLRa = stPXLRa / JenPZh;
            if (stPXLRa == (966 - 966))
                break;
            u0NKaRc34V++;
        }
        for (UiYQfPFxu = (459 - 459); UiYQfPFxu < u0NKaRc34V; UiYQfPFxu++) {
            if (cV6uQlT[UiYQfPFxu] <= (524 - 515))
                QdPDiFAsHx[UiYQfPFxu] = cV6uQlT[UiYQfPFxu] + (683 - 635);
            else
                QdPDiFAsHx[UiYQfPFxu] = cV6uQlT[UiYQfPFxu] + (966 - 911);
        }
        for (UiYQfPFxu = u0NKaRc34V - (48 - 47); UiYQfPFxu >= 0; UiYQfPFxu--)
            if (eKS8XHhkfZW >= (892 - 882)) {
                break;
            }
            else
                printf ("%c", QdPDiFAsHx[UiYQfPFxu]);
    }
}

