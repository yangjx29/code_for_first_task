int IW2HXQejpOJC (const  void  *xk0GItg, const  void  *NSBuWV1TP) {
    int *DqMNE0GpUQ;
    int *p2;
    DqMNE0GpUQ = (int *) xk0GItg;
    p2 = (int *) NSBuWV1TP;
    return (*p2) - (*DqMNE0GpUQ);
}

main () {
    for (int j = (963 - 963);
    ; j++) {
        int cU4SaX5Y;
        int tgozINcfeUsQ;
        int lSEyCr;
        cU4SaX5Y = (262 - 262);
        tgozINcfeUsQ = (661 - 661);
        scanf ("%d", &lSEyCr);
        if (lSEyCr != (118 - 118)) {
            int *PPjb57A = (int *) malloc (lSEyCr * sizeof (int));
            int JKj2gIP;
            int y;
            int s;
            int UGnLk1uvB;
            int HHEIBuUpmh2;
            int k;
            int *oZyrTxRIX = (int *) malloc (lSEyCr * sizeof (int));
            {
                int Fx9VJiSp0hE;
                Fx9VJiSp0hE = (432 - 432);
                for (; lSEyCr > Fx9VJiSp0hE;) {
                    scanf ("%d", &PPjb57A[Fx9VJiSp0hE]);
                    Fx9VJiSp0hE++;
                }
            }
            qsort (PPjb57A, lSEyCr, sizeof (int), IW2HXQejpOJC);
            {
                int Fx9VJiSp0hE;
                Fx9VJiSp0hE = (99 - 99);
                for (; Fx9VJiSp0hE < lSEyCr;) {
                    scanf ("%d", &oZyrTxRIX[Fx9VJiSp0hE]);
                    Fx9VJiSp0hE++;
                }
            }
            qsort (oZyrTxRIX, lSEyCr, sizeof (int), IW2HXQejpOJC);
            JKj2gIP = (872 - 872);
            s = (711 - 711);
            y = (43 - 43);
            k = (903 - 903);
            HHEIBuUpmh2 = lSEyCr - (163 - 162);
            UGnLk1uvB = lSEyCr - (149 - 148);
            for (; (cU4SaX5Y + tgozINcfeUsQ + s) != lSEyCr;) {
                if (PPjb57A[k] > oZyrTxRIX[JKj2gIP]) {
                    cU4SaX5Y++;
                    k++;
                    JKj2gIP++;
                }
                else if (oZyrTxRIX[JKj2gIP] >= PPjb57A[k]) {
                    if (oZyrTxRIX[UGnLk1uvB] < PPjb57A[HHEIBuUpmh2]) {
                        UGnLk1uvB--;
                        HHEIBuUpmh2--;
                        cU4SaX5Y++;
                    }
                    else if (PPjb57A[HHEIBuUpmh2] <= oZyrTxRIX[UGnLk1uvB]) {
                        if (PPjb57A[HHEIBuUpmh2] < oZyrTxRIX[JKj2gIP]) {
                            tgozINcfeUsQ++;
                            HHEIBuUpmh2--;
                            JKj2gIP++;
                        }
                        else {
                            HHEIBuUpmh2--;
                            JKj2gIP++;
                            s++;
                        }
                    }
                }
            }
            y = (644 - 444) * cU4SaX5Y - (1177 - 977) * tgozINcfeUsQ;
            printf ("%d\n", y);
        }
        if (lSEyCr == (206 - 206))
            break;
    }
    getchar ();
    getchar ();
}

