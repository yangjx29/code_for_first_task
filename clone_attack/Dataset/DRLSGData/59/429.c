int main () {
    char i6hutB [102] [102];
    int Not5kN6Dn;
    int dB1aptAw;
    int QeNfjD;
    int E21Ue0C;
    int S7sRpydqm;
    int tPRGWkbmCJY;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &E21Ue0C);
    for (S7sRpydqm = 1; E21Ue0C >= S7sRpydqm; S7sRpydqm = S7sRpydqm +1) {
        {
            if (0) {
                return 0;
            }
        }
        getchar ();
        for (Not5kN6Dn = 1; E21Ue0C >= Not5kN6Dn; Not5kN6Dn = Not5kN6Dn +1) {
            scanf ("%c", &i6hutB[S7sRpydqm][Not5kN6Dn]);
        }
    }
    scanf ("%d", &dB1aptAw);
    for (tPRGWkbmCJY = 1; tPRGWkbmCJY < dB1aptAw; tPRGWkbmCJY = tPRGWkbmCJY + 1) {
        for (S7sRpydqm = 1; E21Ue0C >= S7sRpydqm; S7sRpydqm = S7sRpydqm +1) {
            for (Not5kN6Dn = 1; Not5kN6Dn <= E21Ue0C; Not5kN6Dn = Not5kN6Dn +1) {
                if (!('@' != i6hutB[S7sRpydqm][Not5kN6Dn])) {
                    if (i6hutB[S7sRpydqm][Not5kN6Dn +1] == '.') {
                        i6hutB[S7sRpydqm][Not5kN6Dn +1] = '*';
                    }
                    if (i6hutB[S7sRpydqm][Not5kN6Dn -1] == '.') {
                        i6hutB[S7sRpydqm][Not5kN6Dn -1] = '*';
                    }
                    if (i6hutB[S7sRpydqm +1][Not5kN6Dn] == '.') {
                        i6hutB[S7sRpydqm +1][Not5kN6Dn] = '*';
                    }
                    if (i6hutB[S7sRpydqm -1][Not5kN6Dn] == '.') {
                        i6hutB[S7sRpydqm -1][Not5kN6Dn] = '*';
                    }
                }
            }
        }
        for (S7sRpydqm = 1; S7sRpydqm <= E21Ue0C; S7sRpydqm = S7sRpydqm +1) {
            for (Not5kN6Dn = 1; Not5kN6Dn <= E21Ue0C; Not5kN6Dn = Not5kN6Dn +1) {
                if (i6hutB[S7sRpydqm][Not5kN6Dn] == '*') {
                    i6hutB[S7sRpydqm][Not5kN6Dn] = '@';
                }
            }
        }
    }
    QeNfjD = 0;
    for (S7sRpydqm = 1; S7sRpydqm <= E21Ue0C; S7sRpydqm++) {
        for (Not5kN6Dn = 1; Not5kN6Dn <= E21Ue0C; Not5kN6Dn = Not5kN6Dn +1) {
            if (i6hutB[S7sRpydqm][Not5kN6Dn] == '@') {
                QeNfjD = QeNfjD +1;
            }
        }
    }
    printf ("%d", QeNfjD);
    return 0;
}

