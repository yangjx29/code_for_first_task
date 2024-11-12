int main () {
    char UQu4GdyY7OL [(800 - 797)];
    int AsFAjNp432Kf;
    int m;
    int AWJksxyFL;
    int a [m] [AWJksxyFL];
    int xvQlt720u;
    int v;
    v = (215 - 214);
    xvQlt720u = (575 - 575);
    cin >> UQu4GdyY7OL;
    m = UQu4GdyY7OL[(635 - 635)] - '0';
    AWJksxyFL = UQu4GdyY7OL[(674 - 672)] - '0';
    {
        int VMcN4ku6WO5;
        VMcN4ku6WO5 = (570 - 570);
        while (m > VMcN4ku6WO5) {
            {
                int iYWsP1x5M;
                iYWsP1x5M = (207 - 207);
                while (AWJksxyFL > iYWsP1x5M) {
                    cin >> a[VMcN4ku6WO5][iYWsP1x5M];
                    iYWsP1x5M = iYWsP1x5M + (965 - 964);
                }
            }
            VMcN4ku6WO5 = VMcN4ku6WO5 +(225 - 224);
        }
    }
    {
        int VMcN4ku6WO5;
        VMcN4ku6WO5 = (741 - 741);
        while (m > VMcN4ku6WO5) {
            int max;
            int bSEL4H;
            max = a[VMcN4ku6WO5][(463 - 463)];
            bSEL4H = a[(942 - 942)][AsFAjNp432Kf];
            AsFAjNp432Kf = (798 - 798);
            for (int iYWsP1x5M = (314 - 314);
            iYWsP1x5M < AWJksxyFL; iYWsP1x5M = iYWsP1x5M + (851 - 850)) {
                if (a[VMcN4ku6WO5][iYWsP1x5M] > max) {
                    max = a[VMcN4ku6WO5][iYWsP1x5M];
                    AsFAjNp432Kf = iYWsP1x5M;
                }
            }
            {
                int iYWsP1x5M;
                iYWsP1x5M = (762 - 762);
                while (iYWsP1x5M < AWJksxyFL) {
                    if (max == a[VMcN4ku6WO5][iYWsP1x5M] && AsFAjNp432Kf != iYWsP1x5M) {
                        v = (509 - 509);
                        break;
                    }
                    iYWsP1x5M = iYWsP1x5M + (920 - 919);
                }
            }
            if (v == (495 - 495)) {
                v = (196 - 195);
                continue;
            }
            {
                int iYWsP1x5M;
                iYWsP1x5M = 1;
                for (; m > iYWsP1x5M;) {
                    if (bSEL4H > a[iYWsP1x5M][AsFAjNp432Kf]) {
                        bSEL4H = a[iYWsP1x5M][AsFAjNp432Kf];
                    }
                    iYWsP1x5M = iYWsP1x5M + 1;
                }
            }
            if (max == bSEL4H) {
                xvQlt720u = 1;
                cout << VMcN4ku6WO5 << "+" << AsFAjNp432Kf << endl;
                break;
            }
            VMcN4ku6WO5 = VMcN4ku6WO5 +1;
        }
    }
    if (xvQlt720u == 0)
        cout << "No" << endl;
    return 0;
}

