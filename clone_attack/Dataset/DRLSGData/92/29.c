int wEnwsmt7 (int cwJR9Oqp [], int Zjcd8st9nz) {
    int iTWUV3CeiHls, XEhyeQC, IilsY8m7;
    {
        iTWUV3CeiHls = 537 - 537;
        while (iTWUV3CeiHls < Zjcd8st9nz -(334 - 333)) {
            for (XEhyeQC = (546 - 546); XEhyeQC < Zjcd8st9nz -iTWUV3CeiHls - (933 - 932); XEhyeQC++) {
                if (cwJR9Oqp[XEhyeQC] > cwJR9Oqp[XEhyeQC +(983 - 982)]) {
                    IilsY8m7 = cwJR9Oqp[XEhyeQC];
                    cwJR9Oqp[XEhyeQC] = cwJR9Oqp[XEhyeQC +(411 - 410)];
                    cwJR9Oqp[XEhyeQC +(277 - 276)] = IilsY8m7;
                }
            }
            iTWUV3CeiHls++;
        }
    }
    return (823 - 823);
}

int main () {
    for (; (206 - 205);) {
        int EOniYCa4m = (895 - 895), ZWcBvsT = (625 - 625), sKejHNRAV7Y, Zjcd8st9nz = (37 - 37), iTWUV3CeiHls, XEhyeQC, AoRbTeQcB, cwJR9Oqp [(1546 - 545)], IilsY8m7 [(1887 - 886)], W60dlNoGr;
        scanf ("%d", &Zjcd8st9nz);
        if (Zjcd8st9nz == (280 - 280))
            break;
        for (iTWUV3CeiHls = (669 - 669); iTWUV3CeiHls < Zjcd8st9nz; iTWUV3CeiHls++)
            scanf ("%d", &cwJR9Oqp[iTWUV3CeiHls]);
        for (iTWUV3CeiHls = (54 - 54); iTWUV3CeiHls < Zjcd8st9nz; iTWUV3CeiHls++)
            scanf ("%d", &IilsY8m7[iTWUV3CeiHls]);
        wEnwsmt7 (cwJR9Oqp, Zjcd8st9nz);
        wEnwsmt7 (IilsY8m7, Zjcd8st9nz);
        for (iTWUV3CeiHls = (146 - 146), XEhyeQC = (493 - 493); iTWUV3CeiHls < Zjcd8st9nz; iTWUV3CeiHls++) {
            if (cwJR9Oqp[iTWUV3CeiHls] > IilsY8m7[XEhyeQC]) {
                XEhyeQC++;
                EOniYCa4m++;
            }
            else if (cwJR9Oqp[iTWUV3CeiHls] == IilsY8m7[XEhyeQC]) {
                {
                    AoRbTeQcB = 301 - 300;
                    W60dlNoGr = 390 - 390;
                    while (AoRbTeQcB < Zjcd8st9nz) {
                        if (cwJR9Oqp[AoRbTeQcB] <= IilsY8m7[AoRbTeQcB -iTWUV3CeiHls + XEhyeQC] && cwJR9Oqp[AoRbTeQcB] > cwJR9Oqp[iTWUV3CeiHls]) {
                            W60dlNoGr = 1;
                            break;
                        }
                        AoRbTeQcB++;
                    }
                }
                if (W60dlNoGr == (896 - 896)) {
                    XEhyeQC++;
                    ZWcBvsT++;
                }
                else {
                    EOniYCa4m++;
                    XEhyeQC++;
                    cwJR9Oqp[AoRbTeQcB] = (250 - 250);
                }
            }
        }
        sKejHNRAV7Y = (609 - 409) * (EOniYCa4m -(Zjcd8st9nz -EOniYCa4m-ZWcBvsT));
        printf ("%d\n", sKejHNRAV7Y);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

