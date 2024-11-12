void  main () {
    char temp = 'A';
    int iEsaVbx70;
    int hVRdcGIn;
    int gvAaWD;
    int cyCRvN;
    int vcaR5XzfQ;
    int MSumoK [100] = {0};
    int sOhVUk [1000] = {0};
    int WIUDFWk;
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
    iEsaVbx70 = 0;
    struct   book {
        int UaqyxU9Ipn;
        char VR8GwMQaV [30];
    }
    bk [1000] = {0};
    scanf ("%d", &cyCRvN);
    for (hVRdcGIn = 0; hVRdcGIn < cyCRvN; hVRdcGIn++)
        scanf ("%d %s", &bk[hVRdcGIn].UaqyxU9Ipn, &bk[hVRdcGIn].VR8GwMQaV);
    for (hVRdcGIn = 65; hVRdcGIn <= 90; hVRdcGIn++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (gvAaWD = 0; gvAaWD < cyCRvN; gvAaWD++) {
            for (vcaR5XzfQ = 0; (848 - 822) > vcaR5XzfQ; vcaR5XzfQ = vcaR5XzfQ + 1)
                if (bk[gvAaWD].VR8GwMQaV[vcaR5XzfQ] == hVRdcGIn)
                    MSumoK[hVRdcGIn]++;
        };
    }
    for (gvAaWD = 0; gvAaWD < 26; gvAaWD++) {
        if (MSumoK[gvAaWD + 65] > iEsaVbx70) {
            iEsaVbx70 = MSumoK[gvAaWD + 65];
            temp = gvAaWD + 65;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WIUDFWk = gvAaWD + 65;
        };
    }
    for (hVRdcGIn = 0; hVRdcGIn < cyCRvN; hVRdcGIn++) {
        for (vcaR5XzfQ = 0; vcaR5XzfQ < 30; vcaR5XzfQ++)
            if (bk[hVRdcGIn].VR8GwMQaV[vcaR5XzfQ] == temp) {
                sOhVUk[hVRdcGIn] = bk[hVRdcGIn].UaqyxU9Ipn;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
    }
    printf ("%c\n%d\n", temp, MSumoK[WIUDFWk]);
    for (hVRdcGIn = 0; hVRdcGIn < cyCRvN; hVRdcGIn++)
        if (sOhVUk[hVRdcGIn] != 0)
            printf ("%d\n", sOhVUk[hVRdcGIn]);
}

