int main () {
    int OSbrO8UhNe5Z, Mn8Z2FGt7ws [100], I2MfVKb0wYr [100], U6Hq5WAw7 [100], cHpDSAve, UmLtVQuiD, AZLzXGoiA, cN6icZ [100], zQceTSHqNBlh [100], vMe3R6c [100], BAfTlQse0 [100], ofbo0n2NE [100], VhHluY [100], gTAnMeBCs6, JwJfH1Soh;
    double  r7c0KdE [1000];
    double  Q1cinWR;
    scanf ("%d", &OSbrO8UhNe5Z);
    gTAnMeBCs6 = (OSbrO8UhNe5Z -(21 - 20)) * OSbrO8UhNe5Z / 2;
    {
        cHpDSAve = 901 - 900;
        while (OSbrO8UhNe5Z >= cHpDSAve) {
            scanf ("%d%d%d", &Mn8Z2FGt7ws[cHpDSAve], &I2MfVKb0wYr[cHpDSAve], &U6Hq5WAw7[cHpDSAve]);
            cHpDSAve = cHpDSAve + 1;
        }
    }
    {
        AZLzXGoiA = 1;
        cHpDSAve = 1;
        while (cHpDSAve <= OSbrO8UhNe5Z -1) {
            {
                UmLtVQuiD = cHpDSAve + 1;
                while (UmLtVQuiD <= OSbrO8UhNe5Z) {
                    cN6icZ[AZLzXGoiA] = Mn8Z2FGt7ws[cHpDSAve];
                    zQceTSHqNBlh[AZLzXGoiA] = I2MfVKb0wYr[cHpDSAve];
                    vMe3R6c[AZLzXGoiA] = U6Hq5WAw7[cHpDSAve];
                    BAfTlQse0[AZLzXGoiA] = Mn8Z2FGt7ws[UmLtVQuiD];
                    ofbo0n2NE[AZLzXGoiA] = I2MfVKb0wYr[UmLtVQuiD];
                    VhHluY[AZLzXGoiA] = U6Hq5WAw7[UmLtVQuiD];
                    r7c0KdE[AZLzXGoiA] = sqrt ((1.0 * cN6icZ[AZLzXGoiA] - BAfTlQse0[AZLzXGoiA]) * (cN6icZ[AZLzXGoiA] - BAfTlQse0[AZLzXGoiA]) + (zQceTSHqNBlh[AZLzXGoiA] - ofbo0n2NE[AZLzXGoiA]) * (zQceTSHqNBlh[AZLzXGoiA] - ofbo0n2NE[AZLzXGoiA]) + (vMe3R6c[AZLzXGoiA] - VhHluY[AZLzXGoiA]) * (vMe3R6c[AZLzXGoiA] - VhHluY[AZLzXGoiA]));
                    AZLzXGoiA = AZLzXGoiA +1;
                    UmLtVQuiD = UmLtVQuiD +1;
                }
            }
            cHpDSAve = cHpDSAve + 1;
        }
    }
    {
        cHpDSAve = 1;
        while (cHpDSAve <= gTAnMeBCs6) {
            {
                AZLzXGoiA = 1;
                while (AZLzXGoiA <= gTAnMeBCs6 - cHpDSAve) {
                    if (r7c0KdE[AZLzXGoiA] < r7c0KdE[AZLzXGoiA +1]) {
                        JwJfH1Soh = cN6icZ[AZLzXGoiA +1];
                        cN6icZ[AZLzXGoiA +1] = cN6icZ[AZLzXGoiA];
                        cN6icZ[AZLzXGoiA] = JwJfH1Soh;
                        JwJfH1Soh = zQceTSHqNBlh[AZLzXGoiA +1];
                        zQceTSHqNBlh[AZLzXGoiA +1] = zQceTSHqNBlh[AZLzXGoiA];
                        zQceTSHqNBlh[AZLzXGoiA] = JwJfH1Soh;
                        JwJfH1Soh = vMe3R6c[AZLzXGoiA +1];
                        vMe3R6c[AZLzXGoiA +1] = vMe3R6c[AZLzXGoiA];
                        vMe3R6c[AZLzXGoiA] = JwJfH1Soh;
                        JwJfH1Soh = BAfTlQse0[AZLzXGoiA +1];
                        BAfTlQse0[AZLzXGoiA +1] = BAfTlQse0[AZLzXGoiA];
                        BAfTlQse0[AZLzXGoiA] = JwJfH1Soh;
                        JwJfH1Soh = ofbo0n2NE[AZLzXGoiA +1];
                        ofbo0n2NE[AZLzXGoiA +1] = ofbo0n2NE[AZLzXGoiA];
                        ofbo0n2NE[AZLzXGoiA] = JwJfH1Soh;
                        JwJfH1Soh = VhHluY[AZLzXGoiA +1];
                        VhHluY[AZLzXGoiA +1] = VhHluY[AZLzXGoiA];
                        VhHluY[AZLzXGoiA] = JwJfH1Soh;
                        Q1cinWR = r7c0KdE[AZLzXGoiA +1];
                        r7c0KdE[AZLzXGoiA +1] = r7c0KdE[AZLzXGoiA];
                        r7c0KdE[AZLzXGoiA] = Q1cinWR;
                    }
                    AZLzXGoiA = AZLzXGoiA +1;
                }
            }
            cHpDSAve++;
        }
    }
    {
        cHpDSAve = 1;
        while (cHpDSAve <= gTAnMeBCs6) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", cN6icZ[cHpDSAve], zQceTSHqNBlh[cHpDSAve], vMe3R6c[cHpDSAve], BAfTlQse0[cHpDSAve], ofbo0n2NE[cHpDSAve], VhHluY[cHpDSAve], r7c0KdE[cHpDSAve]);
            cHpDSAve++;
        }
    }
    return 0;
}

