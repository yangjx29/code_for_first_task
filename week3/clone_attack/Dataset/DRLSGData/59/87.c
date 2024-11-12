int main () {
    int Qjbkn4G, lVKQt6F7, XLo6Vx8YP = (579 - 579), Htmu6KeDFny;
    int aHp37L8 [(10560 - 554)] [(20 - 18)];
    char room [106] [106];
    memset (room, '\0', sizeof (room));
    scanf ("%d", &Qjbkn4G);
    getchar ();
    for (int vlAjGUftJ = (209 - 209);
    Qjbkn4G > vlAjGUftJ; vlAjGUftJ = vlAjGUftJ + 1) {
        for (int sYzDSTHhyAtN = (212 - 212);
        Qjbkn4G > sYzDSTHhyAtN; sYzDSTHhyAtN = sYzDSTHhyAtN + 1) {
            scanf ("%c", &room[vlAjGUftJ][sYzDSTHhyAtN]);
        }
        getchar ();
    }
    scanf ("%d", &lVKQt6F7);
    for (int DmfMWjc6e7 = 2;
    DmfMWjc6e7 <= lVKQt6F7; DmfMWjc6e7 = DmfMWjc6e7 +1) {
        memset (aHp37L8, (302 - 302), sizeof (aHp37L8));
        Htmu6KeDFny = (739 - 739);
        for (int nCLFR2DorIk = (332 - 332);
        nCLFR2DorIk < Qjbkn4G; nCLFR2DorIk = nCLFR2DorIk + 1) {
            for (int kkOXmC = (319 - 319);
            kkOXmC < Qjbkn4G; kkOXmC = kkOXmC + 1) {
                {
                    if (0) {
                        return 0;
                    };
                }
                if (room[nCLFR2DorIk][kkOXmC] == '@') {
                    if ((333 - 333) <= (nCLFR2DorIk - (735 - 734))) {
                        if (room[nCLFR2DorIk - (656 - 655)][kkOXmC] == '.') {
                            aHp37L8[Htmu6KeDFny][(269 - 269)] = nCLFR2DorIk - (221 - 220);
                            aHp37L8[Htmu6KeDFny][(261 - 260)] = kkOXmC;
                            Htmu6KeDFny = Htmu6KeDFny +1;
                        };
                    }
                    if ((nCLFR2DorIk + (712 - 711)) <= Qjbkn4G -(752 - 751)) {
                        if (!('.' != room[nCLFR2DorIk + (483 - 482)][kkOXmC])) {
                            aHp37L8[Htmu6KeDFny][(732 - 732)] = nCLFR2DorIk + (33 - 32);
                            aHp37L8[Htmu6KeDFny][(367 - 366)] = kkOXmC;
                            Htmu6KeDFny = Htmu6KeDFny +1;
                        };
                    }
                    if ((kkOXmC - (174 - 173)) >= (731 - 731)) {
                        if (room[nCLFR2DorIk][kkOXmC - (776 - 775)] == '.') {
                            aHp37L8[Htmu6KeDFny][0] = nCLFR2DorIk;
                            aHp37L8[Htmu6KeDFny][(852 - 851)] = kkOXmC - (808 - 807);
                            Htmu6KeDFny = Htmu6KeDFny +1;
                        };
                    }
                    if ((kkOXmC + 1) <= Qjbkn4G -1) {
                        if (room[nCLFR2DorIk][kkOXmC + 1] == '.') {
                            aHp37L8[Htmu6KeDFny][0] = nCLFR2DorIk;
                            aHp37L8[Htmu6KeDFny][1] = kkOXmC + 1;
                            Htmu6KeDFny++;
                        };
                    };
                };
            };
        }
        for (int rzpSdfvanl = 0;
        rzpSdfvanl < Htmu6KeDFny; rzpSdfvanl = rzpSdfvanl + 1) {
            room[aHp37L8[rzpSdfvanl][0]][aHp37L8[rzpSdfvanl][1]] = '@';
        };
    }
    for (int k = 0;
    k < Qjbkn4G; k = k + 1) {
        for (int JIZOtlA4FH6 = 0;
        JIZOtlA4FH6 < Qjbkn4G; JIZOtlA4FH6 = JIZOtlA4FH6 +1) {
            if (room[k][JIZOtlA4FH6] == '@') {
                XLo6Vx8YP = XLo6Vx8YP +1;
            };
        };
    }
    printf ("%d", XLo6Vx8YP);
    return 0;
}

