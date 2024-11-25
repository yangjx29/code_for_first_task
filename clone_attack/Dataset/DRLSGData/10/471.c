int Gp43RIX6YNs [26];
int XZPsGty, STaXEsrO0ie, gfrK2uWdJyCh, YG6IRt32qhS;
int vitm3eDBdUO [26];

int DItdg60rHKc (int ZDdkZ1NX, int hvaQ1bufAV) {
    if (hvaQ1bufAV < ZDdkZ1NX)
        return (ZDdkZ1NX);
    else
        return (hvaQ1bufAV);
}

main () {
    STaXEsrO0ie = 0;
    scanf ("%d", &XZPsGty);
    {
        gfrK2uWdJyCh = 1;
        for (; XZPsGty >= gfrK2uWdJyCh;) {
            scanf ("%d", &Gp43RIX6YNs[gfrK2uWdJyCh]);
            gfrK2uWdJyCh = gfrK2uWdJyCh + 1;
        }
    }
    {
        gfrK2uWdJyCh = 1;
        for (; XZPsGty >= gfrK2uWdJyCh;) {
            vitm3eDBdUO[gfrK2uWdJyCh] = 1;
            gfrK2uWdJyCh = gfrK2uWdJyCh + 1;
        }
    }
    for (gfrK2uWdJyCh = 2; gfrK2uWdJyCh <= XZPsGty; gfrK2uWdJyCh = gfrK2uWdJyCh + 1) {
        YG6IRt32qhS = 1;
        for (; YG6IRt32qhS < gfrK2uWdJyCh;) {
            if (Gp43RIX6YNs[gfrK2uWdJyCh] <= Gp43RIX6YNs[YG6IRt32qhS])
                vitm3eDBdUO[gfrK2uWdJyCh] = DItdg60rHKc (vitm3eDBdUO[gfrK2uWdJyCh], vitm3eDBdUO[YG6IRt32qhS] + 1);
            YG6IRt32qhS = YG6IRt32qhS +1;
        }
    }
    {
        gfrK2uWdJyCh = 1;
        for (; gfrK2uWdJyCh <= XZPsGty;) {
            STaXEsrO0ie = DItdg60rHKc (STaXEsrO0ie, vitm3eDBdUO[gfrK2uWdJyCh]);
            gfrK2uWdJyCh++;
        }
    }
    printf ("%d", STaXEsrO0ie);
}

