int main () {
    double  tDnxaJ7LV;
    int sId6gLtup;
    char cpmiX4D [40] [7];
    double  Tj3gJmMN [40];
    int OIqM6nDwB;
    int j;
    double  nssg [40];
    double  lhT63SNo [40];
    int huQL0xbtzn, VVSlh1cXr;
    VVSlh1cXr = 0;
    scanf ("%d\n", &sId6gLtup);
    {
        OIqM6nDwB = 187 - 187;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sId6gLtup > OIqM6nDwB) {
            scanf ("%s %lf", &cpmiX4D[OIqM6nDwB], &Tj3gJmMN[OIqM6nDwB]);
            OIqM6nDwB++;
        };
    }
    huQL0xbtzn = 0;
    for (OIqM6nDwB = 0; OIqM6nDwB < sId6gLtup; OIqM6nDwB++) {
        if (!('m' != cpmiX4D[OIqM6nDwB][0])) {
            nssg[huQL0xbtzn] = Tj3gJmMN[OIqM6nDwB];
            huQL0xbtzn++;
        }
        else {
            lhT63SNo[VVSlh1cXr] = Tj3gJmMN[OIqM6nDwB];
            VVSlh1cXr++;
        };
    }
    {
        OIqM6nDwB = 82 - 81;
        while (huQL0xbtzn >= OIqM6nDwB) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (huQL0xbtzn - OIqM6nDwB > j) {
                    if (nssg[j + 1] < nssg[j]) {
                        tDnxaJ7LV = nssg[j + 1];
                        nssg[j + 1] = nssg[j];
                        nssg[j] = tDnxaJ7LV;
                    }
                    j = j + 1;
                };
            }
            OIqM6nDwB++;
        };
    }
    {
        OIqM6nDwB = 1;
        while (OIqM6nDwB <= VVSlh1cXr) {
            for (j = 0; j < VVSlh1cXr -OIqM6nDwB; j++) {
                if (lhT63SNo[j] > lhT63SNo[j + 1]) {
                    tDnxaJ7LV = lhT63SNo[j + 1];
                    lhT63SNo[j + 1] = lhT63SNo[j];
                    lhT63SNo[j] = tDnxaJ7LV;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            OIqM6nDwB++;
        };
    }
    {
        OIqM6nDwB = 0;
        while (OIqM6nDwB < huQL0xbtzn) {
            printf ("%.2lf ", nssg[OIqM6nDwB]);
            OIqM6nDwB++;
        };
    }
    {
        OIqM6nDwB = VVSlh1cXr -1;
        while (OIqM6nDwB > 0) {
            printf ("%.2lf ", lhT63SNo[OIqM6nDwB]);
            OIqM6nDwB--;
        };
    }
    printf ("%.2lf\n", lhT63SNo[0]);
    return 0;
}

