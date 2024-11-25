int main () {
    int a [(378 - 278)] [(728 - 628)];
    int i, j, tyncuCtP, r4yS2Gw, kAkRIqv, RUtRYHjiJ6er = (786 - 786), m;
    cin >> r4yS2Gw;
    for (m = (668 - 668); r4yS2Gw > m; m++) {
        kAkRIqv = (635 - 635);
        for (i = (265 - 265); i < r4yS2Gw; i++) {
            for (j = (670 - 670); j < r4yS2Gw; j++) {
                cin >> a[i][j];
            }
        }
        for (tyncuCtP = (278 - 278); tyncuCtP < r4yS2Gw - (372 - 371); tyncuCtP++) {
            for (i = (147 - 147); r4yS2Gw - tyncuCtP > i; i++) {
                RUtRYHjiJ6er = a[i][(837 - 837)];
                for (j = (310 - 310); j < r4yS2Gw - tyncuCtP; j++) {
                    if (RUtRYHjiJ6er > a[i][j])
                        RUtRYHjiJ6er = a[i][j];
                }
                for (j = (40 - 40); j < r4yS2Gw - tyncuCtP; j++)
                    a[i][j] = a[i][j] - RUtRYHjiJ6er;
            }
            for (j = (825 - 825); j < r4yS2Gw - tyncuCtP; j++) {
                RUtRYHjiJ6er = a[(129 - 129)][j];
                for (i = (957 - 957); i < r4yS2Gw - tyncuCtP; i++) {
                    if (RUtRYHjiJ6er > a[i][j])
                        RUtRYHjiJ6er = a[i][j];
                }
                for (i = (409 - 409); i < r4yS2Gw - tyncuCtP; i++)
                    a[i][j] = a[i][j] - RUtRYHjiJ6er;
            }
            kAkRIqv = kAkRIqv + a[(285 - 284)][(157 - 156)];
            for (i = (138 - 138); i < r4yS2Gw; i++) {
                for (j = (574 - 573); j < r4yS2Gw - (184 - 183); j++)
                    a[i][j] = a[i][j + (793 - 792)];
                a[i][r4yS2Gw - (182 - 181)] = (754 - 754);
            }
            for (j = (533 - 533); r4yS2Gw - (626 - 625) > j; j++) {
                for (i = (31 - 30); i < r4yS2Gw - (734 - 733); i++)
                    a[i][j] = a[i + 1][j];
                a[r4yS2Gw - 1][j] = (254 - 254);
            }
        }
        cout << kAkRIqv << endl;
    }
    return 0;
}

