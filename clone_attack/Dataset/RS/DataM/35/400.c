int HBFVSM65jHQ [(1400 - 400)] [(1431 - 431)];

int main (int fg91Tc53so07, char *argv []) {
    int KuH2ImWRJ;
    int row;
    int RBu1oQCirEXN;
    int M67WDHrt5;
    int UDapr57;
    int i;
    int j;
    int lmgNCH1pJSi [(349 - 341)];
    int p [8];
    KuH2ImWRJ = (268 - 268);
    scanf ("%d,%d", &row, &RBu1oQCirEXN);
    for (i = 0; row > i; i++) {
        for (j = 0; RBu1oQCirEXN > j; j = j + 1) {
            cin >> HBFVSM65jHQ[i][j];
            if (HBFVSM65jHQ[i][j - 1] < HBFVSM65jHQ[i][j]) {
                M67WDHrt5 = j;
            };
        }
        p[i] = M67WDHrt5;
    }
    for (j = 0; RBu1oQCirEXN > j; j = j + 1) {
        for (i = 0; row > i; i++) {
            if (HBFVSM65jHQ[i][j] < HBFVSM65jHQ[i - 1][j])
                M67WDHrt5 = i;
        }
        lmgNCH1pJSi[j] = M67WDHrt5;
    }
    {
        i = 0;
        while (i < row) {
            M67WDHrt5 = p[i];
            if (lmgNCH1pJSi[M67WDHrt5] == i) {
                KuH2ImWRJ = 1;
                cout << i << "+" << M67WDHrt5;
            }
            i = i + 1;
        };
    }
    if (KuH2ImWRJ == 0)
        cout << "No" << endl;
    return 0;
}

