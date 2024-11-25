void  main () {
    int OAi7kNrYu8p, WXA50ygUt, UJBcju1UHw, FhzcTDJ6ye, JOKfys, bEoqTKOkAF2 [5], UqIHEz, h3g4KCuiP, cum0IbxA [100], PvIRjmSVw = 1, sJleEaPi2Z = 1;
    scanf ("%d" "%d", &OAi7kNrYu8p, &WXA50ygUt);
    for (UJBcju1UHw = OAi7kNrYu8p; UJBcju1UHw <= WXA50ygUt; UJBcju1UHw++) {
        FhzcTDJ6ye = sqrt (UJBcju1UHw);
        for (JOKfys = 2; JOKfys <= FhzcTDJ6ye; JOKfys++) {
            if (UJBcju1UHw % JOKfys == 0)
                break;
        }
        if (JOKfys >= FhzcTDJ6ye +1) {
            bEoqTKOkAF2[4] = UJBcju1UHw / 10000;
            bEoqTKOkAF2[3] = (UJBcju1UHw -bEoqTKOkAF2[4] * 10000) / 1000;
            bEoqTKOkAF2[2] = (UJBcju1UHw -bEoqTKOkAF2[4] * 10000 - bEoqTKOkAF2[3] * 1000) / 100;
            bEoqTKOkAF2[1] = (UJBcju1UHw -bEoqTKOkAF2[4] * 10000 - bEoqTKOkAF2[3] * 1000 - bEoqTKOkAF2[2] * 100) / 10;
            bEoqTKOkAF2[0] = UJBcju1UHw -bEoqTKOkAF2[4] * 10000 - bEoqTKOkAF2[3] * 1000 - bEoqTKOkAF2[2] * 100 - bEoqTKOkAF2[1] * 10;
            if (bEoqTKOkAF2[4] > 0)
                h3g4KCuiP = bEoqTKOkAF2[0] * 10000 + bEoqTKOkAF2[1] * 1000 + bEoqTKOkAF2[2] * 100 + bEoqTKOkAF2[3] * 10 + bEoqTKOkAF2[4];
            else if (bEoqTKOkAF2[3] > 0)
                h3g4KCuiP = bEoqTKOkAF2[0] * 1000 + bEoqTKOkAF2[1] * 100 + bEoqTKOkAF2[2] * 10 + bEoqTKOkAF2[3];
            else if (bEoqTKOkAF2[2] > 0)
                h3g4KCuiP = bEoqTKOkAF2[0] * 100 + bEoqTKOkAF2[1] * 10 + bEoqTKOkAF2[2];
            else if (bEoqTKOkAF2[1] > 0)
                h3g4KCuiP = bEoqTKOkAF2[0] * 10 + bEoqTKOkAF2[1];
            else
                h3g4KCuiP = bEoqTKOkAF2[0];
            if (h3g4KCuiP == UJBcju1UHw) {
                cum0IbxA[PvIRjmSVw] = UJBcju1UHw;
                PvIRjmSVw = PvIRjmSVw +1;
            }
        }
    }
    if (PvIRjmSVw > 1) {
        for (sJleEaPi2Z = 1; sJleEaPi2Z <= PvIRjmSVw -2; sJleEaPi2Z++) {
            printf ("%d,", cum0IbxA[sJleEaPi2Z]);
        }
        printf ("%d\n", cum0IbxA[sJleEaPi2Z]);
    }
    if (PvIRjmSVw == 1)
        ;
}

