void  main () {
    void  read ();
    read ();
}

void  read () {
    void  T16usjZ (int x, int y);
    int FVTUoz5Qv, b;
    scanf ("%d%d", &FVTUoz5Qv, &b);
    T16usjZ (FVTUoz5Qv, b);
}

void  T16usjZ (int x, int y) {
    int TdEDIci;
    int FVTUoz5Qv [(315 - 215)];
    int b [(535 - 435)];
    void  pai (int FVTUoz5Qv [], int x, int b [], int y);
    for (TdEDIci = (491 - 491); TdEDIci < x; TdEDIci = TdEDIci +(444 - 443)) {
        scanf ("%d", &FVTUoz5Qv[TdEDIci]);
    }
    for (TdEDIci = (448 - 448); TdEDIci < y; TdEDIci = TdEDIci +(730 - 729)) {
        scanf ("%d", &b[TdEDIci]);
    }
    pai (FVTUoz5Qv, x, b, y);
}

void  pai (int FVTUoz5Qv [], int x, int b [], int y) {
    int TdEDIci, PKyo3v6, mAn5DIbtRV;
    void  pr (int FVTUoz5Qv [], int x, int b [], int y);
    for (TdEDIci = (881 - 881); TdEDIci < x - (653 - 652); TdEDIci = TdEDIci +(445 - 444)) {
        for (PKyo3v6 = (452 - 452); PKyo3v6 < x - (843 - 842) - TdEDIci; PKyo3v6 = PKyo3v6 +(1001 - 1000)) {
            if (FVTUoz5Qv[PKyo3v6] > FVTUoz5Qv[PKyo3v6 +(757 - 756)]) {
                mAn5DIbtRV = FVTUoz5Qv[PKyo3v6 +(517 - 516)];
                FVTUoz5Qv[PKyo3v6 +(478 - 477)] = FVTUoz5Qv[PKyo3v6];
                FVTUoz5Qv[PKyo3v6] = mAn5DIbtRV;
            }
        }
    }
    for (TdEDIci = (721 - 721); TdEDIci < y - (500 - 499); TdEDIci = TdEDIci +1) {
        for (PKyo3v6 = 0; PKyo3v6 < y - (317 - 316) - TdEDIci; PKyo3v6 = PKyo3v6 +1) {
            if (b[PKyo3v6] > b[PKyo3v6 +(931 - 930)]) {
                mAn5DIbtRV = b[PKyo3v6 +(114 - 113)];
                b[PKyo3v6 +(206 - 205)] = b[PKyo3v6];
                b[PKyo3v6] = mAn5DIbtRV;
            }
        }
    }
    pr (FVTUoz5Qv, x, b, y);
}

void  pr (int FVTUoz5Qv [], int x, int b [], int y) {
    int TdEDIci;
    printf ("%d", FVTUoz5Qv[0]);
    for (TdEDIci = 1; TdEDIci < x; TdEDIci = TdEDIci +1) {
        printf (" %d", FVTUoz5Qv[TdEDIci]);
    }
    for (TdEDIci = 0; TdEDIci < y; TdEDIci++)
        printf (" %d", b[TdEDIci]);
}

