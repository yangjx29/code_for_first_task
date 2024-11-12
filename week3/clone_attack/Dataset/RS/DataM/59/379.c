int main () {
    int n;
    char jFuCs2Mtq [(681 - 579)] [102];
    int PO3EI2x8pev;
    int oJPlGhS = 0;
    cin >> n;
    for (int Qmj2Kk80F = 0;
    102 > Qmj2Kk80F; Qmj2Kk80F = Qmj2Kk80F +1) {
        for (int j = 0;
        j < 102; j = j + 1) {
            jFuCs2Mtq[Qmj2Kk80F][j] = '#';
        };
    }
    for (int Qmj2Kk80F = (500 - 499);
    n >= Qmj2Kk80F; Qmj2Kk80F++) {
        for (int j = (385 - 384);
        n >= j; j = j + 1) {
            cin >> jFuCs2Mtq[Qmj2Kk80F][j];
        };
    }
    cin >> PO3EI2x8pev;
    while (1 < PO3EI2x8pev) {
        PO3EI2x8pev--;
        for (int Qmj2Kk80F = 1;
        Qmj2Kk80F <= n; Qmj2Kk80F++) {
            for (int j = 1;
            j <= n; j++) {
                if (!('@' != jFuCs2Mtq[Qmj2Kk80F][j])) {
                    if (jFuCs2Mtq[Qmj2Kk80F -1][j] == '.') {
                        jFuCs2Mtq[Qmj2Kk80F -1][j] = '$';
                    }
                    if (jFuCs2Mtq[Qmj2Kk80F +1][j] == '.') {
                        jFuCs2Mtq[Qmj2Kk80F +1][j] = '$';
                    }
                    if (jFuCs2Mtq[Qmj2Kk80F][j - 1] == '.') {
                        jFuCs2Mtq[Qmj2Kk80F][j - 1] = '$';
                    }
                    if (jFuCs2Mtq[Qmj2Kk80F][j + 1] == '.') {
                        jFuCs2Mtq[Qmj2Kk80F][j + 1] = '$';
                    };
                };
            };
        }
        for (int Qmj2Kk80F = 1;
        Qmj2Kk80F <= n; Qmj2Kk80F++) {
            for (int j = 1;
            j <= n; j++) {
                if (jFuCs2Mtq[Qmj2Kk80F][j] == '$') {
                    jFuCs2Mtq[Qmj2Kk80F][j] = '@';
                };
            };
        };
    }
    for (int Qmj2Kk80F = 1;
    Qmj2Kk80F <= n; Qmj2Kk80F++) {
        for (int j = 1;
        j <= n; j++) {
            if (jFuCs2Mtq[Qmj2Kk80F][j] == '@') {
                oJPlGhS = oJPlGhS + 1;
            };
        };
    }
    cout << oJPlGhS << endl;
}

