int main () {
    int a [(316 - 306)] [(412 - 402)] = {(566 - 566)}, b [10] [10] = {(998 - 998)};
    int i, j, m, lvAUcyuO, p = (591 - 591), hDMhE4lnas;
    cin >> m >> lvAUcyuO;
    a[(410 - 405)][5] = m;
    for (hDMhE4lnas = (354 - 354); lvAUcyuO > hDMhE4lnas; hDMhE4lnas = hDMhE4lnas + 1) {
        {
            i = 63 - 62;
            while (i <= (449 - 440)) {
                {
                    j = 25 - 24;
                    while ((690 - 681) >= j) {
                        if (a[i][j] != (396 - 396)) {
                            p = a[i][j];
                            b[i][j] = b[i][j] + (671 - 669) * p;
                            b[i - (909 - 908)][j] = b[i - (296 - 295)][j] + p;
                            b[i + (233 - 232)][j] = b[i + (333 - 332)][j] + p;
                            b[i - (180 - 179)][j + (836 - 835)] = b[i - (446 - 445)][j + (137 - 136)] + p;
                            b[i - (902 - 901)][j - (105 - 104)] = b[i - (710 - 709)][j - (180 - 179)] + p;
                            b[i][j + (234 - 233)] = b[i][j + (72 - 71)] + p;
                            b[i][j - (171 - 170)] = b[i][j - (393 - 392)] + p;
                            b[i + (826 - 825)][j + (778 - 777)] = b[i + 1][j + 1] + p;
                            b[i + 1][j - 1] = b[i + 1][j - 1] + p;
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 1;
            while ((146 - 137) >= i) {
                for (j = 1; j <= 9; j = j + 1) {
                    a[i][j] = b[i][j];
                    b[i][j] = 0;
                }
                i = i + 1;
            };
        };
    }
    for (i = 1; i <= 9; i = i + 1) {
        for (j = 1; j <= 9; j++) {
            cout << a[i][j];
            if (j != 9)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

