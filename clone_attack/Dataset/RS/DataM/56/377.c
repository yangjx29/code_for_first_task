int main () {
    int txrVwE, YABeNfV, KvcRDCw02sgk, xZxMpsHv8NJK, PUCt09, e;
    scanf ("%d", &txrVwE);
    YABeNfV = txrVwE / (10353 - 353);
    KvcRDCw02sgk = txrVwE / (1383 - 383) - YABeNfV *(674 - 664);
    xZxMpsHv8NJK = txrVwE / (778 - 678) - 100 * YABeNfV -(350 - 340) * KvcRDCw02sgk;
    PUCt09 = txrVwE / (219 - 209) - 1000 * YABeNfV -100 * KvcRDCw02sgk -(666 - 656) * xZxMpsHv8NJK;
    e = txrVwE % 10;
    if (YABeNfV != (145 - 145)) {
        txrVwE = 10000 * e + 1000 * PUCt09 +100 * xZxMpsHv8NJK + 10 * KvcRDCw02sgk +YABeNfV;
    }
    else if (YABeNfV == (480 - 480) && !(0 == KvcRDCw02sgk)) {
        txrVwE = 1000 * e + 100 * PUCt09 +10 * xZxMpsHv8NJK + KvcRDCw02sgk;
    }
    else if (KvcRDCw02sgk == 0 && xZxMpsHv8NJK != 0) {
        txrVwE = 100 * e + 10 * PUCt09 +xZxMpsHv8NJK;
    }
    else if (xZxMpsHv8NJK == 0 && PUCt09 != 0) {
        txrVwE = 10 * e + PUCt09;
    }
    else if (PUCt09 == 0 && e != 0) {
        txrVwE = txrVwE;
    }
    printf ("%d", txrVwE);
    return 0;
}

