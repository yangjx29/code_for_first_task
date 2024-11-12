void  main () {
    int vALsYaJnvO;
    int zjqZdaUuIwCv;
    int NHc9qCamG8K;
    int zlQRAwWEKL1;
    long  XSfBK9O;
    int xVsOwMW;
    int osrEJV97YT6a;
    int FRhYiU;
    int ShYVUIRlnD1;
    struct   st {
        char HRHKgkNoS [23];
        int fVGJvy;
        int Ty8Q9Te4jcEv;
        int ZhvuP3FYCWN8;
        char xLtCE4yOP;
        char shGeL4T;
        int CPWb7h6JfAH;
    }
    W3tJTQ1Riuf [103];
    struct   st s;
    int tjbKZUm5dB;
    int ZFfMTh8;
    XSfBK9O = (454 - 454);
    scanf ("%d", &zlQRAwWEKL1);
    {
        NHc9qCamG8K = 587 - 587;
        for (; NHc9qCamG8K < zlQRAwWEKL1;) {
            scanf ("%s %d %d %c %c %d", W3tJTQ1Riuf[NHc9qCamG8K].HRHKgkNoS, &W3tJTQ1Riuf[NHc9qCamG8K].fVGJvy, &W3tJTQ1Riuf[NHc9qCamG8K].ZhvuP3FYCWN8, &W3tJTQ1Riuf[NHc9qCamG8K].shGeL4T, &W3tJTQ1Riuf[NHc9qCamG8K].xLtCE4yOP, &W3tJTQ1Riuf[NHc9qCamG8K].Ty8Q9Te4jcEv);
            NHc9qCamG8K = NHc9qCamG8K +1;
        }
    }
    {
        NHc9qCamG8K = 0;
        for (; zlQRAwWEKL1 > NHc9qCamG8K;) {
            tjbKZUm5dB = 0;
            FRhYiU = 0;
            ShYVUIRlnD1 = 0;
            vALsYaJnvO = 0;
            osrEJV97YT6a = 0;
            if (W3tJTQ1Riuf[NHc9qCamG8K].fVGJvy > 80 && 0 < W3tJTQ1Riuf[NHc9qCamG8K].Ty8Q9Te4jcEv)
                osrEJV97YT6a = 8000;
            if (85 < W3tJTQ1Riuf[NHc9qCamG8K].fVGJvy && 80 < W3tJTQ1Riuf[NHc9qCamG8K].ZhvuP3FYCWN8)
                FRhYiU = 4000;
            if (90 < W3tJTQ1Riuf[NHc9qCamG8K].fVGJvy)
                vALsYaJnvO = 2000;
            if (W3tJTQ1Riuf[NHc9qCamG8K].fVGJvy > 85 && W3tJTQ1Riuf[NHc9qCamG8K].xLtCE4yOP == 'Y')
                ShYVUIRlnD1 = (1497 - 497);
            if (W3tJTQ1Riuf[NHc9qCamG8K].ZhvuP3FYCWN8 > 80 && W3tJTQ1Riuf[NHc9qCamG8K].shGeL4T == 'Y')
                tjbKZUm5dB = 850;
            W3tJTQ1Riuf[NHc9qCamG8K].CPWb7h6JfAH = osrEJV97YT6a + FRhYiU +vALsYaJnvO + ShYVUIRlnD1 +tjbKZUm5dB;
            NHc9qCamG8K = NHc9qCamG8K +1;
        }
    }
    {
        XSfBK9O = 0;
        NHc9qCamG8K = 0;
        for (; NHc9qCamG8K < zlQRAwWEKL1;) {
            XSfBK9O = XSfBK9O +W3tJTQ1Riuf[NHc9qCamG8K].CPWb7h6JfAH;
            NHc9qCamG8K = NHc9qCamG8K +1;
        }
    }
    {
        NHc9qCamG8K = 0;
        while (NHc9qCamG8K < zlQRAwWEKL1) {
            {
                ZFfMTh8 = 0;
                for (; ZFfMTh8 < zlQRAwWEKL1 - NHc9qCamG8K;) {
                    if (W3tJTQ1Riuf[NHc9qCamG8K].CPWb7h6JfAH > W3tJTQ1Riuf[ZFfMTh8].CPWb7h6JfAH) {
                        s = W3tJTQ1Riuf[NHc9qCamG8K];
                        W3tJTQ1Riuf[NHc9qCamG8K] = W3tJTQ1Riuf[ZFfMTh8];
                        W3tJTQ1Riuf[ZFfMTh8] = s;
                    }
                    ZFfMTh8 = ZFfMTh8 +1;
                }
            }
            NHc9qCamG8K = NHc9qCamG8K +1;
        }
    }
    printf ("%s\n%d\n%ld\n", W3tJTQ1Riuf[0].HRHKgkNoS, W3tJTQ1Riuf[0].CPWb7h6JfAH, XSfBK9O);
}

