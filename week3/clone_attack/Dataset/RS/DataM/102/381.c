void  RmwkgYzQlBC (double  *f6N3K2, int L8EFr0d9S7) {
    int bhvMIlfnu, j, Dx6ChmoNz;
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
    double  rFIDHn1QMBbY;
    {
        bhvMIlfnu = 557 - 557;
        while (L8EFr0d9S7 > bhvMIlfnu) {
            Dx6ChmoNz = bhvMIlfnu;
            {
                j = bhvMIlfnu + 1;
                while (L8EFr0d9S7 > j) {
                    if (f6N3K2[Dx6ChmoNz] > f6N3K2[j])
                        Dx6ChmoNz = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            if (!(bhvMIlfnu == Dx6ChmoNz)) {
                rFIDHn1QMBbY = f6N3K2[Dx6ChmoNz];
                f6N3K2[Dx6ChmoNz] = f6N3K2[bhvMIlfnu];
                f6N3K2[bhvMIlfnu] = rFIDHn1QMBbY;
            }
            bhvMIlfnu = bhvMIlfnu + 1;
        };
    };
}

int main () {
    char RMQJqu [6];
    double  h, bASkdyZzNH [(995 - 945)], AHAnR5JMTXb [50];
    int bhvMIlfnu, j, L8EFr0d9S7, duqhFB3 = (159 - 159), cCA0NLGVUq3f = 0;
    scanf ("%d\n", &L8EFr0d9S7);
    for (bhvMIlfnu = 0; L8EFr0d9S7 > bhvMIlfnu; bhvMIlfnu++) {
        scanf ("%s\n", RMQJqu);
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
        scanf ("%lf", &h);
        if (RMQJqu[0] == 'm') {
            bASkdyZzNH[duqhFB3] = h;
            duqhFB3 = duqhFB3 + 1;
        }
        else {
            AHAnR5JMTXb[cCA0NLGVUq3f] = h;
            cCA0NLGVUq3f = cCA0NLGVUq3f + 1;
        };
    }
    RmwkgYzQlBC (AHAnR5JMTXb, cCA0NLGVUq3f);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    RmwkgYzQlBC (bASkdyZzNH, duqhFB3);
    {
        bhvMIlfnu = 0;
        while (bhvMIlfnu < duqhFB3) {
            printf ("%.2lf ", bASkdyZzNH[bhvMIlfnu]);
            bhvMIlfnu++;
        };
    }
    {
        bhvMIlfnu = cCA0NLGVUq3f - 1;
        while (bhvMIlfnu > 0) {
            printf ("%.2lf ", AHAnR5JMTXb[bhvMIlfnu]);
            bhvMIlfnu--;
        };
    }
    printf ("%.2lf", AHAnR5JMTXb[0]);
    return 0;
}

