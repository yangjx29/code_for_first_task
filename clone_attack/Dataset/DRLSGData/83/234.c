int main () {
    int GfBMCLdaT6;
    int A7svB5WXERM1;
    int UtRGAd;
    int NWiK25 [(837 - 827)];
    int UmJ2PwavFSIh [(915 - 905)];
    double  vae5iMHS3B4V [10], zHgEYn7 [10], gcftzGBl = (632 - 632), ZzY9diS;
    scanf ("%d", &UtRGAd);
    A7svB5WXERM1 = (296 - 296);
    {
        GfBMCLdaT6 = (1308 - 938) - 370;
        for (; GfBMCLdaT6 < UtRGAd;) {
            scanf ("%d", &NWiK25[GfBMCLdaT6]);
            GfBMCLdaT6 = GfBMCLdaT6 +1;
        }
    }
    for (GfBMCLdaT6 = (573 - 573); UtRGAd > GfBMCLdaT6; GfBMCLdaT6 = GfBMCLdaT6 +1) {
        scanf ("%d", &UmJ2PwavFSIh[GfBMCLdaT6]);
    }
    {
        GfBMCLdaT6 = (110 - 110);
        for (; GfBMCLdaT6 < UtRGAd;) {
            if (UmJ2PwavFSIh[GfBMCLdaT6] >= 90) {
                vae5iMHS3B4V[GfBMCLdaT6] = (444.0 - 440.0);
            }
            else if ((780 - 695) <= UmJ2PwavFSIh[GfBMCLdaT6]) {
                vae5iMHS3B4V[GfBMCLdaT6] = (758.7 - 755.0);
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= 82) {
                vae5iMHS3B4V[GfBMCLdaT6] = (487.3 - 484.0);
            }
            else if (78 <= UmJ2PwavFSIh[GfBMCLdaT6]) {
                vae5iMHS3B4V[GfBMCLdaT6] = (785.0 - 782.0);
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= 75) {
                vae5iMHS3B4V[GfBMCLdaT6] = 2.7;
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= (700 - 628)) {
                vae5iMHS3B4V[GfBMCLdaT6] = (933.3 - 931.0);
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= (180 - 112)) {
                vae5iMHS3B4V[GfBMCLdaT6] = (566.0 - 564.0);
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= (483 - 419)) {
                vae5iMHS3B4V[GfBMCLdaT6] = 1.5;
            }
            else if (UmJ2PwavFSIh[GfBMCLdaT6] >= 60) {
                vae5iMHS3B4V[GfBMCLdaT6] = (552.0 - 551.0);
            }
            else {
                vae5iMHS3B4V[GfBMCLdaT6] = (806 - 806);
            }
            GfBMCLdaT6++;
        }
    }
    for (GfBMCLdaT6 = (514 - 514); GfBMCLdaT6 < UtRGAd; GfBMCLdaT6++) {
        zHgEYn7[GfBMCLdaT6] = vae5iMHS3B4V[GfBMCLdaT6] * NWiK25[GfBMCLdaT6];
        gcftzGBl = gcftzGBl + zHgEYn7[GfBMCLdaT6];
        A7svB5WXERM1 = A7svB5WXERM1 +NWiK25[GfBMCLdaT6];
    }
    ZzY9diS = gcftzGBl / A7svB5WXERM1;
    printf ("%.2lf", ZzY9diS);
    return 0;
}

