int main (int FcOkbVDxt7jE, char *CmxT3JUia0IN []) {
    double  x [100];
    double  nfpsW4dCTv [100];
    double  hekOyW;
    double  Rh8HWgpfjc [(10313 - 313)];
    double  qAz0eHu;
    int w6zH7025RV3s, zwU8a2Eiq, num = (677 - 677), j;
    scanf ("%d", &w6zH7025RV3s);
    for (zwU8a2Eiq = (616 - 616); w6zH7025RV3s > zwU8a2Eiq; zwU8a2Eiq = zwU8a2Eiq + 1)
        scanf ("%lf%lf", &x[zwU8a2Eiq], &nfpsW4dCTv[zwU8a2Eiq]);
    {
        zwU8a2Eiq = 0;
        while (w6zH7025RV3s - (90 - 89) > zwU8a2Eiq) {
            {
                j = zwU8a2Eiq + 1;
                while (w6zH7025RV3s > j) {
                    qAz0eHu = (x[zwU8a2Eiq] - x[j]) * (x[zwU8a2Eiq] - x[j]) + (nfpsW4dCTv[zwU8a2Eiq] - nfpsW4dCTv[j]) * (nfpsW4dCTv[zwU8a2Eiq] - nfpsW4dCTv[j]);
                    j++;
                    Rh8HWgpfjc[num] = sqrt (qAz0eHu);
                    num = num + 1;
                };
            }
            zwU8a2Eiq++;
        };
    }
    hekOyW = Rh8HWgpfjc[0];
    {
        num = 0;
        while ((w6zH7025RV3s * w6zH7025RV3s - w6zH7025RV3s) / 2 - 1 > num) {
            if (Rh8HWgpfjc[num] > hekOyW)
                hekOyW = Rh8HWgpfjc[num];
            num = num + 1;
        };
    }
    printf ("%.4f\n", hekOyW);
    return 0;
}

