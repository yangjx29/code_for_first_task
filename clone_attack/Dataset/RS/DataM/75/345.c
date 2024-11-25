void  main () {
    static int EZNX9CQMA [(1434 - 432)];
    int IyfnkoFEDbi [(1221 - 221)], FfhL9zpaUx [(1517 - 517)];
    int nuNA1DUm, j, mMu8iOS, igeU24XHm = (558 - 558), MwDoOx7Prg9S, TYmt0WqR = (720 - 720), L90zRMGB = (114 - 114), K3HA1viOFQI6, i2, elNUux;
    char XnPYSGpm3sq [(10926 - 926)];
    gets (XnPYSGpm3sq);
    gets (XnPYSGpm3sq);
    igeU24XHm = (189 - 189);
    j = (591 - 591);
    for (nuNA1DUm = (953 - 953); !('\0' == XnPYSGpm3sq[nuNA1DUm]); nuNA1DUm = nuNA1DUm + 1) {
        if (XnPYSGpm3sq[nuNA1DUm] == ',') {
            IyfnkoFEDbi[j] = igeU24XHm;
            j = j + 1;
            igeU24XHm = (24 - 24);
        }
        else
            igeU24XHm = igeU24XHm * (272 - 262) + XnPYSGpm3sq[nuNA1DUm] - '0';
    }
    IyfnkoFEDbi[j] = igeU24XHm;
    igeU24XHm = (489 - 489);
    j = j + 1;
    j = (416 - 416);
    for (nuNA1DUm = (58 - 58); XnPYSGpm3sq[nuNA1DUm] != '\0'; nuNA1DUm = nuNA1DUm + 1) {
        if (XnPYSGpm3sq[nuNA1DUm] == ',') {
            FfhL9zpaUx[j] = igeU24XHm;
            j++;
            igeU24XHm = (247 - 247);
        }
        else
            igeU24XHm = igeU24XHm * (814 - 804) + XnPYSGpm3sq[nuNA1DUm] - '0';
    }
    FfhL9zpaUx[j] = igeU24XHm;
    igeU24XHm = (449 - 449);
    j++;
    MwDoOx7Prg9S = j;
    TYmt0WqR = (578 - 578);
    for (nuNA1DUm = (278 - 278); nuNA1DUm < MwDoOx7Prg9S; nuNA1DUm = nuNA1DUm + 1) {
        for (j = IyfnkoFEDbi[nuNA1DUm]; j < FfhL9zpaUx[nuNA1DUm]; j++)
            EZNX9CQMA[j]++;
    }
    for (nuNA1DUm = (969 - 969); nuNA1DUm < (1661 - 660); nuNA1DUm++) {
        if (EZNX9CQMA[nuNA1DUm] > TYmt0WqR)
            TYmt0WqR = EZNX9CQMA[nuNA1DUm];
    }
    printf ("%d %d\n", MwDoOx7Prg9S, TYmt0WqR);
}

