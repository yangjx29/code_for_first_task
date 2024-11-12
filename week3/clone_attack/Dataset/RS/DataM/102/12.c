int main () {
    struct   people {
        char OWB7kNLO3uj [10];
        double  vWQVYwH04M3v;
    }
    XyCaYuiZ [40];
    double  eoOcfaVPZLJ [(798 - 758)];
    double  dmx2sM6 [40];
    double  w7pytfGXw;
    int lYuUedw;
    int So8mwVf4;
    int Qcagxi7fTU0;
    int Q1d3a2skGSX;
    int uqkbpCXa;
    lYuUedw = (32 - 32);
    So8mwVf4 = 0;
    scanf ("%d", &Qcagxi7fTU0);
    {
        Q1d3a2skGSX = 0;
        while (Qcagxi7fTU0 > Q1d3a2skGSX) {
            scanf ("%s%lf", XyCaYuiZ[Q1d3a2skGSX].OWB7kNLO3uj, &XyCaYuiZ[Q1d3a2skGSX].vWQVYwH04M3v);
            if (XyCaYuiZ[Q1d3a2skGSX].OWB7kNLO3uj[0] == 'm') {
                eoOcfaVPZLJ[lYuUedw] = XyCaYuiZ[Q1d3a2skGSX].vWQVYwH04M3v;
                lYuUedw = lYuUedw + 1;
            }
            else {
                dmx2sM6[So8mwVf4] = XyCaYuiZ[Q1d3a2skGSX].vWQVYwH04M3v;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                So8mwVf4++;
            }
            Q1d3a2skGSX = Q1d3a2skGSX +1;
        };
    }
    {
        Q1d3a2skGSX = 0;
        while (lYuUedw - (589 - 588) > Q1d3a2skGSX) {
            {
                uqkbpCXa = Q1d3a2skGSX +1;
                while (uqkbpCXa < lYuUedw) {
                    if (eoOcfaVPZLJ[uqkbpCXa] < eoOcfaVPZLJ[Q1d3a2skGSX]) {
                        w7pytfGXw = eoOcfaVPZLJ[Q1d3a2skGSX];
                        eoOcfaVPZLJ[Q1d3a2skGSX] = eoOcfaVPZLJ[uqkbpCXa];
                        eoOcfaVPZLJ[uqkbpCXa] = w7pytfGXw;
                    }
                    uqkbpCXa = uqkbpCXa + 1;
                };
            }
            Q1d3a2skGSX = Q1d3a2skGSX +1;
        };
    }
    {
        Q1d3a2skGSX = 0;
        while (Q1d3a2skGSX < So8mwVf4 -1) {
            {
                uqkbpCXa = Q1d3a2skGSX +1;
                while (uqkbpCXa < So8mwVf4) {
                    if (dmx2sM6[uqkbpCXa] > dmx2sM6[Q1d3a2skGSX]) {
                        w7pytfGXw = dmx2sM6[Q1d3a2skGSX];
                        dmx2sM6[Q1d3a2skGSX] = dmx2sM6[uqkbpCXa];
                        dmx2sM6[uqkbpCXa] = w7pytfGXw;
                    }
                    uqkbpCXa++;
                };
            }
            Q1d3a2skGSX++;
        };
    }
    {
        Q1d3a2skGSX = 0;
        while (Q1d3a2skGSX < lYuUedw) {
            printf ("%.2lf ", eoOcfaVPZLJ[Q1d3a2skGSX]);
            Q1d3a2skGSX++;
        };
    }
    for (Q1d3a2skGSX = 0; Q1d3a2skGSX < So8mwVf4 -1; Q1d3a2skGSX = Q1d3a2skGSX +1)
        printf ("%.2lf ", dmx2sM6[Q1d3a2skGSX]);
    printf ("%.2lf\n", dmx2sM6[So8mwVf4 -1]);
    return 0;
}

