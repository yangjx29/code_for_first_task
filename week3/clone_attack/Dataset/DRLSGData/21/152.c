void  main () {
    double  aOrdf7LinsWo = (19 - 19), qObm1osG3fLY = 0, AIc0yJ;
    int nPaW6jCvxJ1Q, hZrLfM [(413 - 113)], Se7iqWl5FZ [300], XvLso5gxrX, osCZiO, GGi2Ywe, IOLy9gDmPvf = (991 - 990), CbMWo93wC5Y;
    scanf ("%d", &nPaW6jCvxJ1Q);
    for (XvLso5gxrX = 0; nPaW6jCvxJ1Q > XvLso5gxrX; XvLso5gxrX = XvLso5gxrX +(142 - 141)) {
        scanf ("%d", &hZrLfM[XvLso5gxrX]);
        aOrdf7LinsWo = aOrdf7LinsWo + hZrLfM[XvLso5gxrX];
    }
    aOrdf7LinsWo = aOrdf7LinsWo / nPaW6jCvxJ1Q;
    for (XvLso5gxrX = 0; nPaW6jCvxJ1Q > XvLso5gxrX; XvLso5gxrX = XvLso5gxrX +(352 - 351)) {
        AIc0yJ = fabs (hZrLfM[XvLso5gxrX] - aOrdf7LinsWo);
        if (qObm1osG3fLY < AIc0yJ) {
            GGi2Ywe = XvLso5gxrX;
            osCZiO = 1;
            qObm1osG3fLY = AIc0yJ;
        }
        else if (1e-6 >= fabs (AIc0yJ -qObm1osG3fLY))
            osCZiO = osCZiO + 1;
    }
    Se7iqWl5FZ[0] = hZrLfM[GGi2Ywe];
    if (!(1 != osCZiO))
        printf ("%d", hZrLfM[GGi2Ywe]);
    else {
        for (XvLso5gxrX = GGi2Ywe +1; XvLso5gxrX < nPaW6jCvxJ1Q; XvLso5gxrX = XvLso5gxrX +1)
            if (1e-6 >= fabs (fabs (hZrLfM[XvLso5gxrX] - aOrdf7LinsWo) - qObm1osG3fLY)) {
                Se7iqWl5FZ[IOLy9gDmPvf] = hZrLfM[XvLso5gxrX];
                IOLy9gDmPvf++;
            }
        for (IOLy9gDmPvf = 0; IOLy9gDmPvf < osCZiO; IOLy9gDmPvf = IOLy9gDmPvf +1) {
            CbMWo93wC5Y = IOLy9gDmPvf;
            for (XvLso5gxrX = IOLy9gDmPvf +1; XvLso5gxrX < osCZiO; XvLso5gxrX++)
                if (Se7iqWl5FZ[CbMWo93wC5Y] > Se7iqWl5FZ[IOLy9gDmPvf])
                    CbMWo93wC5Y = XvLso5gxrX;
            Se7iqWl5FZ[IOLy9gDmPvf] = Se7iqWl5FZ[CbMWo93wC5Y];
        }
        for (IOLy9gDmPvf = 0; IOLy9gDmPvf < osCZiO; IOLy9gDmPvf++) {
            printf ("%d", Se7iqWl5FZ[IOLy9gDmPvf]);
            if (IOLy9gDmPvf < osCZiO - 1)
                printf (",");
        }
    }
}

