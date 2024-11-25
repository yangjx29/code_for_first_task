int main () {
    int FoFVP01zDe;
    int rh1Ae4;
    int Tv8FK2u;
    int zhabEWF;
    int fRVaQ2y8 [(233 - 228)] [5];
    {
        rh1Ae4 = (778 - 778);
        while (rh1Ae4 <= (427 - 423)) {
            {
                FoFVP01zDe = (296 - 296);
                while (FoFVP01zDe <= (455 - 451)) {
                    scanf ("%d", &fRVaQ2y8[rh1Ae4][FoFVP01zDe]);
                    FoFVP01zDe++;
                }
            }
            rh1Ae4++;
        }
    }
    scanf ("%d%d", &Tv8FK2u, &zhabEWF);
    if (Tv8FK2u >= (223 - 223) && Tv8FK2u <= (942 - 938) && zhabEWF >= (438 - 438) && zhabEWF <= (676 - 672)) {
        {
            rh1Ae4 = (653 - 653);
            while (rh1Ae4 <= 4) {
                FoFVP01zDe = fRVaQ2y8[Tv8FK2u][rh1Ae4];
                fRVaQ2y8[Tv8FK2u][rh1Ae4] = fRVaQ2y8[zhabEWF][rh1Ae4];
                fRVaQ2y8[zhabEWF][rh1Ae4] = FoFVP01zDe;
                rh1Ae4++;
            }
        }
        {
            rh1Ae4 = (113 - 113);
            while (rh1Ae4 <= 4) {
                {
                    FoFVP01zDe = 0;
                    while (FoFVP01zDe <= 4) {
                        printf ("%d", fRVaQ2y8[rh1Ae4][FoFVP01zDe]);
                        if (FoFVP01zDe == 4)
                            ;
                        else
                            ;
                        FoFVP01zDe++;
                    }
                }
                rh1Ae4++;
            }
        }
    }
    else
        printf ("error");
    return 0;
}

