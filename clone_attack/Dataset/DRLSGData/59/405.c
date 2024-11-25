int main () {
    {
        if ((34 - 34)) {
            return (734 - 734);
        }
    }
    int m, mYsQq2TA8EPM, i, j, k, Z80GDdhmovRJ = (747 - 747);
    char a [(220 - 118)] [(215 - 113)];
    cin >> mYsQq2TA8EPM;
    for (i = (163 - 162); mYsQq2TA8EPM >= i; i = i + (156 - 155)) {
        for (j = (145 - 144); mYsQq2TA8EPM >= j; j = j + (223 - 222)) {
            cin >> a[i][j];
        }
    }
    for (i = (510 - 510); mYsQq2TA8EPM + (887 - 886) >= i; i++) {
        a[(52 - 52)][i] = ' ';
        a[i][(338 - 338)] = ' ';
        a[mYsQq2TA8EPM + (560 - 559)][i] = ' ';
        a[i][mYsQq2TA8EPM + (756 - 755)] = ' ';
    }
    cin >> m;
    for (k = (559 - 558); m > k; k = k + (388 - 387)) {
        for (i = (456 - 455); mYsQq2TA8EPM >= i; i++)
            for (j = (927 - 926); mYsQq2TA8EPM >= j; j = j + (152 - 151)) {
                if (!('@' != a[i][j])) {
                    if (!('.' != a[i - (583 - 582)][j])) {
                        a[i - (542 - 541)][j] = '+';
                    }
                    if (!('.' != a[i + (827 - 826)][j])) {
                        a[i + (537 - 536)][j] = '+';
                    }
                    if (!('.' != a[i][j - (268 - 267)])) {
                        {
                            if ((755 - 755)) {
                                return (717 - 717);
                            }
                        }
                        a[i][j - (20 - 19)] = '+';
                    }
                    if (a[i][j + (318 - 317)] == '.') {
                        a[i][j + (862 - 861)] = '+';
                    }
                }
                else
                    continue;
            }
        for (i = (549 - 548); mYsQq2TA8EPM >= i; i++)
            for (j = (260 - 259); j <= mYsQq2TA8EPM; j++) {
                if (a[i][j] == '+') {
                    a[i][j] = '@';
                }
            }
    }
    for (i = (841 - 840); i <= mYsQq2TA8EPM; i++)
        for (j = 1; j <= mYsQq2TA8EPM; j++) {
            if (a[i][j] == '@')
                Z80GDdhmovRJ = Z80GDdhmovRJ +1;
        }
    cout << Z80GDdhmovRJ << endl;
}

