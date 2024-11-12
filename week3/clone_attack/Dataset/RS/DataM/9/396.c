int main () {
    int h0MtwO [100];
    int DRA5DvWaP [100];
    int lFbaQpkCKAt6 [100];
    int qs8zxd27in, M85cMRA, bew5tx, hxP6HTwblg = 0, rqRwJx, hVNRqjD5L = 0;
    char lHGzjOBeSU [100] [10];
    char nfk59Fv [100] [10];
    char JD2MBh [100] [10];
    char lUnvqt1KGz [100] [10];
    scanf ("%d", &qs8zxd27in);
    for (M85cMRA = 0; M85cMRA < qs8zxd27in; M85cMRA = M85cMRA +1) {
        scanf ("%s %d", lHGzjOBeSU[M85cMRA], &h0MtwO[M85cMRA]);
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
    for (M85cMRA = 0; M85cMRA < qs8zxd27in; M85cMRA = M85cMRA +1) {
        if (60 <= h0MtwO[M85cMRA]) {
            DRA5DvWaP[hxP6HTwblg] = h0MtwO[M85cMRA];
            strcpy (nfk59Fv[hxP6HTwblg], lHGzjOBeSU[M85cMRA]);
            hxP6HTwblg = hxP6HTwblg + 1;
        }
        else {
            lFbaQpkCKAt6[hVNRqjD5L] = h0MtwO[M85cMRA];
            strcpy (JD2MBh[hVNRqjD5L], lHGzjOBeSU[M85cMRA]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hVNRqjD5L = hVNRqjD5L + 1;
        };
    }
    for (M85cMRA = 0; hxP6HTwblg > M85cMRA; M85cMRA = M85cMRA +1) {
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
        for (bew5tx = 1; hxP6HTwblg - M85cMRA > bew5tx; bew5tx++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (DRA5DvWaP[bew5tx - 1] < DRA5DvWaP[bew5tx]) {
                rqRwJx = DRA5DvWaP[bew5tx];
                DRA5DvWaP[bew5tx] = DRA5DvWaP[bew5tx - 1];
                DRA5DvWaP[bew5tx - 1] = rqRwJx;
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
                strcpy (lUnvqt1KGz[bew5tx], nfk59Fv[bew5tx]);
                strcpy (nfk59Fv[bew5tx], nfk59Fv[bew5tx - 1]);
                strcpy (nfk59Fv[bew5tx - 1], lUnvqt1KGz[bew5tx]);
            };
        };
    }
    for (M85cMRA = 0; M85cMRA < hxP6HTwblg; M85cMRA = M85cMRA +1) {
        printf ("%s\n", nfk59Fv[M85cMRA]);
    }
    {
        M85cMRA = 0;
        while (M85cMRA < hVNRqjD5L) {
            printf ("%s\n", JD2MBh[M85cMRA]);
            M85cMRA = M85cMRA +1;
        };
    }
    return 0;
}

