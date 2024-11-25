int main () {
    int ZxtkVCR5, DtehFRoy2NC, kvb0MZCwcE6;
    double  xLcKNGF = (933 - 933), enAZkG9r3DtT, wksw1iHLAh9o, b, c, hz6XV0J;
    struct   kBvxdrSIOjoF {
        float gJlC8rR, y;
    }
    *SAfBybjC;
    free (SAfBybjC);
    scanf ("%d", &kvb0MZCwcE6);
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
    SAfBybjC = (struct   kBvxdrSIOjoF *) malloc (sizeof (kBvxdrSIOjoF) * kvb0MZCwcE6);
    for (ZxtkVCR5 = 0; kvb0MZCwcE6 > ZxtkVCR5; ZxtkVCR5 = ZxtkVCR5 +1) {
        scanf ("%f%f", &(SAfBybjC +ZxtkVCR5)->gJlC8rR, &(SAfBybjC +ZxtkVCR5)->y);
    }
    for (ZxtkVCR5 = 1; ZxtkVCR5 < kvb0MZCwcE6; ZxtkVCR5 = ZxtkVCR5 +1) {
        for (DtehFRoy2NC = 0; ZxtkVCR5 > DtehFRoy2NC; DtehFRoy2NC++) {
            wksw1iHLAh9o = (SAfBybjC +ZxtkVCR5)->gJlC8rR;
            b = (SAfBybjC +DtehFRoy2NC)->gJlC8rR;
            c = (SAfBybjC +ZxtkVCR5)->y;
            hz6XV0J = (SAfBybjC +DtehFRoy2NC)->y;
            enAZkG9r3DtT = sqrt ((wksw1iHLAh9o - b) * (wksw1iHLAh9o - b) + (c - hz6XV0J) * (c - hz6XV0J));
            if (enAZkG9r3DtT > xLcKNGF)
                xLcKNGF = enAZkG9r3DtT;
        };
    }
    printf ("%.4f", xLcKNGF);
}

