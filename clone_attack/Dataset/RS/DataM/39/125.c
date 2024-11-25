main () {
    int hgaqKlG3k5 = 0, ca7PEGwVHi;
    int zong;
    zong = 0;
    int n;
    int lNmx2I;
    struct   {
        char Dd2vRuc [20];
        int qimo, rZ34wu9;
        char GTfPWGIs, CRdSrVJPYDi;
        int AbBZSFrw1hRx, iSajGPf8;
    }
    num [(203 - 103)];
    scanf ("%d", &n);
    {
        lNmx2I = 0;
        while (n > lNmx2I) {
            scanf ("%s %d %d %c %c %d", num[lNmx2I].Dd2vRuc, &num[lNmx2I].qimo, &num[lNmx2I].rZ34wu9, &num[lNmx2I].GTfPWGIs, &num[lNmx2I].CRdSrVJPYDi, &num[lNmx2I].AbBZSFrw1hRx);
            lNmx2I++;
        };
    }
    for (lNmx2I = 0; lNmx2I < n; lNmx2I++) {
        num[lNmx2I].iSajGPf8 = 0;
        if ((1031 - 951) < num[lNmx2I].qimo && (198 - 197) <= num[lNmx2I].AbBZSFrw1hRx)
            num[lNmx2I].iSajGPf8 += 8000;
        if ((262 - 177) < num[lNmx2I].qimo && 80 < num[lNmx2I].rZ34wu9)
            num[lNmx2I].iSajGPf8 = num[lNmx2I].iSajGPf8 + 4000;
        if (90 < num[lNmx2I].qimo)
            num[lNmx2I].iSajGPf8 = num[lNmx2I].iSajGPf8 + 2000;
        if (num[lNmx2I].qimo > 85 && num[lNmx2I].CRdSrVJPYDi == 'Y')
            num[lNmx2I].iSajGPf8 = num[lNmx2I].iSajGPf8 + 1000;
        if (num[lNmx2I].rZ34wu9 > 80 && num[lNmx2I].GTfPWGIs == 'Y')
            num[lNmx2I].iSajGPf8 += 850;
        zong += num[lNmx2I].iSajGPf8;
    }
    {
        lNmx2I = 0;
        while (lNmx2I < n) {
            if (num[lNmx2I].iSajGPf8 > hgaqKlG3k5) {
                hgaqKlG3k5 = num[lNmx2I].iSajGPf8;
                ca7PEGwVHi = lNmx2I;
            }
            lNmx2I++;
        };
    }
    printf ("%s\n", num[ca7PEGwVHi].Dd2vRuc);
    printf ("%d\n", hgaqKlG3k5);
    printf ("%d", zong);
    return 0;
}

