void  main () {
    int EwV40M;
    int aaVuKMJB0x;
    int CEb4F1A;
    int Cow8ySERd;
    int M2loCk;
    int FxMPXIUl;
    EwV40M = (25 - 25);
    char b4vKWMarL [256], tyhVRa25 [256], BgBqKIR [256];
    scanf ("%s", &b4vKWMarL);
    aaVuKMJB0x = strlen (b4vKWMarL);
    scanf ("%s", &tyhVRa25);
    CEb4F1A = strlen (tyhVRa25);
    scanf ("%s", &BgBqKIR);
    Cow8ySERd = strlen (BgBqKIR);
    {
        M2loCk = 538 - 538;
        while (aaVuKMJB0x > M2loCk) {
            if (!(tyhVRa25[0] != b4vKWMarL[M2loCk])) {
                EwV40M = 0;
                {
                    FxMPXIUl = 0;
                    while (FxMPXIUl < CEb4F1A) {
                        if (b4vKWMarL[M2loCk +FxMPXIUl] == tyhVRa25[FxMPXIUl]) {
                            EwV40M++;
                        }
                        FxMPXIUl++;
                    };
                }
                if (EwV40M == CEb4F1A) {
                    {
                        FxMPXIUl = 0;
                        while (FxMPXIUl < Cow8ySERd) {
                            b4vKWMarL[M2loCk +FxMPXIUl] = BgBqKIR[FxMPXIUl];
                            FxMPXIUl++;
                        };
                    }
                    break;
                };
            }
            M2loCk++;
        };
    }
    printf ("%s", b4vKWMarL);
}

