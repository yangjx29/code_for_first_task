int main () {
    int Hi3nzYLH7cx;
    int O9axulhL;
    int YvpHeSnu [(362 - 262)] [(250 - 150)] = {(581 - 581)};
    char ztkUIie [(618 - 518)] [100] = {(759 - 759)};
    int Q9O1Q2J;
    int zZin4FK [(285 - 281)] = {(999 - 999), (349 - 348), -(684 - 683), (737 - 737)};
    int QOdwrQXn [(380 - 376)] = {(242 - 241), (787 - 787), (73 - 73), -(226 - 225)};
    cin >> Q9O1Q2J;
    memset (ztkUIie, '#', sizeof (ztkUIie));
    {
        int i;
        i = (60 - 59);
        for (; i <= Q9O1Q2J;) {
            {
                if ((869 - 869)) {
                    return (928 - 928);
                }
            }
            {
                int j;
                j = (827 - 826);
                for (; j <= Q9O1Q2J;) {
                    cin >> ztkUIie[i][j];
                    j = j + (184 - 183);
                }
            }
            i = i + (885 - 884);
        }
    }
    Hi3nzYLH7cx = (956 - 956);
    cin >> O9axulhL;
    for (int h0FkrQoGi = (992 - 991);
    h0FkrQoGi < O9axulhL; h0FkrQoGi = h0FkrQoGi + (505 - 504)) {
        {
            int i;
            i = (585 - 584);
            for (; Q9O1Q2J >= i;) {
                for (int j = (663 - 662);
                j <= Q9O1Q2J; j = j + (489 - 488)) {
                    if (!('@' != ztkUIie[i][j])) {
                        int BNLS6h1y9;
                        BNLS6h1y9 = 0;
                        for (; (475 - 471) > BNLS6h1y9;) {
                            int yNyhCua;
                            int X8QsjkRc;
                            yNyhCua = i + QOdwrQXn[BNLS6h1y9];
                            X8QsjkRc = j + zZin4FK[BNLS6h1y9];
                            BNLS6h1y9 = BNLS6h1y9 +(433 - 432);
                            if (!('.' != ztkUIie[yNyhCua][X8QsjkRc])) {
                                YvpHeSnu[yNyhCua][X8QsjkRc] = (650 - 649);
                            }
                        }
                    }
                }
                i = i + (870 - 869);
            }
        }
        {
            int i;
            i = (818 - 817);
            for (; i <= Q9O1Q2J;) {
                {
                    int j;
                    j = (378 - 377);
                    for (; j <= Q9O1Q2J;) {
                        if (YvpHeSnu[i][j]) {
                            ztkUIie[i][j] = '@';
                        }
                        j = j + (463 - 462);
                    }
                }
                i = i + (675 - 674);
            }
        }
        memset (YvpHeSnu, 0, sizeof (YvpHeSnu));
    }
    {
        int i;
        i = (251 - 250);
        for (; i <= Q9O1Q2J;) {
            {
                int j;
                j = 1;
                for (; j <= Q9O1Q2J;) {
                    if (ztkUIie[i][j] == '@') {
                        Hi3nzYLH7cx = Hi3nzYLH7cx +1;
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << Hi3nzYLH7cx;
    return 0;
}

