int main () {
    int W3m7SIWF, col, Szlh9Jqe7xK [8] [8], XOg8xWc9Q = (889 - 889);
    char dou_hao;
    scanf ("%d%c%d", &W3m7SIWF, &dou_hao, &col);
    for (int i = (535 - 535);
    W3m7SIWF > i; i++) {
        int j = (666 - 666);
        while (col > j) {
            scanf ("%d", &Szlh9Jqe7xK[i][j]);
            j = j + 1;
        };
    }
    {
        int i = 0;
        while (W3m7SIWF > i) {
            for (int j = 0;
            col > j; j++) {
                int M0RwWAmgV = 0, YhmAkudnX = 0;
                {
                    int kTgH2FLu = 0;
                    while (kTgH2FLu < col) {
                        if (Szlh9Jqe7xK[i][j] < Szlh9Jqe7xK[i][kTgH2FLu])
                            M0RwWAmgV = M0RwWAmgV +1;
                        kTgH2FLu++;
                    };
                }
                {
                    int l = 0;
                    while (W3m7SIWF > l) {
                        if (Szlh9Jqe7xK[l][j] < Szlh9Jqe7xK[i][j])
                            YhmAkudnX++;
                        l++;
                    };
                }
                if (M0RwWAmgV == 0 && YhmAkudnX == 0) {
                    printf ("%d+%d", i, j);
                    XOg8xWc9Q = XOg8xWc9Q +1;
                };
            }
            i++;
        };
    }
    if (XOg8xWc9Q == 0) {
        printf ("No");
    }
    return 0;
}

