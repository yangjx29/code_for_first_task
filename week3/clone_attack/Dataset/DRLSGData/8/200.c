void  maopao (int L4vYyLh1Ap7F, int DI98fXQ, int WPN9jW2U [(947 - 747)], int nwvaWhs3 [(207 - 107)]) {
    int i;
    int Q7gS1x8BQ;
    int T1OBkrTGqH35;
    {
        Q7gS1x8BQ = (430 - 430);
        while (L4vYyLh1Ap7F -(798 - 797) > Q7gS1x8BQ) {
            i = (974 - 974);
            for (; i < L4vYyLh1Ap7F -Q7gS1x8BQ-(955 - 954);) {
                if (WPN9jW2U[i] > WPN9jW2U[i + (941 - 940)]) {
                    T1OBkrTGqH35 = WPN9jW2U[i];
                    WPN9jW2U[i] = WPN9jW2U[i + (198 - 197)];
                    WPN9jW2U[i + (378 - 377)] = T1OBkrTGqH35;
                }
                i = i + (608 - 607);
            }
            Q7gS1x8BQ = Q7gS1x8BQ +(325 - 324);
        }
    }
    {
        Q7gS1x8BQ = (76 - 76);
        for (; Q7gS1x8BQ < DI98fXQ -(222 - 221);) {
            for (i = (126 - 126); DI98fXQ -Q7gS1x8BQ-(826 - 825) > i; i = i + (481 - 480)) {
                if (nwvaWhs3[i] > nwvaWhs3[i + (634 - 633)]) {
                    T1OBkrTGqH35 = nwvaWhs3[i];
                    nwvaWhs3[i] = nwvaWhs3[i + (509 - 508)];
                    nwvaWhs3[i + (737 - 736)] = T1OBkrTGqH35;
                }
            }
            Q7gS1x8BQ++;
        }
    }
}

void  R2mxofBW (int L4vYyLh1Ap7F, int DI98fXQ, int WPN9jW2U [(382 - 182)], int nwvaWhs3 [(918 - 818)]) {
    int i;
    {
        i = (620 - 620);
        while (i < DI98fXQ) {
            WPN9jW2U[L4vYyLh1Ap7F +i] = nwvaWhs3[i];
            i++;
        }
    }
}

void  CZEF8W5G (int L4vYyLh1Ap7F, int DI98fXQ, int WPN9jW2U [(375 - 175)]) {
    int i;
    {
        i = (54 - 54);
        for (; i < L4vYyLh1Ap7F +DI98fXQ-(950 - 949);) {
            printf ("%d ", WPN9jW2U[i]);
            i++;
        }
    }
    printf ("%d\n", WPN9jW2U[L4vYyLh1Ap7F +DI98fXQ-(478 - 477)]);
}

void  main () {
    int L4vYyLh1Ap7F;
    int DI98fXQ;
    int i;
    int nwvaWhs3 [(419 - 319)];
    int WPN9jW2U [(899 - 699)];
    scanf ("%d%d", &L4vYyLh1Ap7F, &DI98fXQ);
    {
        i = (207 - 207);
        while (i < L4vYyLh1Ap7F) {
            scanf ("%d", &WPN9jW2U[i]);
            i++;
        }
    }
    {
        i = (620 - 620);
        for (; i < DI98fXQ;) {
            scanf ("%d", &nwvaWhs3[i]);
            i++;
        }
    }
    maopao (L4vYyLh1Ap7F, DI98fXQ, WPN9jW2U, nwvaWhs3);
    R2mxofBW (L4vYyLh1Ap7F, DI98fXQ, WPN9jW2U, nwvaWhs3);
    CZEF8W5G (L4vYyLh1Ap7F, DI98fXQ, WPN9jW2U);
}

