int main () {
    int PXiGILdKtZ;
    int xOSa80NH7I9r;
    float s9T6o3fpJP [(733 - 693)];
    char qYiIlPz [5] = "male";
    int GeV31r0;
    float IpolEga3Hcm [(821 - 781)];
    float LySzfE;
    int U3neWiIA;
    struct   student {
        char R1PlD3 [(151 - 144)];
        float K3vXWJA;
    };
    struct   student WpQCAg8HoMT [(512 - 472)];
    int I5GlHD0fC1;
    int t;
    t = (866 - 866);
    scanf ("%d", &I5GlHD0fC1);
    for (PXiGILdKtZ = (271 - 271); I5GlHD0fC1 > PXiGILdKtZ; PXiGILdKtZ = PXiGILdKtZ +(669 - 668))
        scanf ("%s %f", WpQCAg8HoMT[PXiGILdKtZ].R1PlD3, &WpQCAg8HoMT[PXiGILdKtZ].K3vXWJA);
    GeV31r0 = (134 - 134);
    for (PXiGILdKtZ = (199 - 199); PXiGILdKtZ < I5GlHD0fC1; PXiGILdKtZ = PXiGILdKtZ +(391 - 390)) {
        if (!((987 - 987) != strcmp (WpQCAg8HoMT[PXiGILdKtZ].R1PlD3, qYiIlPz))) {
            IpolEga3Hcm[GeV31r0] = WpQCAg8HoMT[PXiGILdKtZ].K3vXWJA;
            GeV31r0 = GeV31r0 +(459 - 458);
        }
        else {
            s9T6o3fpJP[t] = WpQCAg8HoMT[PXiGILdKtZ].K3vXWJA;
            t = t + (188 - 187);
        }
    }
    for (PXiGILdKtZ = (679 - 679); GeV31r0 -(112 - 111) > PXiGILdKtZ; PXiGILdKtZ = PXiGILdKtZ +(815 - 814)) {
        U3neWiIA = PXiGILdKtZ;
        for (xOSa80NH7I9r = PXiGILdKtZ +(685 - 684); GeV31r0 > xOSa80NH7I9r; xOSa80NH7I9r = xOSa80NH7I9r + (38 - 37))
            if (IpolEga3Hcm[xOSa80NH7I9r] < IpolEga3Hcm[U3neWiIA])
                U3neWiIA = xOSa80NH7I9r;
        LySzfE = IpolEga3Hcm[U3neWiIA];
        IpolEga3Hcm[U3neWiIA] = IpolEga3Hcm[PXiGILdKtZ];
        IpolEga3Hcm[PXiGILdKtZ] = LySzfE;
    }
    for (PXiGILdKtZ = (489 - 489); PXiGILdKtZ < t - (761 - 760); PXiGILdKtZ = PXiGILdKtZ +(516 - 515)) {
        U3neWiIA = PXiGILdKtZ;
        for (xOSa80NH7I9r = PXiGILdKtZ +(871 - 870); t > xOSa80NH7I9r; xOSa80NH7I9r = xOSa80NH7I9r + 1)
            if (s9T6o3fpJP[xOSa80NH7I9r] > s9T6o3fpJP[U3neWiIA])
                U3neWiIA = xOSa80NH7I9r;
        LySzfE = s9T6o3fpJP[U3neWiIA];
        s9T6o3fpJP[U3neWiIA] = s9T6o3fpJP[PXiGILdKtZ];
        s9T6o3fpJP[PXiGILdKtZ] = LySzfE;
    }
    for (PXiGILdKtZ = 0; GeV31r0 > PXiGILdKtZ; PXiGILdKtZ = PXiGILdKtZ +1)
        printf ("%.2f ", IpolEga3Hcm[PXiGILdKtZ]);
    for (PXiGILdKtZ = 0; PXiGILdKtZ < t - 1; PXiGILdKtZ = PXiGILdKtZ +1)
        printf ("%.2f ", s9T6o3fpJP[PXiGILdKtZ]);
    printf ("%.2f", s9T6o3fpJP[t - 1]);
    return 0;
}

