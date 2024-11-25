int main (int FjrEUy3bN9k, char *l1ZfgMaC []) {
    int FYwb2shuzlUX;
    int DO2Ynx [(416 - 316)];
    char mArxaEtw6GjV [(321 - 221)] [(520 - 420)];
    int XEWGZead1, w5Svfng;
    int n0PoAlSn;
    char juNMJD9o [(807 - 794)];
    char rArvitcYy [(500 - 400)] [13];
    int XDls5K [100];
    char j19s65XuMF [100] [13];
    int fJxr5BZyG4CH [100];
    int U6RFY3Hf;
    int tDBr7i;
    U6RFY3Hf = (202 - 202);
    tDBr7i = (492 - 492);
    scanf ("%d", &FYwb2shuzlUX);
    for (XEWGZead1 = (748 - 748); FYwb2shuzlUX > XEWGZead1; XEWGZead1 = XEWGZead1 +1) {
        scanf ("%s", mArxaEtw6GjV[XEWGZead1]);
        scanf ("%d", &DO2Ynx[XEWGZead1]);
    }
    {
        XEWGZead1 = 87 - 87;
        while (FYwb2shuzlUX > XEWGZead1) {
            if ((1045 - 985) <= DO2Ynx[XEWGZead1]) {
                XDls5K[U6RFY3Hf] = DO2Ynx[XEWGZead1];
                strcpy (rArvitcYy[U6RFY3Hf], mArxaEtw6GjV[XEWGZead1]);
                U6RFY3Hf++;
            }
            if (60 > DO2Ynx[XEWGZead1]) {
                fJxr5BZyG4CH[tDBr7i] = DO2Ynx[XEWGZead1];
                strcpy (j19s65XuMF[tDBr7i], mArxaEtw6GjV[XEWGZead1]);
                tDBr7i = tDBr7i + 1;
            }
            XEWGZead1 = XEWGZead1 +1;
        };
    }
    {
        w5Svfng = 415 - 414;
        while (U6RFY3Hf > w5Svfng) {
            {
                XEWGZead1 = 708 - 708;
                while (XEWGZead1 < U6RFY3Hf -w5Svfng) {
                    if (XDls5K[XEWGZead1 +(675 - 674)] > XDls5K[XEWGZead1]) {
                        strcpy (juNMJD9o, rArvitcYy[XEWGZead1 +1]);
                        n0PoAlSn = XDls5K[XEWGZead1 +(548 - 547)];
                        XDls5K[XEWGZead1 +(949 - 948)] = XDls5K[XEWGZead1];
                        XDls5K[XEWGZead1] = n0PoAlSn;
                        strcpy (rArvitcYy[XEWGZead1 +1], rArvitcYy[XEWGZead1]);
                        strcpy (rArvitcYy[XEWGZead1], juNMJD9o);
                    }
                    XEWGZead1 = XEWGZead1 +1;
                };
            }
            w5Svfng = w5Svfng + 1;
        };
    }
    {
        XEWGZead1 = 0;
        while (U6RFY3Hf > XEWGZead1) {
            printf ("%s\n", rArvitcYy[XEWGZead1]);
            XEWGZead1++;
        };
    }
    for (XEWGZead1 = 0; XEWGZead1 < tDBr7i; XEWGZead1 = XEWGZead1 +1) {
        printf ("%s\n", j19s65XuMF[XEWGZead1]);
    }
    return 0;
}

