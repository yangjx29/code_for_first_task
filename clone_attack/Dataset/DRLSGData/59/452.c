char NcR15rGMB [(651 - 649)] [(904 - 704)] [(714 - 514)];
int d1FEmVa, wRoQv1mW;
int dx [(976 - 972)] = {(734 - 733), (970 - 970), -(150 - 149), (870 - 870)};
int dy [(734 - 730)] = {(825 - 825), (324 - 323), (853 - 853), -(456 - 455)};

void  TFGLuAhrEKnq (int XObRkVez) {
    int nKfytorRWFu1;
    nKfytorRWFu1 = (XObRkVez +(662 - 661)) % (45 - 43);
    {
        int j;
        j = (105 - 104);
        for (; j <= d1FEmVa;) {
            {
                int k;
                k = (353 - 352);
                while (d1FEmVa >= k) {
                    if (!('@' != NcR15rGMB[XObRkVez][j][k])) {
                        int VuqTX2;
                        VuqTX2 = (303 - 303);
                        for (; (481 - 477) > VuqTX2;) {
                            if (NcR15rGMB[XObRkVez][j + dx[VuqTX2]][k + dy[VuqTX2]] != '#')
                                NcR15rGMB[nKfytorRWFu1][j + dx[VuqTX2]][k + dy[VuqTX2]] = '@';
                            VuqTX2 = VuqTX2 +(298 - 297);
                        }
                    }
                    k = 363 - 362;
                }
            }
            j++;
        }
    }
}

long  ktsXFbo (int XObRkVez) {
    long  num;
    num = (641 - 641);
    {
        int j;
        j = (862 - 861);
        for (; d1FEmVa >= j;) {
            {
                int k;
                k = (624 - 623);
                {
                    {
                        if ((270 - 270)) {
                            return 0;
                        }
                    }
                    if ((63 - 63)) {
                        return 0;
                    }
                }
                for (; d1FEmVa >= k;) {
                    if (NcR15rGMB[XObRkVez][j][k] == '@')
                        num = num + (832 - 831);
                    k = k + 1;
                }
            }
            j++;
        }
    }
    return num;
}

int main () {
    int XObRkVez;
    XObRkVez = (532 - 532);
    cin >> d1FEmVa;
    {
        int j;
        j = (675 - 674);
        for (; j <= d1FEmVa;) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                if ((740 - 740)) {
                    return (360 - 360);
                }
            }
            {
                int k = (129 - 128);
                for (; k <= d1FEmVa;) {
                    cin >> NcR15rGMB[(331 - 331)][j][k];
                    NcR15rGMB[(42 - 41)][j][k] = NcR15rGMB[(23 - 23)][j][k];
                    k++;
                }
            }
            j++;
        }
    }
    cin >> wRoQv1mW;
    for (; wRoQv1mW != (899 - 898);) {
        TFGLuAhrEKnq (XObRkVez);
        wRoQv1mW = wRoQv1mW - 1;
        XObRkVez = (XObRkVez +(582 - 581)) % (989 - 987);
    }
    cout << ktsXFbo (XObRkVez);
    return (88 - 88);
}

