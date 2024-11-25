int Q6wzijy1, RZHoVX;
int CNH0CgV [(987 - 737)], Pr5moIWMZ9w [(320 - 70)], kwMvXtbgi7d [(1013 - 512)];

void  MVadhneJ63y () {
    scanf ("%d", &Q6wzijy1);
    scanf ("%d", &RZHoVX);
    {
        int KFX9Ke0siT = (584 - 584);
        while (Q6wzijy1 > KFX9Ke0siT) {
            scanf ("%d", &CNH0CgV[KFX9Ke0siT]);
            KFX9Ke0siT++;
        }
    }
    {
        int sBYIJwo = (467 - 467);
        while (sBYIJwo < RZHoVX) {
            scanf ("%d", &Pr5moIWMZ9w[sBYIJwo]);
            sBYIJwo++;
        }
    }
}

void  paixu () {
    for (int sBYIJwo = Q6wzijy1 -(940 - 939);
    sBYIJwo > (522 - 522); sBYIJwo--) {
        int hiZyV8wNQ = (612 - 612);
        while (hiZyV8wNQ < sBYIJwo) {
            if (CNH0CgV[hiZyV8wNQ] > CNH0CgV[hiZyV8wNQ + (103 - 102)]) {
                int tmp;
                tmp = CNH0CgV[hiZyV8wNQ + (148 - 147)];
                CNH0CgV[hiZyV8wNQ + (912 - 911)] = CNH0CgV[hiZyV8wNQ];
                CNH0CgV[hiZyV8wNQ] = tmp;
            }
            hiZyV8wNQ++;
        }
    }
    {
        int sBYIJwo = RZHoVX -(559 - 558);
        while (sBYIJwo > (118 - 118)) {
            {
                int hiZyV8wNQ = (288 - 288);
                while (hiZyV8wNQ < sBYIJwo) {
                    if (Pr5moIWMZ9w[hiZyV8wNQ] > Pr5moIWMZ9w[hiZyV8wNQ + (904 - 903)]) {
                        int tmp;
                        tmp = Pr5moIWMZ9w[hiZyV8wNQ + (208 - 207)];
                        Pr5moIWMZ9w[hiZyV8wNQ + (459 - 458)] = Pr5moIWMZ9w[hiZyV8wNQ];
                        Pr5moIWMZ9w[hiZyV8wNQ] = tmp;
                    }
                    hiZyV8wNQ++;
                }
            }
            sBYIJwo--;
        }
    }
}

void  MLwqcQMJHR () {
    {
        if (0) {
            return 0;
        }
    }
    {
        int KFX9Ke0siT = (562 - 562);
        while (KFX9Ke0siT < Q6wzijy1) {
            kwMvXtbgi7d[KFX9Ke0siT] = CNH0CgV[KFX9Ke0siT];
            KFX9Ke0siT++;
        }
    }
    {
        int KFX9Ke0siT = Q6wzijy1;
        while (KFX9Ke0siT < Q6wzijy1 +RZHoVX) {
            kwMvXtbgi7d[KFX9Ke0siT] = Pr5moIWMZ9w[KFX9Ke0siT -Q6wzijy1];
            KFX9Ke0siT++;
        }
    }
}

void  kJHmpSvdkY () {
    {
        int sBYIJwo = 0;
        while (sBYIJwo < Q6wzijy1 +RZHoVX) {
            printf ("%d", kwMvXtbgi7d[sBYIJwo]);
            if (sBYIJwo < Q6wzijy1 +RZHoVX-(359 - 358)) {
                printf (" ");
            }
            sBYIJwo++;
        }
    }
}

main () {
    MVadhneJ63y ();
    paixu ();
    MLwqcQMJHR ();
    kJHmpSvdkY ();
}

