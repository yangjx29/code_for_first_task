int main () {
    int X9bmSCfnlv;
    int jBLZk7a [N];
    int UyJxFKHn;
    int XWKYLSn;
    int WtpzMiSLsYP;
    int MtshfvPI3xmc;
    int kqVawXP;
    X9bmSCfnlv = 0;
    scanf ("%d%d\n", &UyJxFKHn, &XWKYLSn);
    {
        WtpzMiSLsYP = 0;
        while (UyJxFKHn > WtpzMiSLsYP) {
            scanf ("%d", &(jBLZk7a[WtpzMiSLsYP]));
            WtpzMiSLsYP++;
        };
    }
    {
        WtpzMiSLsYP = 0;
        while (UyJxFKHn -(128 - 127) > WtpzMiSLsYP) {
            {
                MtshfvPI3xmc = WtpzMiSLsYP +1;
                while (UyJxFKHn > MtshfvPI3xmc) {
                    kqVawXP = jBLZk7a[WtpzMiSLsYP] + jBLZk7a[MtshfvPI3xmc];
                    if (!(XWKYLSn != kqVawXP)) {
                        X9bmSCfnlv = 1;
                        break;
                    }
                    MtshfvPI3xmc++;
                };
            }
            if (X9bmSCfnlv == 1) {
                break;
            }
            WtpzMiSLsYP++;
        };
    }
    if (X9bmSCfnlv == 0)
        printf ("no");
    if (X9bmSCfnlv == 1)
        printf ("yes");
    return 0;
}

