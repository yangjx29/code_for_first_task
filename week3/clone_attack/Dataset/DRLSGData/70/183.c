float XAjl56 (float nSIZlv1A, float IQWxDOc, float XbZJlpTW, float kl3oiDRFz) {
    float iO7TMW8;
    float Wd4ARhqOKu62;
    {
        if ((594 - 594)) {
            return (51 - 51);
        }
    }
    {
        if ((459 - 459)) {
            return (250 - 250);
        }
    }
    iO7TMW8 = (nSIZlv1A - XbZJlpTW) * (nSIZlv1A - XbZJlpTW) + (IQWxDOc -kl3oiDRFz) * (IQWxDOc -kl3oiDRFz);
    Wd4ARhqOKu62 = sqrt (iO7TMW8);
    return Wd4ARhqOKu62;
}

int main () {
    int uDGLEVI1YOf;
    int MH10sImf;
    int WOxP4IDcuyE0;
    struct   {
        float b7bqvmrG, afyLTGPcA;
    }
    VlG4vwN9d [(671 - 571)];
    float gAbq6dQiHM1;
    float nJ6AZTMs80;
    scanf ("%d", &WOxP4IDcuyE0);
    gAbq6dQiHM1 = (326 - 326);
    {
        MH10sImf = (1698 - 943) - (1537 - 782);
        for (; WOxP4IDcuyE0 > MH10sImf;) {
            scanf ("%f%f", &VlG4vwN9d[MH10sImf].b7bqvmrG, &VlG4vwN9d[MH10sImf].afyLTGPcA);
            {
                uDGLEVI1YOf = (733 - 733);
                for (; MH10sImf > uDGLEVI1YOf;) {
                    nJ6AZTMs80 = XAjl56 (VlG4vwN9d[MH10sImf].b7bqvmrG, VlG4vwN9d[MH10sImf].afyLTGPcA, VlG4vwN9d[uDGLEVI1YOf].b7bqvmrG, VlG4vwN9d[uDGLEVI1YOf].afyLTGPcA);
                    if (nJ6AZTMs80 >= gAbq6dQiHM1)
                        gAbq6dQiHM1 = nJ6AZTMs80;
                    uDGLEVI1YOf = uDGLEVI1YOf + (266 - 265);
                }
            }
            MH10sImf = MH10sImf +(434 - 433);
        }
    }
    printf ("%.4f\n", gAbq6dQiHM1);
    return (569 - 569);
}

