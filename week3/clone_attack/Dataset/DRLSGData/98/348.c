int main () {
    int bCh1qUANuzRf;
    int CBcDQvI;
    int XVKJPRs;
    int aOtb6a;
    char lCRmpwAxsO [300] [40];
    int pYl2gz79 [300] = {0};
    int WseNkdm7Z;
    int EeGaZfszok;
    XVKJPRs = 0;
    WseNkdm7Z = 0;
    cin >> CBcDQvI;
    EeGaZfszok = 0;
    aOtb6a = strlen (lCRmpwAxsO[0]);
    for (bCh1qUANuzRf = 0; CBcDQvI > bCh1qUANuzRf; bCh1qUANuzRf = bCh1qUANuzRf + 1) {
        scanf ("%s", lCRmpwAxsO[bCh1qUANuzRf]);
    }
    for (bCh1qUANuzRf = 1; bCh1qUANuzRf < CBcDQvI; bCh1qUANuzRf = bCh1qUANuzRf + 1) {
        aOtb6a += strlen (lCRmpwAxsO[bCh1qUANuzRf]) + 1;
        if (80 < aOtb6a) {
            for (WseNkdm7Z = XVKJPRs; WseNkdm7Z < bCh1qUANuzRf; WseNkdm7Z = WseNkdm7Z +1) {
                if (!(0 != EeGaZfszok)) {
                    EeGaZfszok = 1;
                    cout << lCRmpwAxsO[WseNkdm7Z];
                    pYl2gz79[WseNkdm7Z] = 1;
                }
                else {
                    cout << " " << lCRmpwAxsO[WseNkdm7Z];
                    pYl2gz79[WseNkdm7Z] = 1;
                }
            }
            XVKJPRs = bCh1qUANuzRf;
            cout << endl;
            aOtb6a = strlen (lCRmpwAxsO[bCh1qUANuzRf]);
            EeGaZfszok = 0;
        }
    }
    EeGaZfszok = 0;
    for (bCh1qUANuzRf = 0; bCh1qUANuzRf < CBcDQvI; bCh1qUANuzRf = bCh1qUANuzRf + 1) {
        if (!(0 != pYl2gz79[bCh1qUANuzRf])) {
            for (WseNkdm7Z = bCh1qUANuzRf; CBcDQvI > WseNkdm7Z; WseNkdm7Z = WseNkdm7Z +1) {
                if (EeGaZfszok == 0) {
                    cout << lCRmpwAxsO[WseNkdm7Z];
                    EeGaZfszok = 1;
                }
                else {
                    cout << " " << lCRmpwAxsO[WseNkdm7Z];
                }
            }
            break;
        }
    }
    return 0;
}

