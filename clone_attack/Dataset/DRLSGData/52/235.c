void  main () {
    int Kg2W3yvR, xFMlHhnjc, oumk0RExYd, x9FlfK2, lu7VToDF2, AEs43LY, MfAW2r, IMsERaYVt1c;
    int JALSU1RcIqB9 [100];
    scanf ("%d%d", &Kg2W3yvR, &xFMlHhnjc);
    for (oumk0RExYd = (32 - 32); oumk0RExYd < Kg2W3yvR; oumk0RExYd = oumk0RExYd + 1)
        scanf ("%d ", &JALSU1RcIqB9[oumk0RExYd]);
    if (Kg2W3yvR > 2 * xFMlHhnjc) {
        for (oumk0RExYd = (894 - 894); oumk0RExYd < xFMlHhnjc; oumk0RExYd = oumk0RExYd + 1) {
            lu7VToDF2 = JALSU1RcIqB9[oumk0RExYd];
            JALSU1RcIqB9[oumk0RExYd] = JALSU1RcIqB9[oumk0RExYd + Kg2W3yvR -xFMlHhnjc];
            JALSU1RcIqB9[oumk0RExYd + Kg2W3yvR -xFMlHhnjc] = lu7VToDF2;
        }
        for (oumk0RExYd = Kg2W3yvR -xFMlHhnjc; oumk0RExYd < Kg2W3yvR; oumk0RExYd = oumk0RExYd + 1) {
            for (x9FlfK2 = oumk0RExYd - Kg2W3yvR +2 * xFMlHhnjc; x9FlfK2 < oumk0RExYd; x9FlfK2 = x9FlfK2 + 1) {
                AEs43LY = JALSU1RcIqB9[oumk0RExYd];
                JALSU1RcIqB9[oumk0RExYd] = JALSU1RcIqB9[x9FlfK2];
                JALSU1RcIqB9[x9FlfK2] = AEs43LY;
            }
        }
    }
    else {
        for (oumk0RExYd = 0; oumk0RExYd < xFMlHhnjc; oumk0RExYd = oumk0RExYd + 1) {
            lu7VToDF2 = JALSU1RcIqB9[oumk0RExYd];
            JALSU1RcIqB9[oumk0RExYd] = JALSU1RcIqB9[oumk0RExYd + Kg2W3yvR -xFMlHhnjc];
            JALSU1RcIqB9[oumk0RExYd + Kg2W3yvR -xFMlHhnjc] = lu7VToDF2;
        }
        MfAW2r = 2 * Kg2W3yvR -2 * xFMlHhnjc;
        IMsERaYVt1c = xFMlHhnjc;
        for (; MfAW2r < Kg2W3yvR;) {
            for (oumk0RExYd = IMsERaYVt1c; oumk0RExYd < MfAW2r; oumk0RExYd++) {
                AEs43LY = JALSU1RcIqB9[oumk0RExYd];
                JALSU1RcIqB9[oumk0RExYd] = JALSU1RcIqB9[MfAW2r];
                JALSU1RcIqB9[MfAW2r] = AEs43LY;
            }
            IMsERaYVt1c = IMsERaYVt1c +1;
            MfAW2r++;
        }
    }
    for (oumk0RExYd = 0; oumk0RExYd < Kg2W3yvR -1; oumk0RExYd++)
        printf ("%d ", JALSU1RcIqB9[oumk0RExYd]);
    printf ("%d", JALSU1RcIqB9[Kg2W3yvR -1]);
}

