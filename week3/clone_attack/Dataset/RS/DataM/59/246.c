int coMCW9cfA1, xl9kVURrJ, dHPG0bRcmDux, L0XZhO, SbBXaLIhv, KBb4AgCpK20, x, r9kHLj, q;
char c [(128 - 126)] [100] [100];

int main () {
    SbBXaLIhv = 0;
    cin >> coMCW9cfA1;
    KBb4AgCpK20 = (893 - 893);
    for (dHPG0bRcmDux = (854 - 853); coMCW9cfA1 >= dHPG0bRcmDux; dHPG0bRcmDux = dHPG0bRcmDux + 1) {
        L0XZhO = 484 - 483;
        while (coMCW9cfA1 >= L0XZhO) {
            cin >> c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO];
            L0XZhO = L0XZhO +1;
        };
    }
    cin >> xl9kVURrJ;
    xl9kVURrJ = xl9kVURrJ - 1;
    while ((519 - 519) < xl9kVURrJ) {
        q = 1 - KBb4AgCpK20;
        for (dHPG0bRcmDux = 1; coMCW9cfA1 >= dHPG0bRcmDux; dHPG0bRcmDux++)
            for (L0XZhO = 1; coMCW9cfA1 >= L0XZhO; L0XZhO = L0XZhO +1) {
                if (c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO] == '@') {
                    x = dHPG0bRcmDux - 1;
                    r9kHLj = L0XZhO;
                    if (!('#' == c[KBb4AgCpK20][x][r9kHLj]))
                        c[q][x][r9kHLj] = '@';
                    r9kHLj = L0XZhO;
                    x = dHPG0bRcmDux + 1;
                    if (c[KBb4AgCpK20][x][r9kHLj] != '#')
                        c[q][x][r9kHLj] = '@';
                    r9kHLj = L0XZhO -1;
                    x = dHPG0bRcmDux;
                    if (c[KBb4AgCpK20][x][r9kHLj] != '#')
                        c[q][x][r9kHLj] = '@';
                    x = dHPG0bRcmDux;
                    r9kHLj = L0XZhO +1;
                    if (c[KBb4AgCpK20][x][r9kHLj] != '#')
                        c[q][x][r9kHLj] = '@';
                }
                if ((c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO] == '@') || (c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO] == '#'))
                    c[q][dHPG0bRcmDux][L0XZhO] = c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO];
            }
        KBb4AgCpK20 = q;
        xl9kVURrJ = xl9kVURrJ - 1;
    }
    for (dHPG0bRcmDux = 1; dHPG0bRcmDux <= coMCW9cfA1; dHPG0bRcmDux++)
        for (L0XZhO = 1; L0XZhO <= coMCW9cfA1; L0XZhO++)
            if (c[KBb4AgCpK20][dHPG0bRcmDux][L0XZhO] == '@')
                SbBXaLIhv = SbBXaLIhv +1;
    cout << SbBXaLIhv;
    cin >> SbBXaLIhv;
    return 0;
}

