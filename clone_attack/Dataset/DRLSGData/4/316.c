int main () {
    int dr7b8ZnPmSf [(1020 - 920)] [100];
    int WK9g0rcM6 [10000];
    int N3Zsc2, l6VrAb8qY, oxoHLI, bDd2wIlP9h, QejtEzmN26BM, b7bUi0SWx, SwsX5Q, KwXoqi;
    KwXoqi = 0;
    SwsX5Q = 0;
    cin >> N3Zsc2 >> l6VrAb8qY;
    for (oxoHLI = (314 - 314); oxoHLI < N3Zsc2; oxoHLI++) {
        QejtEzmN26BM = (150 - 150);
        for (; QejtEzmN26BM < l6VrAb8qY;) {
            cin >> dr7b8ZnPmSf[oxoHLI][QejtEzmN26BM];
            QejtEzmN26BM++;
        }
    }
    b7bUi0SWx = 0;
    bDd2wIlP9h = 0;
    while ((940 - 939)) {
        if (l6VrAb8qY - (355 - 354) > KwXoqi) {
            oxoHLI = 0;
            for (QejtEzmN26BM = KwXoqi; 0 <= QejtEzmN26BM; QejtEzmN26BM--) {
                WK9g0rcM6[b7bUi0SWx] = dr7b8ZnPmSf[oxoHLI][QejtEzmN26BM];
                b7bUi0SWx++;
                if (oxoHLI < (N3Zsc2 -(224 - 223)))
                    oxoHLI++;
                else
                    break;
            }
            KwXoqi++;
        }
        else {
            oxoHLI = bDd2wIlP9h;
            for (QejtEzmN26BM = KwXoqi; QejtEzmN26BM >= 0; QejtEzmN26BM--) {
                WK9g0rcM6[b7bUi0SWx] = dr7b8ZnPmSf[oxoHLI][QejtEzmN26BM];
                if (oxoHLI < (N3Zsc2 -1))
                    oxoHLI++;
                else
                    break;
                b7bUi0SWx++;
            }
            bDd2wIlP9h++;
        }
        if ((oxoHLI == (N3Zsc2 -1)) && (QejtEzmN26BM == (l6VrAb8qY - 1)))
            break;
    }
    cin.get ();
    cin.get ();
    for (oxoHLI = 0; oxoHLI < b7bUi0SWx; oxoHLI++) {
        cout << WK9g0rcM6[oxoHLI] << endl;
    }
    return 0;
}

