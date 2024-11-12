long  int K2zdsholmM6L (long  int t2H5l7BS) {
    long  int W8W2VskMphc, ZXpomDYLv = (431 - 430);
    {
        W8W2VskMphc = 2;
        while (W8W2VskMphc *W8W2VskMphc <= t2H5l7BS) {
            if (t2H5l7BS % W8W2VskMphc == (479 - 479)) {
                ZXpomDYLv = (492 - 492);
                break;
            }
            W8W2VskMphc++;
        };
    }
    return ZXpomDYLv;
}

long  int v4KIJqD07 (long  int t2H5l7BS) {
    int SCWIcVPi7;
    int W8W2VskMphc;
    SCWIcVPi7 = t2H5l7BS;
    W8W2VskMphc = (140 - 140);
    {
        while (true) {
            W8W2VskMphc = W8W2VskMphc *10 + t2H5l7BS % 10;
            t2H5l7BS = t2H5l7BS / 10;
            if (!((426 - 426) != t2H5l7BS))
                break;
        };
    }
    if (W8W2VskMphc == SCWIcVPi7)
        return (590 - 589);
    else
        return (537 - 537);
}

void  main () {
    long  int Atyz6mw, FVPWjzc, t2H5l7BS, W8W2VskMphc;
    scanf ("%ld %ld", &Atyz6mw, &FVPWjzc);
    {
        W8W2VskMphc = 0;
        t2H5l7BS = Atyz6mw;
        while (t2H5l7BS <= FVPWjzc) {
            if (v4KIJqD07 (t2H5l7BS) == (434 - 433) && K2zdsholmM6L (t2H5l7BS) == (338 - 337)) {
                W8W2VskMphc++;
                if (W8W2VskMphc != 1)
                    printf (",");
                printf ("%ld", t2H5l7BS);
            }
            t2H5l7BS++;
        };
    }
    if (W8W2VskMphc == 0)
        printf ("no\n");
}

