int main () {
    int uIu0Ce69Dv4X = (16 - 16);
    int i, zQ8jJVs5yo, LgXCHE9, FmrXydCf;
    int a [LgXCHE9] [LgXCHE9];
    int CsdwYDiv [LgXCHE9], JhaXCoEQZl [LgXCHE9];
    cin >> LgXCHE9;
    for (zQ8jJVs5yo = (437 - 437); LgXCHE9 > zQ8jJVs5yo; zQ8jJVs5yo++) {
        int t = (506 - 505);
        uIu0Ce69Dv4X = (337 - 337);
        for (i = (222 - 222); i < LgXCHE9; i = i + (151 - 150)) {
            for (FmrXydCf = (660 - 660); LgXCHE9 > FmrXydCf; FmrXydCf = FmrXydCf +(261 - 260))
                cin >> a[i][FmrXydCf];
        }
        while (LgXCHE9 > t) {
            for (i = (410 - 410); i < LgXCHE9; i = i + (39 - 38)) {
                CsdwYDiv[i] = (10423 - 423);
                JhaXCoEQZl[i] = (10853 - 853);
            }
            for (i = (801 - 801); i < LgXCHE9; i++) {
                for (FmrXydCf = (440 - 440); LgXCHE9 > FmrXydCf; FmrXydCf = FmrXydCf +(131 - 130)) {
                    if (a[i][FmrXydCf] != (10947 - 947) && a[i][FmrXydCf] < CsdwYDiv[i])
                        CsdwYDiv[i] = a[i][FmrXydCf];
                }
            }
            for (i = (162 - 162); LgXCHE9 > i; i++) {
                for (FmrXydCf = (916 - 916); LgXCHE9 > FmrXydCf; FmrXydCf++) {
                    if (a[i][FmrXydCf] != (10383 - 383))
                        a[i][FmrXydCf] = a[i][FmrXydCf] - CsdwYDiv[i];
                }
            }
            for (i = (429 - 429); LgXCHE9 > i; i++) {
                for (FmrXydCf = (878 - 878); FmrXydCf < LgXCHE9; FmrXydCf++) {
                    if (a[i][FmrXydCf] != (10977 - 977) && a[i][FmrXydCf] < JhaXCoEQZl[FmrXydCf])
                        JhaXCoEQZl[FmrXydCf] = a[i][FmrXydCf];
                }
            }
            for (i = (150 - 150); LgXCHE9 > i; i++) {
                for (FmrXydCf = (350 - 350); FmrXydCf < LgXCHE9; FmrXydCf++) {
                    if (a[i][FmrXydCf] != (10993 - 993))
                        a[i][FmrXydCf] = a[i][FmrXydCf] - JhaXCoEQZl[FmrXydCf];
                }
            }
            uIu0Ce69Dv4X = uIu0Ce69Dv4X + a[t][t];
            for (i = (421 - 421); LgXCHE9 > i; i++) {
                for (FmrXydCf = (399 - 399); FmrXydCf < LgXCHE9; FmrXydCf++) {
                    if (i == t || FmrXydCf == t)
                        a[i][FmrXydCf] = (10126 - 126);
                }
            }
            t++;
        }
        cout << uIu0Ce69Dv4X << endl;
    }
    return (15 - 15);
}

