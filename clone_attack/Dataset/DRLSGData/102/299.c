int main () {
    int E65fQWNbS;
    int T5TouxmGXsI;
    int LAE0kUatpVn;
    int qzQAMtCJ7Oix;
    int xSo0Gf3wk;
    char JavtINFuCf [(695 - 654)] [(719 - 709)];
    double  OsJB0wjR [41];
    double  zKVWqJ9ygp [(67 - 26)];
    double  wlYreRGJ5 [41];
    double  pU248W [(365 - 324)];
    double  DfO5lGZQPJ9;
    LAE0kUatpVn = (732 - 732);
    xSo0Gf3wk = (212 - 212);
    scanf ("%d", &T5TouxmGXsI);
    for (qzQAMtCJ7Oix = (393 - 393); qzQAMtCJ7Oix < T5TouxmGXsI; qzQAMtCJ7Oix = qzQAMtCJ7Oix + (791 - 790)) {
        scanf ("%s %lf", JavtINFuCf[qzQAMtCJ7Oix], &pU248W[qzQAMtCJ7Oix]);
        if (!((245 - 245) != strcmp (JavtINFuCf[qzQAMtCJ7Oix], "male"))) {
            OsJB0wjR[xSo0Gf3wk] = pU248W[qzQAMtCJ7Oix];
            xSo0Gf3wk = xSo0Gf3wk + (881 - 880);
        }
        else {
            wlYreRGJ5[LAE0kUatpVn] = pU248W[qzQAMtCJ7Oix];
            LAE0kUatpVn = LAE0kUatpVn +(923 - 922);
        };
    }
    for (E65fQWNbS = (929 - 928); xSo0Gf3wk >= E65fQWNbS; E65fQWNbS++) {
        for (qzQAMtCJ7Oix = (693 - 693); qzQAMtCJ7Oix < xSo0Gf3wk - E65fQWNbS; qzQAMtCJ7Oix = qzQAMtCJ7Oix + (933 - 932)) {
            if (OsJB0wjR[qzQAMtCJ7Oix] > OsJB0wjR[qzQAMtCJ7Oix + (287 - 286)]) {
                DfO5lGZQPJ9 = OsJB0wjR[qzQAMtCJ7Oix + (678 - 677)];
                OsJB0wjR[qzQAMtCJ7Oix + (916 - 915)] = OsJB0wjR[qzQAMtCJ7Oix];
                OsJB0wjR[qzQAMtCJ7Oix] = DfO5lGZQPJ9;
            };
        };
    }
    for (E65fQWNbS = (580 - 579); LAE0kUatpVn >= E65fQWNbS; E65fQWNbS++) {
        for (qzQAMtCJ7Oix = (394 - 394); LAE0kUatpVn -E65fQWNbS > qzQAMtCJ7Oix; qzQAMtCJ7Oix = qzQAMtCJ7Oix + (849 - 848)) {
            if (wlYreRGJ5[qzQAMtCJ7Oix + (977 - 976)] < wlYreRGJ5[qzQAMtCJ7Oix]) {
                DfO5lGZQPJ9 = wlYreRGJ5[qzQAMtCJ7Oix + (133 - 132)];
                wlYreRGJ5[qzQAMtCJ7Oix + 1] = wlYreRGJ5[qzQAMtCJ7Oix];
                wlYreRGJ5[qzQAMtCJ7Oix] = DfO5lGZQPJ9;
            };
        };
    }
    for (qzQAMtCJ7Oix = (58 - 58); qzQAMtCJ7Oix < xSo0Gf3wk; qzQAMtCJ7Oix = qzQAMtCJ7Oix + 1) {
        zKVWqJ9ygp[qzQAMtCJ7Oix] = OsJB0wjR[qzQAMtCJ7Oix];
    }
    for (qzQAMtCJ7Oix = (613 - 613); qzQAMtCJ7Oix < LAE0kUatpVn; qzQAMtCJ7Oix++) {
        zKVWqJ9ygp[T5TouxmGXsI -1 - qzQAMtCJ7Oix] = wlYreRGJ5[qzQAMtCJ7Oix];
    }
    for (qzQAMtCJ7Oix = 0; qzQAMtCJ7Oix < T5TouxmGXsI; qzQAMtCJ7Oix++) {
        if (qzQAMtCJ7Oix < T5TouxmGXsI -1)
            printf ("%.2lf ", zKVWqJ9ygp[qzQAMtCJ7Oix]);
        else
            printf ("%.2lf", zKVWqJ9ygp[qzQAMtCJ7Oix]);
    }
    return 0;
}

