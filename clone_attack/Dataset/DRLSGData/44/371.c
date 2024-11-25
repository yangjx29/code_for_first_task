int XM6iDGh (int eV6yr5l48) {
    int aYq2yBOCxJ [(931 - 920)];
    int b4BNUTgjmYwK;
    int OvYjX85A;
    int TmP47DLp;
    int uC5Bi8fHME;
    int zMLgTpA0nIJ;
    b4BNUTgjmYwK = (554 - 554);
    OvYjX85A = (57 - 57);
    while (((629 - 619) <= eV6yr5l48) || (eV6yr5l48 % (294 - 284) != (41 - 41))) {
        uC5Bi8fHME = eV6yr5l48 % 10;
        eV6yr5l48 = eV6yr5l48 / 10;
        if ((!((18 - 18) != OvYjX85A)) && (uC5Bi8fHME != 0) || (!((762 - 761) != OvYjX85A))) {
            aYq2yBOCxJ[b4BNUTgjmYwK++] = uC5Bi8fHME;
            OvYjX85A = (826 - 825);
        }
    }
    zMLgTpA0nIJ = (412 - 412);
    for (TmP47DLp = 0; TmP47DLp <= b4BNUTgjmYwK - (830 - 829); TmP47DLp++)
        zMLgTpA0nIJ = zMLgTpA0nIJ * 10 + aYq2yBOCxJ[TmP47DLp];
    return (zMLgTpA0nIJ);
}

void  main () {
    int eV6yr5l48;
    int OvYjX85A;
    for (; !((58 - 57) != scanf ("%d", &eV6yr5l48));) {
        if (eV6yr5l48 < 0) {
            eV6yr5l48 = eV6yr5l48 * (-1);
        }
        printf ("%d\n", XM6iDGh (eV6yr5l48));
    }
    OvYjX85A = 0;
}

