int main () {
    double  Dfyd5FXVa;
    double  sFyPStoIeaxd;
    double  vsfEGKj;
    double  KQypNeY2cEk;
    double  hryDguE;
    double  p7FGUbdNAH;
    double  wXPsEdiqY;
    double  dJ45wc3P;
    double  LUGTwhqH6I;
    double  PUZqWN;
    Dfyd5FXVa = 0;
    sFyPStoIeaxd = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    vsfEGKj = 0;
    KQypNeY2cEk = 0;
    scanf ("%lf\n", &hryDguE);
    while (hryDguE > 0) {
        hryDguE = hryDguE - 1;
        scanf ("%lf", &p7FGUbdNAH);
        if (p7FGUbdNAH >= 1 && p7FGUbdNAH <= 18)
            Dfyd5FXVa += 1;
        if (p7FGUbdNAH >= 19 && p7FGUbdNAH <= 35)
            sFyPStoIeaxd += 1;
        if (p7FGUbdNAH >= (814 - 778) && p7FGUbdNAH <= 60)
            vsfEGKj += 1;
        if (p7FGUbdNAH > 60)
            KQypNeY2cEk += 1;
    }
    wXPsEdiqY = Dfyd5FXVa / (Dfyd5FXVa +sFyPStoIeaxd + vsfEGKj + KQypNeY2cEk) * 100;
    dJ45wc3P = sFyPStoIeaxd / (Dfyd5FXVa +sFyPStoIeaxd + vsfEGKj + KQypNeY2cEk) * 100;
    LUGTwhqH6I = vsfEGKj / (Dfyd5FXVa +sFyPStoIeaxd + vsfEGKj + KQypNeY2cEk) * 100;
    PUZqWN = KQypNeY2cEk / (Dfyd5FXVa +sFyPStoIeaxd + vsfEGKj + KQypNeY2cEk) * 100;
    printf ("1-18: %.2lf%%\n", wXPsEdiqY);
    printf ("19-35: %.2lf%%\n", dJ45wc3P);
    printf ("36-60: %.2lf%%\n", LUGTwhqH6I);
    printf ("60??: %.2lf%%\n", PUZqWN);
    return 0;
}

