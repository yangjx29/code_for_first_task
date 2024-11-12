void  main () {
    int T8dKTYJXirf, zhzWFR, jgTSP93Vmc, RAKrfq3 = (49 - 49);
    char O2XBKpFOufE [100];
    char FLfM9qocQW [100];
    char m3 [100];
    char ZmhIwzBHR [100];
    scanf ("%d", &T8dKTYJXirf);
    {
        zhzWFR = 0;
        while (T8dKTYJXirf -(523 - 522) >= zhzWFR) {
            scanf ("\n");
            zhzWFR++;
            scanf ("%s", O2XBKpFOufE);
            scanf ("%s", FLfM9qocQW);
            for (jgTSP93Vmc = 0; jgTSP93Vmc <= (strlen (O2XBKpFOufE) - strlen (FLfM9qocQW) - (636 - 635)); jgTSP93Vmc = jgTSP93Vmc + 1)
                m3[jgTSP93Vmc] = '0';
            m3[jgTSP93Vmc] = '\0';
            strcat (m3, FLfM9qocQW);
            {
                jgTSP93Vmc = O2XBKpFOufE;
                while (0 <= jgTSP93Vmc) {
                    if (O2XBKpFOufE[jgTSP93Vmc] < '0') {
                        O2XBKpFOufE[jgTSP93Vmc] = O2XBKpFOufE[jgTSP93Vmc] + 10;
                        O2XBKpFOufE[jgTSP93Vmc - 1] = O2XBKpFOufE[jgTSP93Vmc - 1] - 1;
                    }
                    if (O2XBKpFOufE[jgTSP93Vmc] >= m3[jgTSP93Vmc])
                        ZmhIwzBHR[jgTSP93Vmc] = O2XBKpFOufE[jgTSP93Vmc] - m3[jgTSP93Vmc] + '0';
                    else {
                        ZmhIwzBHR[jgTSP93Vmc] = O2XBKpFOufE[jgTSP93Vmc] - m3[jgTSP93Vmc] + 10 + '0';
                        O2XBKpFOufE[jgTSP93Vmc - 1] = O2XBKpFOufE[jgTSP93Vmc - 1] - 1;
                    }
                    jgTSP93Vmc = jgTSP93Vmc - 1;
                };
            }
            for (jgTSP93Vmc = 0; jgTSP93Vmc <= strlen (O2XBKpFOufE) - 1; jgTSP93Vmc++) {
                if (ZmhIwzBHR[jgTSP93Vmc] != '0')
                    RAKrfq3 = 1;
                if (RAKrfq3 == 1)
                    printf ("%c", ZmhIwzBHR[jgTSP93Vmc]);
            }
            printf ("\n");
        };
    };
}

