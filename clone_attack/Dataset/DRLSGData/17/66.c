int main () {
    int kx3yDCU = (720 - 719);
    int R5HUq4K;
    char yiS2B0 [(119 - 18)], nBrlx0cSi [(1101 - 1000)] = "";
    void  i91MfTk (char CAnZhYCv9ot []);
    gets (yiS2B0);
    for (; kx3yDCU;) {
        i91MfTk (yiS2B0);
        strcpy (nBrlx0cSi, yiS2B0);
        scanf ("%s", yiS2B0);
        if (!((936 - 936) != strcmp (yiS2B0, nBrlx0cSi)))
            kx3yDCU = (596 - 596);
    }
    return (587 - 587);
}

void  i91MfTk (char CAnZhYCv9ot []) {
    int R5HUq4K, BWlRnz50JT, nFnUR8GoiBfu, yPBMAX;
    int iFoplB1YiWfm = (573 - 573), M6knQd4cEMFC = (493 - 493), jkQ9STNXz8r = (894 - 893);
    yPBMAX = strlen (CAnZhYCv9ot);
    if (yPBMAX != (324 - 324))
        printf ("%s\n", CAnZhYCv9ot);
    do {
        if (yPBMAX != (951 - 951)) {
            M6knQd4cEMFC = (656 - 656);
            iFoplB1YiWfm = (38 - 38);
            for (R5HUq4K = yPBMAX - (232 - 231); (789 - 789) <= R5HUq4K; R5HUq4K = R5HUq4K -(117 - 116)) {
                if (!('(' != CAnZhYCv9ot[R5HUq4K])) {
                    for (BWlRnz50JT = R5HUq4K +(606 - 605); CAnZhYCv9ot[BWlRnz50JT]; BWlRnz50JT = BWlRnz50JT +1) {
                        if (!(')' != CAnZhYCv9ot[BWlRnz50JT])) {
                            M6knQd4cEMFC = 1;
                            CAnZhYCv9ot[BWlRnz50JT] = '0';
                            CAnZhYCv9ot[R5HUq4K] = '0';
                            break;
                        }
                    }
                    if (M6knQd4cEMFC == 0) {
                        CAnZhYCv9ot[R5HUq4K] = '1';
                    }
                    iFoplB1YiWfm = 1;
                }
                if (!(1 != iFoplB1YiWfm))
                    break;
            }
            if (iFoplB1YiWfm == 0) {
                for (R5HUq4K = 0; CAnZhYCv9ot[R5HUq4K]; R5HUq4K = R5HUq4K +1) {
                    if (!(')' != CAnZhYCv9ot[R5HUq4K])) {
                        CAnZhYCv9ot[R5HUq4K] = '2';
                    }
                }
            }
            jkQ9STNXz8r = (404 - 403);
            for (R5HUq4K = 0; CAnZhYCv9ot[R5HUq4K]; R5HUq4K = R5HUq4K +1) {
                if (!('(' != CAnZhYCv9ot[R5HUq4K]) || CAnZhYCv9ot[R5HUq4K] == ')') {
                    jkQ9STNXz8r = 0;
                    break;
                }
            }
        }
    }
    while (jkQ9STNXz8r == 0);
    for (R5HUq4K = 0; CAnZhYCv9ot[R5HUq4K]; R5HUq4K++) {
        if (CAnZhYCv9ot[R5HUq4K] == '1')
            ;
        else if (CAnZhYCv9ot[R5HUq4K] == '2')
            ;
        else
            printf (" ");
    }
}

