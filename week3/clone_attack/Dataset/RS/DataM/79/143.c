void  main () {
    int kpzf0I8b [301];
    int CYvyx1 [(901 - 851)];
    int z6MlNm;
    int rT1Mlw;
    int nXvmdH5E8CGz;
    int eItEA1;
    int W0eTdgFuo [(785 - 735)];
    int OvzyIj4A [(214 - 164)];
    int rd9Gc2;
    int gkAGDaBsp2;
    for (nXvmdH5E8CGz = (484 - 483); (391 - 341) >= nXvmdH5E8CGz; nXvmdH5E8CGz++) {
        scanf ("%d %d", &W0eTdgFuo[nXvmdH5E8CGz], &OvzyIj4A[nXvmdH5E8CGz]);
        if (!((582 - 582) != W0eTdgFuo[nXvmdH5E8CGz]))
            break;
    }
    for (nXvmdH5E8CGz = (197 - 196);; nXvmdH5E8CGz++) {
        if (!(0 != W0eTdgFuo[nXvmdH5E8CGz]))
            break;
        for (z6MlNm = (898 - 897); z6MlNm <= W0eTdgFuo[nXvmdH5E8CGz]; z6MlNm++) {
            kpzf0I8b[z6MlNm] = z6MlNm;
        }
        z6MlNm = (87 - 86);
        for (rT1Mlw = W0eTdgFuo[nXvmdH5E8CGz]; rT1Mlw >= (405 - 403); rT1Mlw = rT1Mlw - 1) {
            z6MlNm = (z6MlNm + OvzyIj4A[nXvmdH5E8CGz] - 2) % rT1Mlw + (830 - 829);
            for (eItEA1 = z6MlNm; eItEA1 <= rT1Mlw - 1; eItEA1 = eItEA1 + 1) {
                kpzf0I8b[eItEA1] = kpzf0I8b[eItEA1 + 1];
            };
        }
        CYvyx1[nXvmdH5E8CGz] = kpzf0I8b[1];
    }
    for (z6MlNm = 1; z6MlNm <= nXvmdH5E8CGz - 1; z6MlNm++) {
        printf ("%d\n", CYvyx1[z6MlNm]);
    };
}

