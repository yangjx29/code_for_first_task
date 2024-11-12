void  main () {
    int YZUmMw, k, i, IwsctZHqlnL, KRtqsxg, wgRuEohGv5ls, G1AIV7LR0mT, VatEFO;
    char MR8s2DwQvdLU [1000], Ds3nxeq8o4ZT [1000];
    gets (MR8s2DwQvdLU);
    int Ex3a2NBkmMuT [1000] = {0};
    k = strlen (MR8s2DwQvdLU);
    Ds3nxeq8o4ZT[0] = -1;
    YZUmMw = 1;
    for (i = 0; k > i; i++) {
        if (!(',' != MR8s2DwQvdLU[i])) {
            Ds3nxeq8o4ZT[YZUmMw] = i;
            YZUmMw++;
        }
    }
    Ds3nxeq8o4ZT[YZUmMw] = k;
    if (YZUmMw == 1)
        ;
    else {
        for (i = 0; YZUmMw > i; i++) {
            for (KRtqsxg = Ds3nxeq8o4ZT[i] + 1; Ds3nxeq8o4ZT[i + 1] > KRtqsxg; KRtqsxg++) {
                wgRuEohGv5ls = MR8s2DwQvdLU[KRtqsxg] - '0';
                Ex3a2NBkmMuT[i] = Ex3a2NBkmMuT[i] * 10 + wgRuEohGv5ls;
            }
        }
        G1AIV7LR0mT = Ex3a2NBkmMuT[0];
        for (i = 0; i < YZUmMw; i++) {
            if (G1AIV7LR0mT < Ex3a2NBkmMuT[i])
                G1AIV7LR0mT = Ex3a2NBkmMuT[i];
        }
        for (i = 0; i < YZUmMw; i++) {
            if (Ex3a2NBkmMuT[i] != G1AIV7LR0mT) {
                IwsctZHqlnL = 1;
                break;
            }
        }
        VatEFO = -10000;
        for (i = 0; i < YZUmMw; i++) {
            if (Ex3a2NBkmMuT[i] > VatEFO &&Ex3a2NBkmMuT[i] != G1AIV7LR0mT)
                VatEFO = Ex3a2NBkmMuT[i];
        }
        if (VatEFO == -10000) {
        }
        else
            printf ("%d", VatEFO);
    }
}

