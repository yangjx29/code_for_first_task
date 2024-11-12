void  main () {
    int i, jmMgH6KY9E, DPc2B0umfng = 0, TNUm7vYt, y2, ABhwlaFzR, oepxmk, cOfcDr4, lsdi2urFWx, AOj1x52QhS = 0, IXWmaz6BN = 0;
    scanf ("%d %d %d", &TNUm7vYt, &ABhwlaFzR, &cOfcDr4);
    scanf ("%d %d %d", &y2, &oepxmk, &lsdi2urFWx);
    for (i = TNUm7vYt; i < y2; i = i + 1) {
        jmMgH6KY9E = 1;
        while (jmMgH6KY9E < 13) {
            if (!(1 != jmMgH6KY9E) || jmMgH6KY9E == 3 || !(5 != jmMgH6KY9E) || jmMgH6KY9E == 7 || !(8 != jmMgH6KY9E) || jmMgH6KY9E == 10 || jmMgH6KY9E == 12)
                DPc2B0umfng = DPc2B0umfng +31;
            else if (jmMgH6KY9E == 4 || jmMgH6KY9E == 6 || jmMgH6KY9E == 9 || jmMgH6KY9E == 11)
                DPc2B0umfng = DPc2B0umfng +30;
            else if (jmMgH6KY9E == 2) {
                if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
                    DPc2B0umfng = DPc2B0umfng +29;
                else
                    DPc2B0umfng = DPc2B0umfng +28;
            }
            jmMgH6KY9E = jmMgH6KY9E + 1;
        };
    }
    {
        jmMgH6KY9E = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (jmMgH6KY9E < ABhwlaFzR) {
            if (jmMgH6KY9E == 1 || jmMgH6KY9E == 3 || jmMgH6KY9E == 5 || jmMgH6KY9E == 7 || !(8 != jmMgH6KY9E) || jmMgH6KY9E == 10 || jmMgH6KY9E == 12)
                AOj1x52QhS = AOj1x52QhS +31;
            else if (jmMgH6KY9E == 4 || jmMgH6KY9E == 6 || jmMgH6KY9E == 9 || jmMgH6KY9E == 11)
                AOj1x52QhS = AOj1x52QhS +30;
            else if (jmMgH6KY9E == 2) {
                if (TNUm7vYt % 400 == 0 || TNUm7vYt % 4 == 0 && TNUm7vYt % 100 != 0)
                    AOj1x52QhS = AOj1x52QhS +29;
                else
                    AOj1x52QhS = AOj1x52QhS +28;
            }
            jmMgH6KY9E = jmMgH6KY9E + 1;
        };
    }
    AOj1x52QhS = AOj1x52QhS +cOfcDr4;
    {
        jmMgH6KY9E = 1;
        while (jmMgH6KY9E < oepxmk) {
            if (jmMgH6KY9E == 1 || jmMgH6KY9E == 3 || jmMgH6KY9E == 5 || jmMgH6KY9E == 7 || jmMgH6KY9E == 8 || jmMgH6KY9E == 10 || jmMgH6KY9E == 12)
                IXWmaz6BN = IXWmaz6BN +31;
            else {
                if (jmMgH6KY9E == 4 || jmMgH6KY9E == 6 || jmMgH6KY9E == 9 || jmMgH6KY9E == 11)
                    IXWmaz6BN = IXWmaz6BN +30;
                else {
                    if (jmMgH6KY9E == 2) {
                        if (y2 % 400 == 0 || y2 % 4 == 0 && y2 % 100 != 0)
                            IXWmaz6BN = IXWmaz6BN +29;
                        else
                            IXWmaz6BN = IXWmaz6BN +28;
                    };
                };
            }
            jmMgH6KY9E++;
        };
    }
    IXWmaz6BN = IXWmaz6BN +lsdi2urFWx;
    DPc2B0umfng = DPc2B0umfng -AOj1x52QhS+IXWmaz6BN;
    printf ("%d\n", DPc2B0umfng);
}

