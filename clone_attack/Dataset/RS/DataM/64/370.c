int main () {
    double  *d;
    double  c;
    int IHt92aWjer;
    int Nr1mjPuBCzZU;
    int xvocIQbjnDa;
    int NQJjVkDhpnYC;
    int pmvTPiEt;
    int *OFBMmwUX;
    int *qlrEaGknRD;
    int *wd;
    free (OFBMmwUX);
    free (d);
    free (qlrEaGknRD);
    free (wd);
    Nr1mjPuBCzZU = 0;
    scanf ("%d", &IHt92aWjer);
    for (xvocIQbjnDa = 0; xvocIQbjnDa < IHt92aWjer; xvocIQbjnDa++) {
        Nr1mjPuBCzZU = Nr1mjPuBCzZU +IHt92aWjer-1 - xvocIQbjnDa;
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
    OFBMmwUX = (int *) malloc (sizeof (int) * 3 * IHt92aWjer);
    {
        xvocIQbjnDa = 0;
        while (xvocIQbjnDa < 3 * IHt92aWjer) {
            scanf ("%d", &OFBMmwUX[xvocIQbjnDa]);
            xvocIQbjnDa = xvocIQbjnDa + 1;
        };
    }
    xvocIQbjnDa = 0;
    d = (double  *) malloc (sizeof (double ) * Nr1mjPuBCzZU);
    qlrEaGknRD = (int *) malloc (sizeof (int) * Nr1mjPuBCzZU);
    wd = (int *) malloc (sizeof (int) * Nr1mjPuBCzZU);
    for (NQJjVkDhpnYC = 0; NQJjVkDhpnYC < IHt92aWjer; NQJjVkDhpnYC++) {
        pmvTPiEt = NQJjVkDhpnYC +1;
        while (pmvTPiEt < IHt92aWjer) {
            d[xvocIQbjnDa] = sqrt (1.0 * (OFBMmwUX[3 * NQJjVkDhpnYC +0] - OFBMmwUX[3 * pmvTPiEt + 0]) * (OFBMmwUX[3 * NQJjVkDhpnYC +0] - OFBMmwUX[3 * pmvTPiEt + 0]) + (OFBMmwUX[3 * NQJjVkDhpnYC +1] - OFBMmwUX[3 * pmvTPiEt + 1]) * (OFBMmwUX[3 * NQJjVkDhpnYC +1] - OFBMmwUX[3 * pmvTPiEt + 1]) + (OFBMmwUX[3 * NQJjVkDhpnYC +(58 - 56)] - OFBMmwUX[3 * pmvTPiEt + 2]) * (OFBMmwUX[3 * NQJjVkDhpnYC +2] - OFBMmwUX[3 * pmvTPiEt + 2]));
            qlrEaGknRD[xvocIQbjnDa] = NQJjVkDhpnYC;
            wd[xvocIQbjnDa] = pmvTPiEt;
            pmvTPiEt = pmvTPiEt + 1;
            xvocIQbjnDa = xvocIQbjnDa + 1;
        };
    }
    {
        NQJjVkDhpnYC = 1;
        while (Nr1mjPuBCzZU >= NQJjVkDhpnYC) {
            for (pmvTPiEt = 0; pmvTPiEt < Nr1mjPuBCzZU -NQJjVkDhpnYC; pmvTPiEt = pmvTPiEt + 1) {
                if (d[pmvTPiEt] < d[pmvTPiEt + 1]) {
                    c = d[pmvTPiEt];
                    d[pmvTPiEt] = d[pmvTPiEt + 1];
                    d[pmvTPiEt + 1] = c;
                    xvocIQbjnDa = qlrEaGknRD[pmvTPiEt];
                    qlrEaGknRD[pmvTPiEt] = qlrEaGknRD[pmvTPiEt + 1];
                    qlrEaGknRD[pmvTPiEt + 1] = xvocIQbjnDa;
                    xvocIQbjnDa = wd[pmvTPiEt];
                    wd[pmvTPiEt] = wd[pmvTPiEt + 1];
                    wd[pmvTPiEt + 1] = xvocIQbjnDa;
                };
            }
            NQJjVkDhpnYC = NQJjVkDhpnYC +1;
        };
    }
    {
        xvocIQbjnDa = 0;
        while (xvocIQbjnDa < Nr1mjPuBCzZU) {
            NQJjVkDhpnYC = qlrEaGknRD[xvocIQbjnDa];
            pmvTPiEt = wd[xvocIQbjnDa];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", OFBMmwUX[3 * NQJjVkDhpnYC +0], OFBMmwUX[3 * NQJjVkDhpnYC +1], OFBMmwUX[3 * NQJjVkDhpnYC +2], OFBMmwUX[3 * pmvTPiEt + 0], OFBMmwUX[3 * pmvTPiEt + 1], OFBMmwUX[3 * pmvTPiEt + 2], d[xvocIQbjnDa]);
            xvocIQbjnDa = xvocIQbjnDa + 1;
        };
    }
    return 0;
}

