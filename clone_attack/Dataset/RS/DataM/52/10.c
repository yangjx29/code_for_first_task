void  main () {
    int kUJzE8S6;
    int mOdxVt1DhU;
    int oNdqWu1lVG;
    int QRFhYPH [100];
    scanf ("%d %d", &mOdxVt1DhU, &kUJzE8S6);
    {
        oNdqWu1lVG = 257 - 257;
        while (oNdqWu1lVG < mOdxVt1DhU) {
            scanf ("%d", &QRFhYPH[oNdqWu1lVG]);
            Ip4zlR[oNdqWu1lVG] = &QRFhYPH[oNdqWu1lVG];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            oNdqWu1lVG = oNdqWu1lVG + 1;
        };
    }
    {
        oNdqWu1lVG = 900 - 900;
        while (oNdqWu1lVG < mOdxVt1DhU - kUJzE8S6) {
            Ip4zlR[oNdqWu1lVG + kUJzE8S6] = &QRFhYPH[oNdqWu1lVG];
            oNdqWu1lVG = oNdqWu1lVG + 1;
        };
    }
    {
        oNdqWu1lVG = mOdxVt1DhU - kUJzE8S6;
        while (oNdqWu1lVG < mOdxVt1DhU) {
            Ip4zlR[oNdqWu1lVG - mOdxVt1DhU + kUJzE8S6] = &QRFhYPH[oNdqWu1lVG];
            oNdqWu1lVG = oNdqWu1lVG + 1;
        };
    }
    {
        oNdqWu1lVG = 0;
        while (mOdxVt1DhU - 1 > oNdqWu1lVG) {
            printf ("%d ", *Ip4zlR[oNdqWu1lVG]);
            oNdqWu1lVG = oNdqWu1lVG + 1;
        };
    }
    printf ("%d\n", *Ip4zlR[mOdxVt1DhU - 1]);
}

