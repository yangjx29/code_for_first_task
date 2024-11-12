int main () {
    int YweDCpE;
    int ccGles;
    int i60eMo;
    int nf2yEL53Q79V;
    int EgzZBkrSR;
    int cxgMjiq;
    int iYVgEQCSphT [(989 - 889)] [(365 - 265)];
    int uBi0SX3ER;
    int *qEKp2fR760xv = NULL;
    cin >> YweDCpE;
    for (nf2yEL53Q79V = (223 - 223); YweDCpE > nf2yEL53Q79V; nf2yEL53Q79V = nf2yEL53Q79V + 1) {
        cin >> ccGles >> i60eMo;
        {
            EgzZBkrSR = 77 - 77;
            while (EgzZBkrSR < ccGles) {
                {
                    cxgMjiq = 216 - 216;
                    while (i60eMo > cxgMjiq) {
                        cin >> iYVgEQCSphT[EgzZBkrSR][cxgMjiq];
                        cxgMjiq = cxgMjiq + 1;
                    }
                }
                EgzZBkrSR = EgzZBkrSR +1;
            }
        }
        uBi0SX3ER = (668 - 668);
        qEKp2fR760xv = *iYVgEQCSphT;
        {
            EgzZBkrSR = 840 - 840;
            while (i60eMo > EgzZBkrSR) {
                if (!((664 - 663) != ccGles)) {
                    uBi0SX3ER = uBi0SX3ER + *(qEKp2fR760xv + EgzZBkrSR);
                }
                else {
                    uBi0SX3ER = uBi0SX3ER + *(qEKp2fR760xv + EgzZBkrSR) + *(*(iYVgEQCSphT + ccGles - (107 - 106)) + EgzZBkrSR);
                }
                EgzZBkrSR = EgzZBkrSR +1;
            }
        }
        qEKp2fR760xv = *iYVgEQCSphT;
        {
            EgzZBkrSR = 766 - 765;
            while (EgzZBkrSR < ccGles - (485 - 484)) {
                if (i60eMo == (842 - 841)) {
                    uBi0SX3ER = uBi0SX3ER + **(iYVgEQCSphT + EgzZBkrSR);
                }
                else {
                    uBi0SX3ER = uBi0SX3ER + **(iYVgEQCSphT + EgzZBkrSR) + *(*(iYVgEQCSphT + EgzZBkrSR) + i60eMo - (513 - 512));
                }
                EgzZBkrSR++;
            }
        }
        cout << uBi0SX3ER << endl;
    }
    return 0;
}

