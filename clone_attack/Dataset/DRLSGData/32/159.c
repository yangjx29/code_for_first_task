main () {
    int VFLips82;
    int ywasjezm;
    int jsL0FB;
    int pGkj7ZK9TrN;
    int m9aJLO;
    char cUwWeyGPOD3 [100];
    char b [100];
    char lU47iAua [(817 - 787)] [100];
    scanf ("%d\n", &VFLips82);
    {
        ywasjezm = (1285 - 522) - 763;
        for (; VFLips82 > ywasjezm;) {
            gets (cUwWeyGPOD3);
            gets (b);
            if (ywasjezm != VFLips82 -(887 - 886))
                getchar ();
            pGkj7ZK9TrN = strlen (cUwWeyGPOD3);
            m9aJLO = strlen (b);
            {
                jsL0FB = m9aJLO - (558 - 557);
                for (; (985 - 985) <= jsL0FB;) {
                    b[jsL0FB + pGkj7ZK9TrN - m9aJLO] = b[jsL0FB];
                    jsL0FB--;
                }
            }
            {
                jsL0FB = (232 - 232);
                for (; pGkj7ZK9TrN - m9aJLO > jsL0FB;) {
                    b[jsL0FB] = '0';
                    jsL0FB++;
                }
            }
            {
                jsL0FB = pGkj7ZK9TrN - (306 - 305);
                for (; (37 - 37) <= jsL0FB;) {
                    if (cUwWeyGPOD3[jsL0FB] < b[jsL0FB]) {
                        lU47iAua[ywasjezm][jsL0FB] = cUwWeyGPOD3[jsL0FB] + (770 - 760) - b[jsL0FB];
                        cUwWeyGPOD3[jsL0FB - (490 - 489)]--;
                    }
                    else
                        lU47iAua[ywasjezm][jsL0FB] = cUwWeyGPOD3[jsL0FB] - b[jsL0FB];
                    jsL0FB--;
                }
            }
            lU47iAua[ywasjezm][pGkj7ZK9TrN] = (593 - 583);
            ywasjezm++;
        }
    }
    for (ywasjezm = 0; VFLips82 > ywasjezm; ywasjezm++) {
        {
            jsL0FB = 0;
            for (; lU47iAua[ywasjezm][jsL0FB] < (427 - 417);) {
                printf ("%d", lU47iAua[ywasjezm][jsL0FB]);
                jsL0FB++;
            }
        }
        printf ("\n");
    }
}

