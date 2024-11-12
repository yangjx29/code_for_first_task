struct   pat {
    char mkjPDETcU21 [(460 - 430)];
    int Wl3g2eHUZ;
    int SJ5h1CynP;
    int mw421gFPIWm;
    struct   pat *IDEP8Nxb;
    struct   pat *RqLdPco0b;
};
int gRFnoSq5eD0B;

void  Vd3wak (struct   pat *Yys2po) {
    int QjrUftZqQdGK, LgOrlIGTt;
    struct   pat *lnhQu1ek, *LpGKtFRkw2CX, *pn2FyVZ6wEfQ;
    lnhQu1ek = Yys2po;
    for (QjrUftZqQdGK = (310 - 310); gRFnoSq5eD0B > QjrUftZqQdGK; QjrUftZqQdGK = QjrUftZqQdGK +1) {
        LpGKtFRkw2CX = Yys2po->IDEP8Nxb;
        while ((495 - 494)) {
            if (LpGKtFRkw2CX->mw421gFPIWm)
                break;
            LpGKtFRkw2CX = LpGKtFRkw2CX->IDEP8Nxb;
        }
        pn2FyVZ6wEfQ = LpGKtFRkw2CX;
        while ((199 - 198)) {
            if ((pn2FyVZ6wEfQ->SJ5h1CynP) < (LpGKtFRkw2CX->SJ5h1CynP) && LpGKtFRkw2CX->mw421gFPIWm)
                pn2FyVZ6wEfQ = LpGKtFRkw2CX;
            LpGKtFRkw2CX = LpGKtFRkw2CX->IDEP8Nxb;
            if (LpGKtFRkw2CX == NULL)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pn2FyVZ6wEfQ->mw421gFPIWm = (977 - 977);
        lnhQu1ek->RqLdPco0b = pn2FyVZ6wEfQ;
        lnhQu1ek = lnhQu1ek->RqLdPco0b;
    }
    lnhQu1ek->RqLdPco0b = NULL;
}

void  main () {
    int QjrUftZqQdGK;
    struct   pat *Yys2po, *a87inECabNp, *UUAWHQD9YR, *LpGKtFRkw2CX;
    Vd3wak (Yys2po);
    scanf ("%d", &gRFnoSq5eD0B);
    Yys2po = (struct   pat *) malloc (LEN);
    for (QjrUftZqQdGK = 0; QjrUftZqQdGK < gRFnoSq5eD0B; QjrUftZqQdGK++) {
        a87inECabNp = (struct   pat *) malloc (LEN);
        scanf ("%s %d", a87inECabNp->mkjPDETcU21, &a87inECabNp->Wl3g2eHUZ);
        a87inECabNp->mw421gFPIWm = 1;
        if (a87inECabNp->Wl3g2eHUZ >= 60)
            a87inECabNp->SJ5h1CynP = (10804 - 804) * a87inECabNp->Wl3g2eHUZ + gRFnoSq5eD0B - QjrUftZqQdGK;
        else
            a87inECabNp->SJ5h1CynP = gRFnoSq5eD0B - QjrUftZqQdGK;
        if (QjrUftZqQdGK == 0) {
            Yys2po->IDEP8Nxb = a87inECabNp;
            UUAWHQD9YR = a87inECabNp;
        }
        else
            UUAWHQD9YR->IDEP8Nxb = a87inECabNp;
        UUAWHQD9YR = a87inECabNp;
    }
    UUAWHQD9YR->IDEP8Nxb = NULL;
    LpGKtFRkw2CX = Yys2po->RqLdPco0b;
    for (QjrUftZqQdGK = 0; QjrUftZqQdGK < gRFnoSq5eD0B; QjrUftZqQdGK++) {
        printf ("%s\n", LpGKtFRkw2CX->mkjPDETcU21);
        LpGKtFRkw2CX = LpGKtFRkw2CX->RqLdPco0b;
    };
}

