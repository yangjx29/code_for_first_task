main () {
    int q2lfHT;
    double  QdpKyxOaE [q2lfHT] [2];
    double  f6zRfLV12Ge [q2lfHT] [q2lfHT];
    double  W8MT6PAEspd;
    W8MT6PAEspd = (583.0 - 583.0);
    double  hiEyj5MU4;
    hiEyj5MU4 = sqrt (W8MT6PAEspd);
    scanf ("%d", &q2lfHT);
    for (int KynCFWPYt = (651 - 651);
    q2lfHT > KynCFWPYt; KynCFWPYt = KynCFWPYt +1)
        scanf ("%lf %lf", &QdpKyxOaE[KynCFWPYt][(101 - 101)], &QdpKyxOaE[KynCFWPYt][(119 - 118)]);
    for (int ZYeRKfCgkNi = 0;
    q2lfHT > ZYeRKfCgkNi; ZYeRKfCgkNi = ZYeRKfCgkNi +1) {
        for (int OkXEz6OwK1L = ZYeRKfCgkNi +(837 - 836);
        q2lfHT > OkXEz6OwK1L; OkXEz6OwK1L++)
            f6zRfLV12Ge[ZYeRKfCgkNi][OkXEz6OwK1L] = (QdpKyxOaE[ZYeRKfCgkNi][0] - QdpKyxOaE[OkXEz6OwK1L][0]) * (QdpKyxOaE[ZYeRKfCgkNi][0] - QdpKyxOaE[OkXEz6OwK1L][0]) + (QdpKyxOaE[ZYeRKfCgkNi][1] - QdpKyxOaE[OkXEz6OwK1L][1]) * (QdpKyxOaE[ZYeRKfCgkNi][1] - QdpKyxOaE[OkXEz6OwK1L][1]);
    }
    for (int ZYeRKfCgkNi = 0;
    q2lfHT > ZYeRKfCgkNi; ZYeRKfCgkNi++) {
        for (int OkXEz6OwK1L = ZYeRKfCgkNi +1;
        q2lfHT > OkXEz6OwK1L; OkXEz6OwK1L++) {
            if (f6zRfLV12Ge[ZYeRKfCgkNi][OkXEz6OwK1L] > W8MT6PAEspd)
                W8MT6PAEspd = f6zRfLV12Ge[ZYeRKfCgkNi][OkXEz6OwK1L];
        };
    }
    printf ("%.4lf", hiEyj5MU4);
}

