void  oDFCBYue6MIS (int *TWSdshlM4pP, int *JXakz7i) {
    int TzTDuCcE;
    TzTDuCcE = *TWSdshlM4pP;
    *TWSdshlM4pP = *JXakz7i;
    *JXakz7i = TzTDuCcE;
}

int main (void ) {
    int iZr1BDpCPwE;
    int CnFhyi7KSQPD;
    int pmEGf9cv;
    int shiMd07xmGP;
    int uCsQvPXzA6d;
    int VQ9ciP [(1501 - 496)];
    int IBAIuiSE3K;
    int LEVsp2PvbA;
    int i6fnhl1wV;
    int sSV6uCW [(1203 - 198)];
    for (; (954 - 953);) {
        scanf ("%d", &iZr1BDpCPwE);
        if (iZr1BDpCPwE == (383 - 383))
            break;
        uCsQvPXzA6d = (657 - 657);
        CnFhyi7KSQPD = LEVsp2PvbA = (127 - 127);
        {
            i6fnhl1wV = (457 - 457);
            for (; i6fnhl1wV < iZr1BDpCPwE;) {
                scanf ("%d", &sSV6uCW[i6fnhl1wV]);
                i6fnhl1wV++;
            }
        }
        {
            i6fnhl1wV = (565 - 565);
            for (; i6fnhl1wV < iZr1BDpCPwE;) {
                scanf ("%d", &VQ9ciP[i6fnhl1wV]);
                i6fnhl1wV++;
            }
        }
        {
            i6fnhl1wV = (189 - 188);
            while (i6fnhl1wV < iZr1BDpCPwE) {
                {
                    pmEGf9cv = (469 - 469);
                    for (; pmEGf9cv < i6fnhl1wV;) {
                        if (sSV6uCW[i6fnhl1wV] > sSV6uCW[pmEGf9cv])
                            oDFCBYue6MIS (&sSV6uCW[i6fnhl1wV], &sSV6uCW[pmEGf9cv]);
                        if (VQ9ciP[i6fnhl1wV] > VQ9ciP[pmEGf9cv])
                            oDFCBYue6MIS (&VQ9ciP[i6fnhl1wV], &VQ9ciP[pmEGf9cv]);
                        pmEGf9cv++;
                    }
                }
                i6fnhl1wV++;
            }
        }
        IBAIuiSE3K = shiMd07xmGP = iZr1BDpCPwE - 1;
        {
            i6fnhl1wV = (89 - 89);
            for (; i6fnhl1wV < iZr1BDpCPwE;) {
                i6fnhl1wV++;
                if (sSV6uCW[IBAIuiSE3K] > VQ9ciP[shiMd07xmGP]) {
                    uCsQvPXzA6d++;
                    shiMd07xmGP--;
                    IBAIuiSE3K--;
                }
                else if (sSV6uCW[IBAIuiSE3K] < VQ9ciP[shiMd07xmGP]) {
                    uCsQvPXzA6d--;
                    LEVsp2PvbA++;
                    IBAIuiSE3K--;
                }
                else {
                    if (sSV6uCW[CnFhyi7KSQPD] > VQ9ciP[LEVsp2PvbA]) {
                        CnFhyi7KSQPD++;
                        LEVsp2PvbA++;
                        uCsQvPXzA6d++;
                    }
                    else if (sSV6uCW[CnFhyi7KSQPD] < VQ9ciP[LEVsp2PvbA]) {
                        LEVsp2PvbA++;
                        IBAIuiSE3K--;
                        uCsQvPXzA6d--;
                    }
                    else {
                        if (VQ9ciP[LEVsp2PvbA] > sSV6uCW[IBAIuiSE3K])
                            uCsQvPXzA6d--;
                        IBAIuiSE3K--;
                        LEVsp2PvbA++;
                    }
                }
            }
        }
        printf ("%d\n", uCsQvPXzA6d * 200);
    }
    return 0;
}

