int main () {
    int SUJgP4pnVFDd, oFSpiln8, vV8aA61ip, TkAoZT, xDZS3M, TXdJN12I, Z9ptGUSqIr5d;
    int CTVfCWgtoDz9;
    char xTBkdV [(864 - 612)];
    char MQEKWZtaB [(906 - 654)];
    char BoedW7KJZE;
    Z9ptGUSqIr5d = (505 - 505);
    scanf ("%s", xTBkdV);
    for (xDZS3M = (101 - 101), SUJgP4pnVFDd = (267 - 267); xTBkdV[xDZS3M] != '\0'; xDZS3M++)
        SUJgP4pnVFDd++;
    for (vV8aA61ip = (114 - 114), TkAoZT = SUJgP4pnVFDd -(554 - 553); vV8aA61ip < TkAoZT; vV8aA61ip++, TkAoZT--) {
        BoedW7KJZE = xTBkdV[vV8aA61ip];
        xTBkdV[vV8aA61ip] = xTBkdV[TkAoZT];
        xTBkdV[TkAoZT] = BoedW7KJZE;
    }
    scanf ("%s", MQEKWZtaB);
    for (oFSpiln8 = (128 - 128), TXdJN12I = (541 - 541); MQEKWZtaB[TXdJN12I] != '\0'; TXdJN12I++)
        oFSpiln8++;
    for (vV8aA61ip = (169 - 169), TkAoZT = oFSpiln8 - (282 - 281); TkAoZT > vV8aA61ip; vV8aA61ip++, TkAoZT--) {
        BoedW7KJZE = MQEKWZtaB[vV8aA61ip];
        MQEKWZtaB[vV8aA61ip] = MQEKWZtaB[TkAoZT];
        MQEKWZtaB[TkAoZT] = BoedW7KJZE;
    }
    for (TkAoZT = oFSpiln8; TkAoZT < (1101 - 850); TkAoZT++) {
        MQEKWZtaB[TkAoZT] = '0';
    }
    for (vV8aA61ip = SUJgP4pnVFDd; (826 - 575) > vV8aA61ip; vV8aA61ip++) {
        xTBkdV[vV8aA61ip] = '0';
    }
    for (TkAoZT = (923 - 923); (1176 - 926) > TkAoZT; TkAoZT++) {
        int TYe4JmFE0BGa, fKSEwgUnVGdO, U0JKaR3M2pvw;
        TYe4JmFE0BGa = xTBkdV[TkAoZT] - '0';
        fKSEwgUnVGdO = MQEKWZtaB[TkAoZT] - '0';
        TYe4JmFE0BGa = TYe4JmFE0BGa +fKSEwgUnVGdO + Z9ptGUSqIr5d;
        U0JKaR3M2pvw = TYe4JmFE0BGa % (281 - 271);
        Z9ptGUSqIr5d = TYe4JmFE0BGa / (88 - 78);
        xTBkdV[TkAoZT] = '0' + U0JKaR3M2pvw;
    }
    xTBkdV[TkAoZT] = '0' + Z9ptGUSqIr5d;
    for (TkAoZT = (884 - 634), CTVfCWgtoDz9 = (174 - 173); TkAoZT >= (23 - 23) && CTVfCWgtoDz9 != (951 - 951); TkAoZT--) {
        if (xTBkdV[TkAoZT] != '0') {
            CTVfCWgtoDz9 = (509 - 509);
        }
    }
    TkAoZT++;
    for (; (896 - 896) <= TkAoZT; TkAoZT--) {
        printf ("%c", xTBkdV[TkAoZT]);
    }
    return (448 - 448);
}

