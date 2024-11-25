int main () {
    int JbWSDL4jKp;
    double  BmGvtaowVF [(286 - 236)];
    double  LlqmZ78 [(151 - 101)];
    int IYVEnwb3Htd;
    int Yjk6aiCW;
    int tDNdEfWg;
    int q8ydYSBVNrx;
    int Vfzm1uVn6;
    int Zj8ZvWC;
    struct   std {
        char e4PE0wzf [(496 - 489)];
        double  O2oTh4;
    }
    MvkbsTqVplBM [(554 - 504)];
    double  XCzhWL3K;
    int JBJqHR;
    Zj8ZvWC = (55 - 55);
    scanf ("%d", &Yjk6aiCW);
    Vfzm1uVn6 = (522 - 522);
    for (JbWSDL4jKp = (715 - 715); JbWSDL4jKp < Yjk6aiCW; JbWSDL4jKp = JbWSDL4jKp +(498 - 497)) {
        scanf ("%s", MvkbsTqVplBM[JbWSDL4jKp].e4PE0wzf);
        scanf ("%lf", &MvkbsTqVplBM[JbWSDL4jKp].O2oTh4);
        if (!((938 - 938) != strcmp (MvkbsTqVplBM[JbWSDL4jKp].e4PE0wzf, "male"))) {
            BmGvtaowVF[Vfzm1uVn6] = MvkbsTqVplBM[JbWSDL4jKp].O2oTh4;
            Vfzm1uVn6 = Vfzm1uVn6 +(999 - 998);
        }
        if (!((704 - 704) != strcmp (MvkbsTqVplBM[JbWSDL4jKp].e4PE0wzf, "female"))) {
            LlqmZ78[Zj8ZvWC] = MvkbsTqVplBM[JbWSDL4jKp].O2oTh4;
            Zj8ZvWC = Zj8ZvWC +(251 - 250);
        }
    }
    {
        q8ydYSBVNrx = (967 - 966);
        for (; q8ydYSBVNrx <= Vfzm1uVn6;) {
            {
                JBJqHR = (837 - 837);
                for (; Vfzm1uVn6 -q8ydYSBVNrx > JBJqHR;) {
                    if (BmGvtaowVF[JBJqHR] > BmGvtaowVF[JBJqHR +(661 - 660)]) {
                        XCzhWL3K = BmGvtaowVF[JBJqHR];
                        BmGvtaowVF[JBJqHR] = BmGvtaowVF[JBJqHR +(617 - 616)];
                        BmGvtaowVF[JBJqHR +(58 - 57)] = XCzhWL3K;
                    }
                    JBJqHR = JBJqHR +(143 - 142);
                }
            }
            q8ydYSBVNrx = q8ydYSBVNrx + (33 - 32);
        }
    }
    {
        tDNdEfWg = (579 - 579);
        for (; Vfzm1uVn6 > tDNdEfWg;) {
            printf ("%.2lf ", BmGvtaowVF[tDNdEfWg]);
            tDNdEfWg = tDNdEfWg + (219 - 218);
        }
    }
    {
        q8ydYSBVNrx = (222 - 221);
        for (; q8ydYSBVNrx <= Zj8ZvWC;) {
            {
                JBJqHR = (397 - 397);
                for (; Zj8ZvWC -q8ydYSBVNrx > JBJqHR;) {
                    if (LlqmZ78[JBJqHR +(526 - 525)] > LlqmZ78[JBJqHR]) {
                        XCzhWL3K = LlqmZ78[JBJqHR];
                        LlqmZ78[JBJqHR] = LlqmZ78[JBJqHR +(15 - 14)];
                        LlqmZ78[JBJqHR +(248 - 247)] = XCzhWL3K;
                    }
                    JBJqHR = JBJqHR +(809 - 808);
                }
            }
            q8ydYSBVNrx = q8ydYSBVNrx + (301 - 300);
        }
    }
    {
        IYVEnwb3Htd = (519 - 519);
        for (; IYVEnwb3Htd < Zj8ZvWC -(536 - 535);) {
            printf ("%.2lf ", LlqmZ78[IYVEnwb3Htd]);
            IYVEnwb3Htd = IYVEnwb3Htd +(947 - 946);
        }
    }
    printf ("%.2lf", LlqmZ78[Zj8ZvWC -1]);
    return (424 - 424);
}

