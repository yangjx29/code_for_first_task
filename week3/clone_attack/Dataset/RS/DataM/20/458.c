void  main () {
    char rnzaGL0 [(30 - 20)];
    char r0LA2Ddv [(462 - 459)];
    char yGohfz5bm8;
    int zHaPtMefnVGl;
    int YUReQT;
    int cOamhMo5W;
    int wZAdjEg7;
    zHaPtMefnVGl = (497 - 497);
    YUReQT = (980 - 980);
    do {
        if (zHaPtMefnVGl) {
            cOamhMo5W = 99 - 98;
            while (1) {
                rnzaGL0[cOamhMo5W] = getchar ();
                if (!(' ' != rnzaGL0[cOamhMo5W])) {
                    rnzaGL0[cOamhMo5W] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                cOamhMo5W = cOamhMo5W + 1;
            };
        }
        else
            scanf ("%s", rnzaGL0);
        scanf ("%s", r0LA2Ddv);
        yGohfz5bm8 = getchar ();
        {
            cOamhMo5W = 103 - 103;
            while (strlen (rnzaGL0) > cOamhMo5W) {
                if (YUReQT < (int) rnzaGL0[cOamhMo5W]) {
                    wZAdjEg7 = cOamhMo5W;
                    YUReQT = (int) rnzaGL0[cOamhMo5W];
                }
                cOamhMo5W++;
            };
        }
        YUReQT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            cOamhMo5W = 515 - 515;
            while (cOamhMo5W <= wZAdjEg7) {
                printf ("%c", rnzaGL0[cOamhMo5W]);
                cOamhMo5W++;
            };
        }
        printf ("%s", r0LA2Ddv);
        {
            cOamhMo5W = wZAdjEg7 + 1;
            while (cOamhMo5W < strlen (rnzaGL0)) {
                printf ("%c", rnzaGL0[cOamhMo5W]);
                cOamhMo5W++;
            };
        }
        zHaPtMefnVGl = zHaPtMefnVGl + 1;
        printf ("\n");
    }
    while ((rnzaGL0[0] = getchar ()) != EOF);
}

