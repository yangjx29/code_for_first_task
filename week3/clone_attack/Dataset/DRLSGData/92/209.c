main () {
    int p;
    int jef36qpwP;
    int mL0QZkjc;
    int count = 0;
    int b [1000];
    int PJGchkI8xdLv [1000];
    int l;
    int UCvpagbIn;
    int ZYwRdHoEGt9P;
    int X7Wx9psF;
    int smYaBDnKR;
    int y;
    int EeCXULKx [1000];
    int wQucUgCjyOWV;
    int TExV3IN6Q;
    for (ZYwRdHoEGt9P = 0;; ZYwRdHoEGt9P = ZYwRdHoEGt9P +1) {
        scanf ("%d", &smYaBDnKR);
        if (!(0 != smYaBDnKR)) {
            break;
        }
        count = count + 1;
        for (UCvpagbIn = 0; UCvpagbIn <= smYaBDnKR - 1; UCvpagbIn = UCvpagbIn +1) {
            scanf ("%d", &PJGchkI8xdLv[UCvpagbIn]);
        }
        for (X7Wx9psF = 0; X7Wx9psF <= smYaBDnKR - 1; X7Wx9psF = X7Wx9psF +1) {
            scanf ("%d", &b[X7Wx9psF]);
        }
        for (UCvpagbIn = 0; UCvpagbIn <= smYaBDnKR - 1; UCvpagbIn = UCvpagbIn +1) {
            mL0QZkjc = PJGchkI8xdLv[UCvpagbIn];
            jef36qpwP = b[UCvpagbIn];
            for (X7Wx9psF = UCvpagbIn +1; X7Wx9psF <= smYaBDnKR - 1; X7Wx9psF = X7Wx9psF +1) {
                if (PJGchkI8xdLv[X7Wx9psF] < mL0QZkjc) {
                    PJGchkI8xdLv[UCvpagbIn] = PJGchkI8xdLv[X7Wx9psF];
                    PJGchkI8xdLv[X7Wx9psF] = mL0QZkjc;
                    mL0QZkjc = PJGchkI8xdLv[UCvpagbIn];
                }
                if (jef36qpwP > b[X7Wx9psF]) {
                    b[UCvpagbIn] = b[X7Wx9psF];
                    b[X7Wx9psF] = jef36qpwP;
                    jef36qpwP = b[UCvpagbIn];
                };
            };
        }
        wQucUgCjyOWV = 0;
        for (UCvpagbIn = 0; smYaBDnKR > UCvpagbIn; UCvpagbIn = UCvpagbIn +1) {
            if (PJGchkI8xdLv[UCvpagbIn] > b[UCvpagbIn]) {
                wQucUgCjyOWV = wQucUgCjyOWV + 200;
                continue;
            }
            else if (b[smYaBDnKR - 1] < PJGchkI8xdLv[smYaBDnKR - 1]) {
                for (X7Wx9psF = smYaBDnKR - 1; X7Wx9psF > UCvpagbIn; X7Wx9psF = X7Wx9psF -1) {
                    PJGchkI8xdLv[X7Wx9psF] = PJGchkI8xdLv[X7Wx9psF -1];
                    b[X7Wx9psF] = b[X7Wx9psF -1];
                }
                wQucUgCjyOWV = wQucUgCjyOWV + 200;
                continue;
            }
            else {
                if (b[smYaBDnKR - 1] > PJGchkI8xdLv[UCvpagbIn]) {
                    wQucUgCjyOWV = wQucUgCjyOWV - 200;
                }
                for (X7Wx9psF = smYaBDnKR - 1; X7Wx9psF > UCvpagbIn; X7Wx9psF = X7Wx9psF -1) {
                    b[X7Wx9psF] = b[X7Wx9psF -1];
                };
            };
        }
        EeCXULKx[ZYwRdHoEGt9P] = wQucUgCjyOWV;
    }
    for (ZYwRdHoEGt9P = 0; ZYwRdHoEGt9P <= count - 1; ZYwRdHoEGt9P++) {
        printf ("%d\n", EeCXULKx[ZYwRdHoEGt9P]);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

