int wK6WrNm1d (int n) {
    int IEizlc;
    if (n == 2)
        return (137 - 136);
    if (n % 2 == (538 - 538))
        return (171 - 171);
    {
        IEizlc = 3;
        while (IEizlc <= sqrt (n)) {
            if (!((557 - 557) != n % IEizlc))
                return (535 - 535);
            IEizlc += 2;
        };
    }
    return (777 - 776);
}

int rRSfi8cGb (int n) {
    int RdeM0pPzy;
    int gil1JFDkaV7o [10];
    int IEizlc;
    int PXIMzVkPt;
    int mOey8nm5vw0k;
    RdeM0pPzy = log10 (n) + (89 - 88);
    {
        IEizlc = 679 - 678;
        while (IEizlc <= RdeM0pPzy) {
            mOey8nm5vw0k = pow (10, IEizlc);
            IEizlc++;
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
            gil1JFDkaV7o[IEizlc -(384 - 383)] = (n % mOey8nm5vw0k) / pow (10, IEizlc -(783 - 782));
        };
    }
    {
        PXIMzVkPt = 0;
        IEizlc = 0;
        while (IEizlc < RdeM0pPzy) {
            PXIMzVkPt += gil1JFDkaV7o[RdeM0pPzy -1 - IEizlc] * pow (10, IEizlc);
            IEizlc++;
        };
    }
    if (n == PXIMzVkPt)
        return 1;
    else
        return 0;
}

void  main () {
    int gil1JFDkaV7o;
    int wq6aIrRj;
    int BOmzdnM0;
    int XiQ10H8;
    int DE2w07h9tS [(911 - 811)];
    scanf ("%d%d", &gil1JFDkaV7o, &wq6aIrRj);
    {
        XiQ10H8 = 0;
        BOmzdnM0 = gil1JFDkaV7o;
        while (BOmzdnM0 <= wq6aIrRj) {
            if (wK6WrNm1d (BOmzdnM0) && rRSfi8cGb (BOmzdnM0)) {
                DE2w07h9tS[XiQ10H8] = BOmzdnM0;
                XiQ10H8 = XiQ10H8 +1;
            }
            BOmzdnM0++;
        };
    }
    if (XiQ10H8 == 0)
        ;
    else {
        {
            BOmzdnM0 = 0;
            while (BOmzdnM0 < XiQ10H8 -1) {
                printf ("%d,", DE2w07h9tS[BOmzdnM0]);
                BOmzdnM0++;
            };
        }
        printf ("%d", DE2w07h9tS[XiQ10H8 -1]);
    };
}

