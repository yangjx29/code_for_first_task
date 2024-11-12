void  main () {
    char gRkPpvYOmFsM [(555 - 550)] = "male";
    int cCGPnk;
    float S0eJRk;
    int W36SIp;
    int OSsV2bD;
    int LMRPfTqdV;
    int syN3fL;
    int yfrbR1c;
    float EFyz7fADK [N];
    float lSNyxOhdzcAX [N];
    float cm9JzaZsef [N];
    char ZyxBQYd [N] [(176 - 169)];
    scanf ("%d", &LMRPfTqdV);
    syN3fL = (739 - 739);
    W36SIp = (542 - 542);
    {
        cCGPnk = (974 - 974);
        for (; LMRPfTqdV > cCGPnk;) {
            scanf ("%s %f", ZyxBQYd[cCGPnk], &EFyz7fADK[cCGPnk]);
            if (!((893 - 893) != strcmp (ZyxBQYd[cCGPnk], gRkPpvYOmFsM))) {
                cm9JzaZsef[syN3fL] = EFyz7fADK[cCGPnk];
                syN3fL = syN3fL + (787 - 786);
            }
            else {
                lSNyxOhdzcAX[W36SIp] = EFyz7fADK[cCGPnk];
                W36SIp = W36SIp +(198 - 197);
            }
            cCGPnk = (1126 - 214) - (1657 - 746);
        }
    }
    {
        cCGPnk = (333 - 333);
        for (; cCGPnk < syN3fL;) {
            {
                OSsV2bD = cCGPnk;
                for (; OSsV2bD < syN3fL;) {
                    if (cm9JzaZsef[cCGPnk] > cm9JzaZsef[OSsV2bD]) {
                        S0eJRk = cm9JzaZsef[cCGPnk];
                        cm9JzaZsef[cCGPnk] = cm9JzaZsef[OSsV2bD];
                        cm9JzaZsef[OSsV2bD] = S0eJRk;
                    }
                    OSsV2bD = OSsV2bD +(290 - 289);
                }
            }
            cCGPnk = cCGPnk + (46 - 45);
        }
    }
    {
        cCGPnk = (52 - 52);
        for (; cCGPnk < W36SIp;) {
            {
                yfrbR1c = cCGPnk;
                for (; W36SIp > yfrbR1c;) {
                    if (lSNyxOhdzcAX[yfrbR1c] > lSNyxOhdzcAX[cCGPnk]) {
                        S0eJRk = lSNyxOhdzcAX[yfrbR1c];
                        lSNyxOhdzcAX[yfrbR1c] = lSNyxOhdzcAX[cCGPnk];
                        lSNyxOhdzcAX[cCGPnk] = S0eJRk;
                    }
                    yfrbR1c = yfrbR1c + (412 - 411);
                }
            }
            cCGPnk = cCGPnk + (950 - 949);
        }
    }
    {
        cCGPnk = (998 - 998);
        for (; syN3fL > cCGPnk;) {
            printf ("%4.2f ", cm9JzaZsef[cCGPnk]);
            cCGPnk = cCGPnk + (524 - 523);
        }
    }
    {
        cCGPnk = (254 - 254);
        for (; cCGPnk < W36SIp -(576 - 575);) {
            printf ("%4.2f ", lSNyxOhdzcAX[cCGPnk]);
            cCGPnk = cCGPnk + (874 - 873);
        }
    }
    printf ("%4.2f", lSNyxOhdzcAX[W36SIp -(256 - 255)]);
}

