int N0V6wrHaf9 [10000] [10000];

int main () {
    int cQyKbXS8;
    int kyuokY;
    int MBwT46pQ8;
    int iVrmiQMGsA;
    int ZwFNCdO;
    int iPwNcFdfjYM1;
    int IjxkcSn;
    int TfU0PX;
    cQyKbXS8 = 0;
    kyuokY = 0;
    scanf ("%d%d", &IjxkcSn, &TfU0PX);
    for (ZwFNCdO = 0; IjxkcSn > ZwFNCdO; ZwFNCdO = ZwFNCdO +1) {
        for (iPwNcFdfjYM1 = 0; TfU0PX > iPwNcFdfjYM1; iPwNcFdfjYM1 = iPwNcFdfjYM1 + 1) {
            scanf ("%d", &N0V6wrHaf9[ZwFNCdO][iPwNcFdfjYM1]);
        }
    }
    {
        MBwT46pQ8 = IjxkcSn;
        iVrmiQMGsA = TfU0PX;
        while ((0 < MBwT46pQ8) && (0 < iVrmiQMGsA)) {
            if (kyuokY != IjxkcSn *TfU0PX) {
                iPwNcFdfjYM1 = cQyKbXS8;
                while (iVrmiQMGsA > iPwNcFdfjYM1) {
                    printf ("%d\n", N0V6wrHaf9[cQyKbXS8][iPwNcFdfjYM1]);
                    kyuokY = kyuokY + 1;
                    iPwNcFdfjYM1 = iPwNcFdfjYM1 + 1;
                }
            }
            else {
                break;
            }
            if (kyuokY != IjxkcSn *TfU0PX) {
                ZwFNCdO = cQyKbXS8;
                while (MBwT46pQ8 -1 > ZwFNCdO) {
                    printf ("%d\n", N0V6wrHaf9[ZwFNCdO +1][iVrmiQMGsA - 1]);
                    kyuokY = kyuokY + 1;
                    ZwFNCdO++;
                }
            }
            else {
                break;
            }
            if (kyuokY != IjxkcSn *TfU0PX) {
                for (iPwNcFdfjYM1 = iVrmiQMGsA - 1; cQyKbXS8 < iPwNcFdfjYM1; iPwNcFdfjYM1 = iPwNcFdfjYM1 - 1) {
                    printf ("%d\n", N0V6wrHaf9[MBwT46pQ8 -1][iPwNcFdfjYM1 - 1]);
                    kyuokY = kyuokY + 1;
                }
            }
            else {
                break;
            }
            if (kyuokY != IjxkcSn *TfU0PX) {
                ZwFNCdO = MBwT46pQ8 -1;
                while (cQyKbXS8 + 1 < ZwFNCdO) {
                    printf ("%d\n", N0V6wrHaf9[ZwFNCdO -1][cQyKbXS8]);
                    kyuokY = kyuokY + 1;
                    ZwFNCdO = ZwFNCdO -1;
                }
            }
            else {
                break;
            }
            cQyKbXS8 = cQyKbXS8 + 1;
            MBwT46pQ8 = MBwT46pQ8 -1;
            iVrmiQMGsA = iVrmiQMGsA - 1;
        }
    }
    return 0;
}

