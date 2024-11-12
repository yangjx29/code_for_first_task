int main () {
    int ZfYQLUi4HTR, UA2Hav7, ETS6Volyszw, qeMkPYd, GhmItyqKQ = 1, DpNjDERmilv = 0, ZJXT6qAsPW, wfu8qo, SEYZ67, lF4oKGe5JBAY, Y53sWcAq, kkToFG9AyP;
    scanf ("%d", &ZfYQLUi4HTR);
    for (UA2Hav7 = 0; ZfYQLUi4HTR > UA2Hav7; UA2Hav7 = UA2Hav7 +1) {
        kkToFG9AyP = 1;
        for (ETS6Volyszw = 0; ETS6Volyszw < ZfYQLUi4HTR; ETS6Volyszw = ETS6Volyszw +1) {
            Y53sWcAq = kkToFG9AyP;
            scanf ("%d", &kkToFG9AyP);
            if (GhmItyqKQ) {
                if (!kkToFG9AyP) {
                    ZJXT6qAsPW = UA2Hav7;
                    GhmItyqKQ = !GhmItyqKQ;
                    SEYZ67 = ETS6Volyszw;
                }
            }
            else {
                if (!DpNjDERmilv&&UA2Hav7 > ZJXT6qAsPW &&Y53sWcAq == 0 && !(0 != kkToFG9AyP)) {
                    DpNjDERmilv = !DpNjDERmilv;
                    wfu8qo = UA2Hav7;
                }
                if (DpNjDERmilv &&Y53sWcAq == 0 && kkToFG9AyP == 255) {
                    goto label;
                    lF4oKGe5JBAY = ETS6Volyszw -1;
                }
            }
        }
    }
label :
    qeMkPYd = (wfu8qo - ZJXT6qAsPW -1) * (lF4oKGe5JBAY - SEYZ67 -1);
    printf ("%d\n", qeMkPYd);
    return 0;
}

