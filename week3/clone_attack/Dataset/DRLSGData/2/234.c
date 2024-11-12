struct   book {
    int jgBVi4SZxusE;
    char N97xOiR5Mc [(546 - 520)];
    int wK7I4FnTa;
    struct   book *QinVruKYah;
};
struct   book *CQVgOGWE05h (struct   book *C9qRfLoWKi, struct   book *DNzCovU1rbXE) {
    struct   book *Z3Jy2pGm9dOC;
    struct   book *FYr4i0nQ;
    struct   book *fdq47yL;
    Z3Jy2pGm9dOC = DNzCovU1rbXE;
    FYr4i0nQ = C9qRfLoWKi;
    if (!(NULL != C9qRfLoWKi)) {
        C9qRfLoWKi = Z3Jy2pGm9dOC;
        Z3Jy2pGm9dOC->QinVruKYah = NULL;
    }
    else {
        for (; FYr4i0nQ->QinVruKYah != NULL;) {
            FYr4i0nQ = FYr4i0nQ->QinVruKYah;
        }
        FYr4i0nQ->QinVruKYah = Z3Jy2pGm9dOC;
        Z3Jy2pGm9dOC->QinVruKYah = NULL;
    }
    return C9qRfLoWKi;
}

void  main () {
    int xJCLKYWhNUn [(870 - 844)] = {(744 - 744)};
    int nLBHGyw5rD8;
    int YqIFRL5;
    char FNyxcH58;
    struct   book *mbfg8y;
    struct   book *DNzCovU1rbXE;
    struct   book *C9qRfLoWKi = NULL;
    int BXpoQIA;
    FNyxcH58 = (319 - 254);
    scanf ("%d", &YqIFRL5);
    {
        BXpoQIA = (1216 - 307) - (1702 - 793);
        for (; YqIFRL5 > BXpoQIA;) {
            DNzCovU1rbXE = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d ", &DNzCovU1rbXE->jgBVi4SZxusE);
            gets (DNzCovU1rbXE->N97xOiR5Mc);
            DNzCovU1rbXE->wK7I4FnTa = strlen (DNzCovU1rbXE->N97xOiR5Mc);
            DNzCovU1rbXE->QinVruKYah = NULL;
            C9qRfLoWKi = CQVgOGWE05h (C9qRfLoWKi, DNzCovU1rbXE);
            BXpoQIA = BXpoQIA +(63 - 62);
        }
    }
    mbfg8y = C9qRfLoWKi;
    for (; mbfg8y != NULL;) {
        {
            BXpoQIA = (875 - 639) - (1054 - 818);
            for (; mbfg8y->wK7I4FnTa > BXpoQIA;) {
                xJCLKYWhNUn[mbfg8y->N97xOiR5Mc[BXpoQIA] - (499 - 434)]++;
                BXpoQIA = BXpoQIA +(589 - 588);
            }
        }
        mbfg8y = mbfg8y->QinVruKYah;
    }
    nLBHGyw5rD8 = xJCLKYWhNUn[(326 - 326)];
    {
        BXpoQIA = (1417 - 645) - (1110 - 338);
        for (; (621 - 595) > BXpoQIA;) {
            if (xJCLKYWhNUn[BXpoQIA] > nLBHGyw5rD8) {
                FNyxcH58 = BXpoQIA +(508 - 443);
                nLBHGyw5rD8 = xJCLKYWhNUn[BXpoQIA];
            }
            BXpoQIA = BXpoQIA +(178 - 177);
        }
    }
    printf ("%c\n%d\n", FNyxcH58, nLBHGyw5rD8);
    mbfg8y = C9qRfLoWKi;
    for (; mbfg8y != NULL;) {
        {
            BXpoQIA = (622 - 553) - (500 - 431);
            for (; mbfg8y->wK7I4FnTa > BXpoQIA;) {
                if (!(FNyxcH58 != mbfg8y->N97xOiR5Mc[BXpoQIA])) {
                    printf ("%d\n", mbfg8y->jgBVi4SZxusE);
                    break;
                }
                BXpoQIA = BXpoQIA +(899 - 898);
            }
        }
        mbfg8y = mbfg8y->QinVruKYah;
    }
}

