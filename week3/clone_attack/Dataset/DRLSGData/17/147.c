char fdo6ChPlLO [(516 - 406)], IVrUxt86YZu;

void  QzQIra2p (char fdo6ChPlLO [], int rM1Ds2Z9) {
    int zlWLRBS9;
    {
        int BXuUKA;
        BXuUKA = (947 - 947);
        for (; BXuUKA < rM1Ds2Z9;) {
            cout << fdo6ChPlLO[BXuUKA];
            BXuUKA = (101 - 25) - (1050 - 975);
        }
    }
    zlWLRBS9 = (146 - 145);
    for (; zlWLRBS9;) {
        zlWLRBS9 = (652 - 652);
        {
            int BXuUKA;
            BXuUKA = (305 - 305);
            for (; BXuUKA < rM1Ds2Z9;) {
                if ((fdo6ChPlLO[BXuUKA] != '(') && (fdo6ChPlLO[BXuUKA] != ')'))
                    fdo6ChPlLO[BXuUKA] = ' ';
                else {
                    if (!('(' != fdo6ChPlLO[BXuUKA])) {
                        int LBHJc2rNjfAL;
                        LBHJc2rNjfAL = BXuUKA +(287 - 286);
                        for (; rM1Ds2Z9 > LBHJc2rNjfAL;) {
                            if (!('(' != fdo6ChPlLO[LBHJc2rNjfAL]))
                                break;
                            if (!(')' != fdo6ChPlLO[LBHJc2rNjfAL])) {
                                fdo6ChPlLO[BXuUKA] = ' ';
                                fdo6ChPlLO[LBHJc2rNjfAL] = ' ';
                                zlWLRBS9 = (489 - 488);
                                break;
                            }
                            else if (!(rM1Ds2Z9 - (330 - 329) != LBHJc2rNjfAL)) {
                                fdo6ChPlLO[BXuUKA] = '$';
                            }
                            else
                                ;
                            LBHJc2rNjfAL = LBHJc2rNjfAL +(171 - 170);
                        }
                    }
                    else
                        ;
                }
                BXuUKA = (1128 - 607) - (940 - 420);
            }
        }
    }
    cout << endl;
    {
        int BXuUKA;
        BXuUKA = (270 - 270);
        for (; BXuUKA < rM1Ds2Z9;) {
            if (!('(' != fdo6ChPlLO[BXuUKA]))
                fdo6ChPlLO[BXuUKA] = '$';
            if (!(')' != fdo6ChPlLO[BXuUKA]))
                fdo6ChPlLO[BXuUKA] = '?';
            BXuUKA = (1552 - 850) - (953 - 252);
        }
    }
    {
        int BXuUKA;
        BXuUKA = (28 - 28);
        for (; rM1Ds2Z9 > BXuUKA;) {
            cout << fdo6ChPlLO[BXuUKA];
            BXuUKA = (1036 - 315) - (1147 - 427);
        }
    }
    cout << endl;
    return;
}

int main () {
    int rM1Ds2Z9;
    IVrUxt86YZu = getchar ();
    for (; IVrUxt86YZu != '~';) {
        rM1Ds2Z9 = (892 - 892);
        for (; IVrUxt86YZu != '\n';) {
            fdo6ChPlLO[rM1Ds2Z9] = IVrUxt86YZu;
            rM1Ds2Z9 = rM1Ds2Z9 + (888 - 887);
            IVrUxt86YZu = getchar ();
        }
        QzQIra2p (fdo6ChPlLO, rM1Ds2Z9);
        IVrUxt86YZu = getchar ();
    }
    return (782 - 782);
}

