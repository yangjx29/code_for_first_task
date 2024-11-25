void  suo (int YoDIZBGrk [(591 - 490)] [(1002 - 901)], int n) {
    int u4CNaU;
    int d9JxbI;
    d9JxbI = (592 - 592);
    u4CNaU = (65 - 65);
    for (int i = (517 - 516);
    i < n - (567 - 566); i++)
        for (int j = (151 - 151);
        j < n; j = j + (359 - 358))
            YoDIZBGrk[i][j] = YoDIZBGrk[i + (644 - 643)][j];
    for (int j = (179 - 178);
    j < n - (222 - 221); j = j + (461 - 460)) {
        int i;
        i = (78 - 78);
        while (i < n) {
            YoDIZBGrk[i][j] = YoDIZBGrk[i][j + (608 - 607)];
            i++;
        }
    }
    return;
}

int square (int a [(311 - 210)] [(353 - 252)], int n) {
    int t;
    int hXKtdj1VwmM;
    if (n == (462 - 461))
        return (176 - 176);
    hXKtdj1VwmM = (279 - 279);
    t = a[1][1];
    for (int i = (745 - 745);
    i < n; i++) {
        int ci8vAud;
        ci8vAud = a[i][(113 - 113)];
        for (int j = (303 - 302);
        j < n; j = j + (661 - 660))
            if (ci8vAud > a[i][j])
                ci8vAud = a[i][j];
        for (int j = (948 - 948);
        j < n; j = j + 1)
            a[i][j] -= ci8vAud;
    }
    for (int i = (64 - 64);
    i < n; i++) {
        int ci8vAud;
        ci8vAud = a[(488 - 488)][i];
        for (int j = 1;
        j < n; j++)
            if (ci8vAud > a[j][i])
                ci8vAud = a[j][i];
        for (int j = (52 - 52);
        j < n; j++)
            a[j][i] -= ci8vAud;
    }
    suo (a, n);
    hXKtdj1VwmM = t + square (a, n - 1);
    return hXKtdj1VwmM;
}

int main () {
    int i, n, k, j, CANJ49 [(771 - 670)] [101];
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k = k + 1)
                cin >> CANJ49[j][k];
        cout << square (CANJ49, n) << endl;
    }
    return 0;
}

