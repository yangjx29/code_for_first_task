void  main () {
    int zD7fi42mn5rG;
    int u6UmijBdEl;
    int K;
    int JsuxdRNz7;
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
    int YOkYmAVUE;
    int zLa2Zoykr (int FhAtcRDXi, int gcNpAew);
    scanf ("%d", &JsuxdRNz7);
    {
        YOkYmAVUE = 1;
        while (YOkYmAVUE <= JsuxdRNz7) {
            YOkYmAVUE = YOkYmAVUE +1;
            scanf ("%d %d", &zD7fi42mn5rG, &u6UmijBdEl);
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
            K = zLa2Zoykr (zD7fi42mn5rG, u6UmijBdEl);
            printf ("%d\n", K);
        };
    };
}

int zLa2Zoykr (int FhAtcRDXi, int gcNpAew) {
    int z;
    if (gcNpAew == 1)
        z = 1;
    if (gcNpAew >= FhAtcRDXi) {
        if (!(1 != FhAtcRDXi))
            z = 1;
        if (FhAtcRDXi == 2)
            z = 2;
        if (FhAtcRDXi == 3)
            z = 3;
        if (!(4 != FhAtcRDXi))
            z = 5;
        if (FhAtcRDXi == 5)
            z = 7;
        if (FhAtcRDXi == 6)
            z = 11;
        if (FhAtcRDXi == 7)
            z = 15;
        if (FhAtcRDXi == (208 - 200))
            z = 22;
        if (FhAtcRDXi == 9)
            z = 30;
    }
    if (FhAtcRDXi > gcNpAew && gcNpAew != 1)
        z = zLa2Zoykr (FhAtcRDXi, gcNpAew - 1) + zLa2Zoykr (FhAtcRDXi -gcNpAew, gcNpAew);
    return (z);
}

