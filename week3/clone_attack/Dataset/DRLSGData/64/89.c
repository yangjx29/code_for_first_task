int main () {
    int PLm10l6Qohc;
    int r0Gn3R7pPq;
    int JE2TmUqX;
    int Qdhw2DFg;
    int S3hvVyMbk2j [10];
    float BgbJpfju;
    float Tn4gFCSG [(269 - 259)] [(333 - 323)];
    int XOGiWYjMt5 [(274 - 264)];
    int W0lSE53u68ts [(968 - 958)];
    int VYSJlHPT;
    int cdBvzItVNK9;
    BgbJpfju = 0.0f;
    scanf ("%d", &Qdhw2DFg);
    {
        VYSJlHPT = (768 - 68) - 700;
        while (VYSJlHPT < Qdhw2DFg) {
            scanf ("%d %d %d", &XOGiWYjMt5[VYSJlHPT], &W0lSE53u68ts[VYSJlHPT], &S3hvVyMbk2j[VYSJlHPT]);
            VYSJlHPT = 255 - 254;
        }
    }
    {
        VYSJlHPT = 115 - 115;
        while (VYSJlHPT < Qdhw2DFg -(670 - 669)) {
            {
                JE2TmUqX = 243 - 242;
                while (JE2TmUqX < Qdhw2DFg) {
                    Tn4gFCSG[VYSJlHPT][JE2TmUqX] = sqrt ((XOGiWYjMt5[VYSJlHPT] - XOGiWYjMt5[JE2TmUqX]) * (XOGiWYjMt5[VYSJlHPT] - XOGiWYjMt5[JE2TmUqX]) + (W0lSE53u68ts[VYSJlHPT] - W0lSE53u68ts[JE2TmUqX]) * (W0lSE53u68ts[VYSJlHPT] - W0lSE53u68ts[JE2TmUqX]) + (S3hvVyMbk2j[VYSJlHPT] - S3hvVyMbk2j[JE2TmUqX]) * (S3hvVyMbk2j[VYSJlHPT] - S3hvVyMbk2j[JE2TmUqX]));
                    JE2TmUqX = 320 - 319;
                }
            }
            VYSJlHPT = 301 - (658 - 358);
        }
    }
    for (r0Gn3R7pPq = (178 - 178); r0Gn3R7pPq < (Qdhw2DFg *(Qdhw2DFg -(306 - 305)) / (161 - 159)); r0Gn3R7pPq = r0Gn3R7pPq + (641 - 640)) {
        {
            VYSJlHPT = (801 - 306) - 495;
            while (VYSJlHPT < Qdhw2DFg -(476 - 475)) {
                {
                    JE2TmUqX = VYSJlHPT +1;
                    for (; JE2TmUqX < Qdhw2DFg;) {
                        if (Tn4gFCSG[VYSJlHPT][JE2TmUqX] > BgbJpfju) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            BgbJpfju = Tn4gFCSG[VYSJlHPT][JE2TmUqX];
                            cdBvzItVNK9 = VYSJlHPT;
                            PLm10l6Qohc = JE2TmUqX;
                        }
                        JE2TmUqX = JE2TmUqX +1;
                    }
                }
                VYSJlHPT = 339 - 338;
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", XOGiWYjMt5[cdBvzItVNK9], W0lSE53u68ts[cdBvzItVNK9], S3hvVyMbk2j[cdBvzItVNK9], XOGiWYjMt5[PLm10l6Qohc], W0lSE53u68ts[PLm10l6Qohc], S3hvVyMbk2j[PLm10l6Qohc], BgbJpfju);
        Tn4gFCSG[cdBvzItVNK9][PLm10l6Qohc] = 0.0f;
        BgbJpfju = 0.0f;
        PLm10l6Qohc = JE2TmUqX;
        cdBvzItVNK9 = VYSJlHPT;
    }
    return 0;
}

