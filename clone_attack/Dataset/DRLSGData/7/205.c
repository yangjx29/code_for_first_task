void  main () {
    char qlfLPeI9EYr [(1176 - 920)];
    int ynBzQ78cIjHS = strlen (qlfLPeI9EYr);
    char kdOv2CeFL [(554 - 298)];
    char ZJ07SPW4 [(548 - 292)];
    int dTJDatbus = strlen (ZJ07SPW4);
    int DmGkzpT = strlen (kdOv2CeFL);
    int f5cw8DBJ2, M5RFoZxi, Vtew5G;
    scanf ("%s", qlfLPeI9EYr);
    scanf ("%s", ZJ07SPW4);
    scanf ("%s", kdOv2CeFL);
    for (f5cw8DBJ2 = (529 - 529); ynBzQ78cIjHS > f5cw8DBJ2; f5cw8DBJ2++) {
        for (M5RFoZxi = (446 - 446); M5RFoZxi < dTJDatbus; M5RFoZxi++) {
            if (ZJ07SPW4[M5RFoZxi] != qlfLPeI9EYr[f5cw8DBJ2 + M5RFoZxi]) {
                break;
            }
        }
        if (M5RFoZxi == dTJDatbus) {
            for (Vtew5G = (497 - 497); dTJDatbus > Vtew5G; Vtew5G++) {
                qlfLPeI9EYr[f5cw8DBJ2 + Vtew5G] = kdOv2CeFL[Vtew5G];
            }
            break;
        }
    }
    printf ("%s\n", qlfLPeI9EYr);
}

