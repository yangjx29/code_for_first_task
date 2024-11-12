int main () {
    char mESO6pMVJ [(454 - 353)] [101];
    int KwD7eki5v;
    int waU1VCDBJ;
    int dDTjPBCvG1;
    int OEDVY0i6I;
    int DJkNr98fqsAz;
    int waZTdDC;
    KwD7eki5v = (732 - 732);
    cin >> waU1VCDBJ;
    {
        DJkNr98fqsAz = (147 - 146);
        for (; waU1VCDBJ >= DJkNr98fqsAz;) {
            for (waZTdDC = (474 - 473); waU1VCDBJ >= waZTdDC; waZTdDC = waZTdDC + (997 - 996))
                cin >> mESO6pMVJ[DJkNr98fqsAz][waZTdDC];
            DJkNr98fqsAz = DJkNr98fqsAz +(980 - 979);
        }
    }
    cin >> dDTjPBCvG1;
    {
        OEDVY0i6I = 2;
        while (dDTjPBCvG1 >= OEDVY0i6I) {
            OEDVY0i6I = OEDVY0i6I +(818 - 817);
            {
                DJkNr98fqsAz = 1;
                for (; DJkNr98fqsAz <= waU1VCDBJ;) {
                    for (waZTdDC = 1; waU1VCDBJ >= waZTdDC; waZTdDC = waZTdDC + 1) {
                        if (!('@' != mESO6pMVJ[DJkNr98fqsAz][waZTdDC])) {
                            if (waZTdDC != 1 && mESO6pMVJ[DJkNr98fqsAz][waZTdDC - 1] == '.')
                                mESO6pMVJ[DJkNr98fqsAz][waZTdDC - 1] = '*';
                            if (waZTdDC != waU1VCDBJ && mESO6pMVJ[DJkNr98fqsAz][waZTdDC + 1] == '.')
                                mESO6pMVJ[DJkNr98fqsAz][waZTdDC + 1] = '*';
                            if (DJkNr98fqsAz != 1 && !('.' != mESO6pMVJ[DJkNr98fqsAz -1][waZTdDC]))
                                mESO6pMVJ[DJkNr98fqsAz -1][waZTdDC] = '*';
                            if (DJkNr98fqsAz != waU1VCDBJ && !('.' != mESO6pMVJ[DJkNr98fqsAz +1][waZTdDC]))
                                mESO6pMVJ[DJkNr98fqsAz +1][waZTdDC] = '*';
                        }
                    }
                    DJkNr98fqsAz = DJkNr98fqsAz +1;
                }
            }
            {
                DJkNr98fqsAz = 1;
                while (DJkNr98fqsAz <= waU1VCDBJ) {
                    for (waZTdDC = 1; waZTdDC <= waU1VCDBJ; waZTdDC = waZTdDC + 1) {
                        if (mESO6pMVJ[DJkNr98fqsAz][waZTdDC] == '*')
                            mESO6pMVJ[DJkNr98fqsAz][waZTdDC] = '@';
                    }
                    DJkNr98fqsAz = DJkNr98fqsAz +1;
                }
            }
        }
    }
    {
        DJkNr98fqsAz = 1;
        while (DJkNr98fqsAz <= waU1VCDBJ) {
            for (waZTdDC = 1; waZTdDC <= waU1VCDBJ; waZTdDC = waZTdDC + 1) {
                if (mESO6pMVJ[DJkNr98fqsAz][waZTdDC] == '@')
                    KwD7eki5v = KwD7eki5v +1;
            }
            DJkNr98fqsAz = DJkNr98fqsAz +1;
        }
    }
    cout << KwD7eki5v;
    return 0;
}

