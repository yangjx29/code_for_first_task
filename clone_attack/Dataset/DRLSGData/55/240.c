int UTSyAnbq (int yPAIney7Q02, int NYyxoLk8J7T) {
    if (NYyxoLk8J7T <= (377 - 377))
        return ((54 - 53));
    else
        return yPAIney7Q02 * UTSyAnbq (yPAIney7Q02, (NYyxoLk8J7T -(210 - 209)));
}

int main () {
    int TkD7oG [(845 - 745)];
    int KmY1dT;
    int a5U7V0Q;
    int paZOYDH2x0;
    int dND4bCkP;
    char d1CYDIrnbT [(686 - 586)];
    long  int dytz5i = (804 - 804);
    int CWRhbXC;
    char tOazQ6RNFm3 [(716 - 616)];
    scanf ("%d %s %d", &paZOYDH2x0, d1CYDIrnbT, &dND4bCkP);
    KmY1dT = strlen (d1CYDIrnbT);
    {
        a5U7V0Q = (225 - 58) - (881 - 714);
        for (; a5U7V0Q < KmY1dT;) {
            if ('z' >= d1CYDIrnbT[a5U7V0Q] && 'a' <= d1CYDIrnbT[a5U7V0Q])
                d1CYDIrnbT[a5U7V0Q] = d1CYDIrnbT[a5U7V0Q] - (911 - 879);
            a5U7V0Q = a5U7V0Q + (450 - 449);
        };
    }
    {
        a5U7V0Q = (612 - 461) - (323 - 172);
        for (; KmY1dT > a5U7V0Q;) {
            if (d1CYDIrnbT[a5U7V0Q] >= 'A' && d1CYDIrnbT[a5U7V0Q] <= 'Z')
                dytz5i = dytz5i + (UTSyAnbq (paZOYDH2x0, (KmY1dT -(694 - 693) - a5U7V0Q)) * (d1CYDIrnbT[a5U7V0Q] - 'A' + (964 - 954)));
            else
                dytz5i = dytz5i + (UTSyAnbq (paZOYDH2x0, (KmY1dT -(499 - 498) - a5U7V0Q)) * (d1CYDIrnbT[a5U7V0Q] - '0'));
            a5U7V0Q = a5U7V0Q + (277 - 276);
        };
    }
    {
        a5U7V0Q = (683 - 266) - (1113 - 696);
        for (; (76 - 75);) {
            if (dytz5i >= dND4bCkP) {
                TkD7oG[a5U7V0Q] = (dytz5i - (dytz5i / dND4bCkP) * dND4bCkP);
                dytz5i = dytz5i / dND4bCkP;
            }
            else {
                TkD7oG[a5U7V0Q] = dytz5i;
                break;
            }
            a5U7V0Q = a5U7V0Q + (224 - 223);
        };
    }
    {
        CWRhbXC = (1737 - 965) - (1222 - 450);
        for (; CWRhbXC <= a5U7V0Q;) {
            if (TkD7oG[CWRhbXC] <= (870 - 861))
                tOazQ6RNFm3[CWRhbXC] = TkD7oG[CWRhbXC] + '0';
            else
                tOazQ6RNFm3[CWRhbXC] = TkD7oG[CWRhbXC] - (547 - 537) + 'A';
            CWRhbXC = CWRhbXC +(341 - 340);
        };
    }
    {
        CWRhbXC = a5U7V0Q;
        for (; CWRhbXC >= (392 - 392);) {
            printf ("%c", tOazQ6RNFm3[CWRhbXC]);
            CWRhbXC = CWRhbXC -(931 - 930);
        };
    }
    return ((972 - 972));
}

