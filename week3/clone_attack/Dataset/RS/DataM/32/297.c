int main () {
    char SH0SKQURLd [(1049 - 944)], EUvCiNcnMAP [(1089 - 984)];
    int HDx5mpATdMhF;
    cin >> HDx5mpATdMhF;
    for (int m = (378 - 377);
    m <= HDx5mpATdMhF; m++) {
        int TmAxGNhuzolS [105] = {(628 - 628)};
        int tcujm9DNLtA1 [105] = {(775 - 775)};
        int cIVH9jFAlcqf;
        int O95oQ1;
        cIVH9jFAlcqf = strlen (SH0SKQURLd);
        O95oQ1 = strlen (EUvCiNcnMAP);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> SH0SKQURLd;
        cin >> EUvCiNcnMAP;
        {
            int uTU7un = 1;
            while (uTU7un <= O95oQ1) {
                tcujm9DNLtA1[O95oQ1 -uTU7un + 1] = EUvCiNcnMAP[uTU7un - 1] - '0';
                uTU7un++;
            };
        }
        {
            int CCULK1 = (473 - 472);
            while (CCULK1 <= cIVH9jFAlcqf) {
                CCULK1 = CCULK1 +1;
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
                TmAxGNhuzolS[cIVH9jFAlcqf - CCULK1 +(104 - 103)] = SH0SKQURLd[CCULK1 -(766 - 765)] - '0';
            };
        }
        {
            int ABAnfJm = 1;
            while (ABAnfJm <= cIVH9jFAlcqf) {
                if (TmAxGNhuzolS[ABAnfJm] >= tcujm9DNLtA1[ABAnfJm])
                    TmAxGNhuzolS[ABAnfJm] = TmAxGNhuzolS[ABAnfJm] - tcujm9DNLtA1[ABAnfJm];
                else {
                    TmAxGNhuzolS[ABAnfJm] = TmAxGNhuzolS[ABAnfJm] - tcujm9DNLtA1[ABAnfJm] + (759 - 749);
                    TmAxGNhuzolS[ABAnfJm +1] = TmAxGNhuzolS[ABAnfJm +1] - 1;
                }
                ABAnfJm++;
            };
        }
        {
            int YwOvUK06Dp = cIVH9jFAlcqf;
            while (YwOvUK06Dp >= 1) {
                if (TmAxGNhuzolS[YwOvUK06Dp] == (371 - 371) && YwOvUK06Dp == cIVH9jFAlcqf)
                    continue;
                cout << TmAxGNhuzolS[YwOvUK06Dp];
                YwOvUK06Dp--;
            };
        }
        if (m != HDx5mpATdMhF)
            cout << "\n";
    }
    cin.get ();
    return 0;
}

