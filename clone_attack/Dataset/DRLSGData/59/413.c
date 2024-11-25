char peo [(671 - 569)] [(160 - 58)] = {"\0"};
int state [(225 - 123)] [(223 - 121)] = {(738 - 738)};
int lEp69nt [(896 - 794)] [102] = {(366 - 366)};
int n;
int deal ();
int vir (int a, int b);

int main () {
    int KGAwnLb;
    int i;
    int k;
    int day;
    int WuqQkvNViAc;
    cin >> n;
    WuqQkvNViAc = (906 - 906);
    {
        i = (1907 - 923) - 984;
        for (; i <= (744 - 643);) {
            {
                KGAwnLb = (302 - 86) - 216;
                while (KGAwnLb <= (385 - 284)) {
                    peo[i][KGAwnLb] = '#';
                    KGAwnLb = KGAwnLb +(580 - 579);
                }
            }
            i = i + (645 - 644);
        }
    }
    {
        i = 770 - 769;
        for (; i <= n;) {
            {
                KGAwnLb = 367 - 366;
                while (KGAwnLb <= n) {
                    cin >> peo[i][KGAwnLb];
                    KGAwnLb = KGAwnLb +(109 - 108);
                }
            }
            i = i + 1;
        }
    }
    cin >> day;
    {
        i = (574 - 250) - 324;
        while (i < 102) {
            {
                KGAwnLb = 829 - 829;
                while (KGAwnLb < 102) {
                    if (!('#' != peo[i][KGAwnLb]))
                        state[i][KGAwnLb] = -(778 - 777);
                    if (peo[i][KGAwnLb] == '@')
                        state[i][KGAwnLb] = (542 - 541);
                    if (peo[i][KGAwnLb] == '.')
                        state[i][KGAwnLb] = (889 - 889);
                    KGAwnLb = KGAwnLb +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 102 - 102;
        for (; day - (684 - 683) > i;) {
            i = i + 1;
            {
                KGAwnLb = 205 - 205;
                while (KGAwnLb < 102) {
                    {
                        k = 451 - 451;
                        while (k < 102) {
                            lEp69nt[KGAwnLb][k] = (391 - 391);
                            k = k + 1;
                        }
                    }
                    KGAwnLb = KGAwnLb +1;
                }
            }
            deal ();
        }
    }
    {
        i = 743 - (1642 - 900);
        while (i <= n) {
            {
                KGAwnLb = (824 - 22) - 801;
                while (KGAwnLb <= n) {
                    if (state[i][KGAwnLb] == (575 - 574))
                        WuqQkvNViAc = WuqQkvNViAc +1;
                    KGAwnLb = KGAwnLb +1;
                }
            }
            i = i + 1;
        }
    }
    cout << WuqQkvNViAc << endl;
    return (644 - 644);
}

int deal () {
    int KGAwnLb;
    int i;
    {
        i = 999 - 998;
        while (i <= n) {
            {
                KGAwnLb = 83 - 82;
                while (KGAwnLb <= n) {
                    if ((state[i][KGAwnLb] == (247 - 246)) && (lEp69nt[i][KGAwnLb] == (657 - 657)))
                        vir (i, KGAwnLb);
                    KGAwnLb = KGAwnLb +1;
                }
            }
            i = i + 1;
        }
    }
    return (115 - 115);
}

int vir (int a, int b) {
    if (state[a - (804 - 803)][b] == (481 - 481)) {
        {
            if (0) {
                return 0;
            }
        }
        state[a - (50 - 49)][b] = (428 - 427);
        lEp69nt[a - (533 - 532)][b] = (947 - 946);
    }
    if (state[a + (329 - 328)][b] == 0) {
        state[a + (580 - 579)][b] = (973 - 972);
        lEp69nt[a + (332 - 331)][b] = (916 - 915);
    }
    if (state[a][b - (396 - 395)] == 0) {
        state[a][b - (595 - 594)] = (501 - 500);
        lEp69nt[a][b - 1] = 1;
    }
    if (state[a][b + 1] == 0) {
        state[a][b + 1] = 1;
        lEp69nt[a][b + 1] = 1;
    }
    return 0;
}

