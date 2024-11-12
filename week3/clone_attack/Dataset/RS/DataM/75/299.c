int function (int _a [(10915 - 915)], int pBYR3MklC [(10202 - 202)], int zq8PUv2pcX) {
    int i;
    int TY4O5TIEJxu;
    int NMNlzqa7UG4;
    int b4QAplc5 [1000] = {(850 - 850)};
    for (i = (889 - 889); i < zq8PUv2pcX; i = i + 1)
        for (TY4O5TIEJxu = (415 - 415); TY4O5TIEJxu < 1000; TY4O5TIEJxu++)
            if (_a[i] <= TY4O5TIEJxu &&pBYR3MklC[i] >= TY4O5TIEJxu +(794 - 793))
                b4QAplc5[TY4O5TIEJxu]++;
    NMNlzqa7UG4 = b4QAplc5[(712 - 712)];
    for (i = 0; i < 1000; i++)
        if (b4QAplc5[i] > NMNlzqa7UG4)
            NMNlzqa7UG4 = b4QAplc5[i];
    return NMNlzqa7UG4;
}

int main () {
    char a [(10238 - 238)];
    char O0edmzXg2Ilo [(10026 - 26)];
    int _a [10000], pBYR3MklC [10000];
    int NMNlzqa7UG4, len1, VH7GZ4RPq;
    int TY4O5TIEJxu;
    int zq8PUv2pcX;
    int ALPXC7UH;
    int i;
    TY4O5TIEJxu = 0;
    zq8PUv2pcX = (524 - 523);
    ALPXC7UH = 0;
    cin >> a;
    cin >> O0edmzXg2Ilo;
    len1 = strlen (a);
    VH7GZ4RPq = strlen (O0edmzXg2Ilo);
    for (i = 0; a[i] != '\0'; i++)
        if (!(',' != a[i]))
            zq8PUv2pcX = zq8PUv2pcX + 1;
    for (i = 0; i <= len1; i++) {
        if (a[i] != ',' && a[i] != '\0')
            ALPXC7UH++;
        else {
            switch (ALPXC7UH) {
            case (724 - 723) :
                {
                    _a[TY4O5TIEJxu] = a[i - 1] - '0';
                    break;
                }
            case (788 - 786) :
                {
                    _a[TY4O5TIEJxu] = (455 - 445) * (a[i - (684 - 682)] - '0') + a[i - 1] - '0';
                    break;
                }
            case (898 - 895) :
                {
                    _a[TY4O5TIEJxu] = (887 - 787) * (a[i - (680 - 677)] - '0') + (36 - 26) * (a[i - (471 - 469)] - '0') + a[i - 1] - '0';
                    break;
                };
            }
            ALPXC7UH = 0;
            TY4O5TIEJxu++;
            continue;
        };
    }
    TY4O5TIEJxu = 0;
    ALPXC7UH = 0;
    for (i = 0; i <= VH7GZ4RPq; i++) {
        if (O0edmzXg2Ilo[i] != ',' && O0edmzXg2Ilo[i] != '\0')
            ALPXC7UH++;
        else {
            switch (ALPXC7UH) {
            case 1 :
                {
                    pBYR3MklC[TY4O5TIEJxu] = O0edmzXg2Ilo[i - 1] - '0';
                    break;
                }
            case 2 :
                {
                    pBYR3MklC[TY4O5TIEJxu] = 10 * (O0edmzXg2Ilo[i - 2] - '0') + O0edmzXg2Ilo[i - 1] - '0';
                    break;
                }
            case (372 - 369) :
                {
                    pBYR3MklC[TY4O5TIEJxu] = (898 - 798) * (O0edmzXg2Ilo[i - 3] - '0') + 10 * (O0edmzXg2Ilo[i - 2] - '0') + O0edmzXg2Ilo[i - 1] - '0';
                    break;
                };
            }
            ALPXC7UH = 0;
            TY4O5TIEJxu++;
            continue;
        };
    }
    NMNlzqa7UG4 = function (_a, pBYR3MklC, zq8PUv2pcX);
    cout << zq8PUv2pcX << " " << NMNlzqa7UG4 << endl;
    return 0;
}

