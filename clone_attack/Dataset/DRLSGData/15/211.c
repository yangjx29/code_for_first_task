void  main () {
    int NE35CfjimG;
    int KHoiGlnpqX;
    int irLpYU;
    int xnHhaR;
    int WYF9Bpo;
    int cp2IgQ4am;
    int ajlPD14;
    int V2Y8lGWAx;
    int EaEO9DNknevU;
    int VRtfiCedEZ;
    int wcTjsEIui [100] [100];
    scanf ("%d", &WYF9Bpo);
    {
        cp2IgQ4am = 0;
        for (; cp2IgQ4am < WYF9Bpo;) {
            {
                ajlPD14 = 0;
                for (; WYF9Bpo > ajlPD14;) {
                    scanf ("%d", &wcTjsEIui[cp2IgQ4am][ajlPD14]);
                    ajlPD14 = ajlPD14 + 1;
                }
            }
            cp2IgQ4am = cp2IgQ4am + 1;
        }
    }
    {
        cp2IgQ4am = 0;
        while (WYF9Bpo > cp2IgQ4am) {
            {
                ajlPD14 = 0;
                for (; ajlPD14 < WYF9Bpo;) {
                    if (!(0 != wcTjsEIui[cp2IgQ4am][ajlPD14]) && !(0 != wcTjsEIui[cp2IgQ4am + 1][ajlPD14]) && !(0 != wcTjsEIui[cp2IgQ4am][ajlPD14 + 1])) {
                        KHoiGlnpqX = ajlPD14;
                        NE35CfjimG = cp2IgQ4am;
                    }
                    if (!(0 != wcTjsEIui[cp2IgQ4am][ajlPD14]) && wcTjsEIui[cp2IgQ4am][ajlPD14 - 1] == 0 && wcTjsEIui[cp2IgQ4am - 1][ajlPD14] == 0) {
                        irLpYU = cp2IgQ4am;
                        xnHhaR = ajlPD14;
                    }
                    ajlPD14 = ajlPD14 + 1;
                }
            }
            cp2IgQ4am++;
        }
    }
    EaEO9DNknevU = xnHhaR - KHoiGlnpqX -1;
    VRtfiCedEZ = V2Y8lGWAx *EaEO9DNknevU;
    V2Y8lGWAx = irLpYU - NE35CfjimG -1;
    printf ("%d", VRtfiCedEZ);
}

