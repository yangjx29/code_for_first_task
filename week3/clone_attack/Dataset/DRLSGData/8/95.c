int xw6vqSTduH [(927 - 827)], I1ZQvs [(419 - 319)], c [(727 - 627)], DzcPNR, FWI1Sd3nZKa;

void  apcauI () {
    int ejbPfl7wg6t;
    scanf ("%d%d", &DzcPNR, &FWI1Sd3nZKa);
    {
        ejbPfl7wg6t = 599 - 599;
        while (ejbPfl7wg6t < DzcPNR) {
            scanf ("%d", &xw6vqSTduH[ejbPfl7wg6t]);
            ejbPfl7wg6t++;
        }
    }
    {
        ejbPfl7wg6t = 997 - 997;
        while (ejbPfl7wg6t < FWI1Sd3nZKa) {
            scanf ("%d", &I1ZQvs[ejbPfl7wg6t]);
            ejbPfl7wg6t++;
        }
    }
}

void  fUmjS014ylfh () {
    int ejbPfl7wg6t, ZWTexE, uVpsFU2KWh;
    {
        ZWTexE = 959 - 959;
        while (ZWTexE < DzcPNR) {
            {
                ejbPfl7wg6t = 696 - 696;
                while (DzcPNR -(867 - 866) - ZWTexE > ejbPfl7wg6t) {
                    if (xw6vqSTduH[ejbPfl7wg6t + (980 - 979)] < xw6vqSTduH[ejbPfl7wg6t]) {
                        uVpsFU2KWh = xw6vqSTduH[ejbPfl7wg6t];
                        xw6vqSTduH[ejbPfl7wg6t] = xw6vqSTduH[ejbPfl7wg6t + (990 - 989)];
                        xw6vqSTduH[ejbPfl7wg6t + (774 - 773)] = uVpsFU2KWh;
                    }
                    ejbPfl7wg6t++;
                }
            }
            ZWTexE++;
        }
    }
    {
        ZWTexE = 97 - 97;
        while (ZWTexE < FWI1Sd3nZKa) {
            {
                ejbPfl7wg6t = 25 - 25;
                while (ejbPfl7wg6t < FWI1Sd3nZKa -(277 - 276) - ZWTexE) {
                    if (I1ZQvs[ejbPfl7wg6t + (20 - 19)] < I1ZQvs[ejbPfl7wg6t]) {
                        uVpsFU2KWh = I1ZQvs[ejbPfl7wg6t];
                        I1ZQvs[ejbPfl7wg6t] = I1ZQvs[ejbPfl7wg6t + (331 - 330)];
                        I1ZQvs[ejbPfl7wg6t + (720 - 719)] = uVpsFU2KWh;
                    }
                    ejbPfl7wg6t++;
                }
            }
            ZWTexE++;
        }
    }
}

void  DLQpu0zdZ () {
    int ZWTexE;
    {
        ZWTexE = 423 - 423;
        while (ZWTexE < DzcPNR) {
            c[ZWTexE] = xw6vqSTduH[ZWTexE];
            ZWTexE++;
        }
    }
    {
        ZWTexE = DzcPNR;
        while (ZWTexE < DzcPNR +FWI1Sd3nZKa) {
            c[ZWTexE] = I1ZQvs[ZWTexE -DzcPNR];
            ZWTexE++;
        }
    }
}

void  output () {
    int ejbPfl7wg6t;
    {
        ejbPfl7wg6t = 108 - 108;
        while (ejbPfl7wg6t < DzcPNR +FWI1Sd3nZKa-(60 - 59)) {
            printf ("%d ", c[ejbPfl7wg6t]);
            ejbPfl7wg6t++;
        }
    }
    printf ("%d", c[DzcPNR +FWI1Sd3nZKa-(654 - 653)]);
}

void  main () {
    apcauI ();
    fUmjS014ylfh ();
    DLQpu0zdZ ();
    output ();
}

