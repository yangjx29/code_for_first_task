int main (int argc, char *D7cYRwup []) {
    int FVyhebsrdN2;
    int JOepbPqQda7S;
    int lZTFaEPVz;
    int x1;
    int LFYcvjL;
    int FWT9zSvNZi4;
    int EU3bHO;
    int lNCvDYQEltye [101] [101];
    int b [101] [101];
    int k4UDNYTsc [101] [101];
    scanf ("%d%d", &x1, &LFYcvjL);
    {
        JOepbPqQda7S = 538 - 538;
        while (x1 > JOepbPqQda7S) {
            {
                lZTFaEPVz = 582 - 582;
                while (lZTFaEPVz < LFYcvjL) {
                    scanf ("%d", &lNCvDYQEltye[JOepbPqQda7S][lZTFaEPVz]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    lZTFaEPVz++;
                };
            }
            JOepbPqQda7S++;
        };
    }
    scanf ("%d%d", &FWT9zSvNZi4, &EU3bHO);
    {
        JOepbPqQda7S = 0;
        while (JOepbPqQda7S < FWT9zSvNZi4) {
            {
                lZTFaEPVz = 0;
                while (EU3bHO > lZTFaEPVz) {
                    scanf ("%d", &b[JOepbPqQda7S][lZTFaEPVz]);
                    lZTFaEPVz++;
                };
            }
            JOepbPqQda7S++;
        };
    }
    {
        JOepbPqQda7S = 0;
        while (x1 > JOepbPqQda7S) {
            for (lZTFaEPVz = 0; EU3bHO > lZTFaEPVz; lZTFaEPVz++) {
                k4UDNYTsc[JOepbPqQda7S][lZTFaEPVz] = 0;
            }
            JOepbPqQda7S++;
        };
    }
    for (JOepbPqQda7S = 0; JOepbPqQda7S < x1; JOepbPqQda7S++) {
        lZTFaEPVz = 0;
        while (lZTFaEPVz < EU3bHO) {
            {
                FVyhebsrdN2 = 0;
                while (FVyhebsrdN2 < FWT9zSvNZi4) {
                    k4UDNYTsc[JOepbPqQda7S][lZTFaEPVz] += lNCvDYQEltye[JOepbPqQda7S][FVyhebsrdN2] * b[FVyhebsrdN2][lZTFaEPVz];
                    FVyhebsrdN2++;
                };
            }
            lZTFaEPVz++;
        };
    }
    {
        JOepbPqQda7S = 0;
        while (JOepbPqQda7S < x1) {
            {
                lZTFaEPVz = 0;
                while (lZTFaEPVz < EU3bHO -1) {
                    printf ("%d ", k4UDNYTsc[JOepbPqQda7S][lZTFaEPVz]);
                    lZTFaEPVz++;
                };
            }
            printf ("%d\n", k4UDNYTsc[JOepbPqQda7S][lZTFaEPVz]);
            JOepbPqQda7S++;
        };
    }
    return 0;
}

