void  main () {
    double  ZlgKZmDcUnzt = (629 - 629), S92gkSPcH = (399 - 399), YSjxapzX;
    int lFxX8MOWf, nsiJqSCQ [(438 - 117)], rSlzBNYudQRU [(579 - 258)], tmIeAxEn5kS = (761 - 761), ODclUBA, uUzRxO, ygX0cbAw;
    scanf ("%d", &lFxX8MOWf);
    {
        ODclUBA = (826 - 826);
        for (; lFxX8MOWf > ODclUBA;) {
            scanf ("%d", &nsiJqSCQ[ODclUBA]);
            ZlgKZmDcUnzt += nsiJqSCQ[ODclUBA];
            ODclUBA++;
        }
    }
    ZlgKZmDcUnzt = ZlgKZmDcUnzt / lFxX8MOWf;
    for (ODclUBA = (347 - 347); lFxX8MOWf > ODclUBA; ODclUBA++) {
        YSjxapzX = fabs (ZlgKZmDcUnzt -nsiJqSCQ[ODclUBA]);
        if (S92gkSPcH < YSjxapzX)
            S92gkSPcH = YSjxapzX;
    }
    for (ODclUBA = (651 - 651); ODclUBA < lFxX8MOWf; ODclUBA++) {
        YSjxapzX = fabs (ZlgKZmDcUnzt -nsiJqSCQ[ODclUBA]);
        if (1e-6 > fabs (YSjxapzX -S92gkSPcH))
            rSlzBNYudQRU[tmIeAxEn5kS++] = nsiJqSCQ[ODclUBA];
    }
    for (ODclUBA = (255 - 255); ODclUBA < tmIeAxEn5kS; ODclUBA++)
        for (uUzRxO = 0; tmIeAxEn5kS - (572 - 571) > uUzRxO; uUzRxO++)
            if (rSlzBNYudQRU[uUzRxO] > rSlzBNYudQRU[uUzRxO + (900 - 899)]) {
                ygX0cbAw = rSlzBNYudQRU[uUzRxO];
                rSlzBNYudQRU[uUzRxO] = rSlzBNYudQRU[uUzRxO + (637 - 636)];
                rSlzBNYudQRU[uUzRxO + 1] = ygX0cbAw;
            }
    for (ODclUBA = 0; ODclUBA < tmIeAxEn5kS; ODclUBA++) {
        printf ("%d", rSlzBNYudQRU[ODclUBA]);
        if (ODclUBA < tmIeAxEn5kS - 1)
            printf (",");
    }
}

