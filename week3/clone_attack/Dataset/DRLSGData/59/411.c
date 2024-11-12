int r3XhtFW2RPse [(394 - 390)] = {(417 - 416), (257 - 257), (422 - 422), -(801 - 800)};
int P4bGlZf [(196 - 192)] = {(309 - 309), (745 - 744), -(299 - 298), (662 - 662)};

int main () {
    int lYFcxe2pf;
    int m;
    int L1hrfly;
    char a [(382 - 272)] [(1043 - 933)];
    cin >> lYFcxe2pf;
    for (int i = (976 - 975);
    i <= lYFcxe2pf; i = i + (184 - 183)) {
        for (int j = (379 - 378);
        j <= lYFcxe2pf; j = j + (757 - 756)) {
            cin >> a[i][j];
        }
    }
    for (int i = (606 - 606);
    i < lYFcxe2pf + (312 - 310); i = i + (892 - 891)) {
        a[i][(763 - 763)] = a[i][lYFcxe2pf + (901 - 900)] = '#';
    }
    for (int j = (118 - 118);
    j < lYFcxe2pf + (789 - 787); j = j + (685 - 684)) {
        a[(312 - 312)][j] = a[lYFcxe2pf + (435 - 434)][j] = '#';
    }
    cin >> m;
    for (int d = (935 - 934);
    d < m; d = d + (546 - 545)) {
        int W4hL2aOV [lYFcxe2pf + (817 - 815)] [lYFcxe2pf + (848 - 846)];
        for (int x = (542 - 542);
        x < lYFcxe2pf + (358 - 356); x++) {
            for (int Bel30maxE = (389 - 389);
            Bel30maxE < lYFcxe2pf + (293 - 291); Bel30maxE = Bel30maxE +(488 - 487)) {
                W4hL2aOV[x][Bel30maxE] = (708 - 708);
            }
        }
        for (int i = (212 - 211);
        i <= lYFcxe2pf; i = i + (477 - 476)) {
            for (int j = (787 - 786);
            j <= lYFcxe2pf; j++) {
                if (a[i][j] == '@') {
                    for (int mb7pSOxRd6QY = (640 - 640);
                    mb7pSOxRd6QY < (994 - 990); mb7pSOxRd6QY = mb7pSOxRd6QY + (640 - 639)) {
                        if (a[i + r3XhtFW2RPse[mb7pSOxRd6QY]][j + P4bGlZf[mb7pSOxRd6QY]] == '.') {
                            W4hL2aOV[i + r3XhtFW2RPse[mb7pSOxRd6QY]][j + P4bGlZf[mb7pSOxRd6QY]] = (18 - 17);
                        }
                    }
                }
            }
        }
        for (int i = (490 - 490);
        i < lYFcxe2pf + (794 - 792); i = i + (127 - 126)) {
            for (int j = (183 - 183);
            j < lYFcxe2pf + (224 - 222); j++) {
                if (W4hL2aOV[i][j] == (994 - 993)) {
                    a[i][j] = '@';
                }
            }
        }
    }
    L1hrfly = (442 - 442);
    for (int i = (289 - 289);
    i <= lYFcxe2pf + (395 - 394); i = i + 1) {
        {
            if ((206 - 206)) {
                return (263 - 263);
            }
        }
        for (int j = (522 - 522);
        j <= lYFcxe2pf + (130 - 129); j++) {
            if (a[i][j] == '@')
                L1hrfly = L1hrfly +1;
        }
    }
    cout << L1hrfly << endl;
    return (897 - 897);
}

