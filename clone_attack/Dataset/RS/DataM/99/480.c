int main () {
    double  QMLyR9fFeJt;
    double  tTjDcYkB;
    double  g;
    double  h;
    int Nl3fvDHw;
    int amrEVusLX;
    int Hwjtl3Afck;
    int cGAdoUVh;
    int GWYrles53xS;
    int QDNeO2lfa;
    int Ra5NfEFmjXh [(1053 - 953)];
    QDNeO2lfa = 0;
    cGAdoUVh = 0;
    Hwjtl3Afck = 0;
    GWYrles53xS = 0;
    scanf ("%d", &Nl3fvDHw);
    for (amrEVusLX = 0; Nl3fvDHw > amrEVusLX; amrEVusLX = amrEVusLX + 1) {
        scanf ("%d", &Ra5NfEFmjXh[amrEVusLX]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (amrEVusLX = 0; amrEVusLX < Nl3fvDHw; amrEVusLX = amrEVusLX + 1) {
        if (Ra5NfEFmjXh[amrEVusLX] >= 1 && 18 >= Ra5NfEFmjXh[amrEVusLX])
            Hwjtl3Afck++;
        if (Ra5NfEFmjXh[amrEVusLX] >= 19 && Ra5NfEFmjXh[amrEVusLX] <= 35)
            cGAdoUVh = cGAdoUVh + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (Ra5NfEFmjXh[amrEVusLX] >= 36 && Ra5NfEFmjXh[amrEVusLX] <= 60)
            GWYrles53xS = GWYrles53xS +1;
        else if (Ra5NfEFmjXh[amrEVusLX] >= 61)
            QDNeO2lfa++;
    }
    QMLyR9fFeJt = (double ) (1063 - 963) * Hwjtl3Afck / Nl3fvDHw;
    tTjDcYkB = (double ) 100 * cGAdoUVh / Nl3fvDHw;
    g = (double ) 100 * GWYrles53xS / Nl3fvDHw;
    h = (double ) 100 * QDNeO2lfa / Nl3fvDHw;
    printf ("1-18: %.2lf%%\n", QMLyR9fFeJt);
    printf ("19-35: %.2lf%%\n", tTjDcYkB);
    printf ("36-60: %.2lf%%\n", g);
    printf ("60??: %.2lf%%\n", h);
    return 0;
}

