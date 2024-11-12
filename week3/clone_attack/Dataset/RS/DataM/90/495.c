int xSE3q2Wb1A9t (int HKtLOnk9, int E4KFXtME0) {
    int HfgLE0Y8V7;
    HfgLE0Y8V7 = (632 - 632);
    if (!(0 != HKtLOnk9) || !(1 != E4KFXtME0))
        HfgLE0Y8V7 = 1;
    else if (E4KFXtME0 > HKtLOnk9) {
        HfgLE0Y8V7 = xSE3q2Wb1A9t (HKtLOnk9, HKtLOnk9);
    }
    else {
        HfgLE0Y8V7 = xSE3q2Wb1A9t (HKtLOnk9, E4KFXtME0 -1) + xSE3q2Wb1A9t (HKtLOnk9 -E4KFXtME0, E4KFXtME0);
    }
    return (HfgLE0Y8V7);
}

int main () {
    int xwxErgVhzY6, m [2000], n [2000], kQJUNpT;
    scanf ("%d", &xwxErgVhzY6);
    {
        kQJUNpT = 0;
        while (kQJUNpT < xwxErgVhzY6) {
            scanf ("%d%d", &m[kQJUNpT], &n[kQJUNpT]);
            kQJUNpT = kQJUNpT + 1;
        };
    }
    {
        kQJUNpT = 0;
        while (kQJUNpT < xwxErgVhzY6) {
            printf ("%d\n", xSE3q2Wb1A9t (m[kQJUNpT], n[kQJUNpT]));
            kQJUNpT++;
        };
    }
    return 0;
}

