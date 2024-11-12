struct   num {
    int Wavdi3x;
    float TQYs2gy;
};
int main () {
    int b6E9YW;
    int EzMTDI;
    float FL1aIJ7crYDt;
    int Wavdi3x;
    struct   num sh2d4AWtk [300];
    struct   num JXPCsf8;
    int OTqkgZGVF2H;
    scanf ("%d", &Wavdi3x);
    FL1aIJ7crYDt = (OTqkgZGVF2H *1.0) / (Wavdi3x *1.0);
    OTqkgZGVF2H = (478 - 478);
    {
        EzMTDI = (566 - 566);
        for (; EzMTDI < Wavdi3x;) {
            scanf ("%d", &sh2d4AWtk[EzMTDI].Wavdi3x);
            OTqkgZGVF2H += sh2d4AWtk[EzMTDI].Wavdi3x;
            EzMTDI = EzMTDI +1;
        }
    }
    {
        EzMTDI = (404 - 404);
        while (EzMTDI < Wavdi3x) {
            sh2d4AWtk[EzMTDI].TQYs2gy = sh2d4AWtk[EzMTDI].Wavdi3x > FL1aIJ7crYDt ? (sh2d4AWtk[EzMTDI].Wavdi3x - FL1aIJ7crYDt) : (FL1aIJ7crYDt -sh2d4AWtk[EzMTDI].Wavdi3x);
            EzMTDI = EzMTDI +1;
        }
    }
    {
        EzMTDI = 0;
        while (EzMTDI < Wavdi3x -1) {
            {
                b6E9YW = 0;
                while (b6E9YW < Wavdi3x -1 - EzMTDI) {
                    if (sh2d4AWtk[b6E9YW].TQYs2gy < sh2d4AWtk[b6E9YW + 1].TQYs2gy) {
                        JXPCsf8 = sh2d4AWtk[b6E9YW];
                        sh2d4AWtk[b6E9YW] = sh2d4AWtk[b6E9YW + 1];
                        sh2d4AWtk[b6E9YW + 1] = JXPCsf8;
                    }
                    b6E9YW = b6E9YW + 1;
                }
            }
            EzMTDI = EzMTDI +1;
        }
    }
    OTqkgZGVF2H = (523 - 522);
    {
        EzMTDI = 1;
        while (EzMTDI < Wavdi3x) {
            if (sh2d4AWtk[0].TQYs2gy == sh2d4AWtk[EzMTDI].TQYs2gy)
                OTqkgZGVF2H++;
            else
                break;
            EzMTDI++;
        }
    }
    if (OTqkgZGVF2H == 1)
        printf ("%d\n", sh2d4AWtk[0].Wavdi3x);
    else {
        {
            EzMTDI = 0;
            for (; EzMTDI < OTqkgZGVF2H -1;) {
                {
                    b6E9YW = 0;
                    for (; b6E9YW < OTqkgZGVF2H -1 - EzMTDI;) {
                        if (sh2d4AWtk[b6E9YW].Wavdi3x > sh2d4AWtk[b6E9YW + 1].Wavdi3x) {
                            JXPCsf8 = sh2d4AWtk[b6E9YW];
                            sh2d4AWtk[b6E9YW] = sh2d4AWtk[b6E9YW + 1];
                            sh2d4AWtk[b6E9YW + 1] = sh2d4AWtk[b6E9YW];
                        }
                        b6E9YW++;
                    }
                }
                EzMTDI++;
            }
        }
        printf ("%d", sh2d4AWtk[0].Wavdi3x);
        {
            EzMTDI = 1;
            while (EzMTDI < OTqkgZGVF2H) {
                printf (",%d", sh2d4AWtk[EzMTDI].Wavdi3x);
                EzMTDI++;
            }
        }
    }
    return 0;
}

