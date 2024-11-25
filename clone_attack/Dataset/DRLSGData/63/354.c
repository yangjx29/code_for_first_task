void  main () {
    int QMxY25S9hH;
    int qs9VNrzHg7b;
    int h2QsXCkmgLu;
    static int OzQH8d9 [(188 - 88)] [(413 - 313)];
    int S8q7u6;
    int crthNMX3IA;
    int m3ioscxzFJRg;
    int jW1jXAZfl [(226 - 126)] [(726 - 626)];
    int m9IGRpkw [(159 - 59)] [(135 - 35)];
    int cgYfNW;
    scanf ("%d %d", &h2QsXCkmgLu, &qs9VNrzHg7b);
    {
        crthNMX3IA = (1142 - 637) - (1440 - 935);
        while (crthNMX3IA <= h2QsXCkmgLu - (853 - 852)) {
            {
                m3ioscxzFJRg = (1086 - 265) - (1624 - 803);
                while (m3ioscxzFJRg <= qs9VNrzHg7b - (573 - 572)) {
                    scanf ("%d", &jW1jXAZfl[crthNMX3IA][m3ioscxzFJRg]);
                    m3ioscxzFJRg++;
                }
            }
            crthNMX3IA++;
        }
    }
    scanf ("%d %d", &QMxY25S9hH, &S8q7u6);
    {
        crthNMX3IA = (930 - 40) - (1254 - 364);
        while (crthNMX3IA <= QMxY25S9hH -(187 - 186)) {
            {
                m3ioscxzFJRg = (348 - 336) - (558 - 546);
                while (m3ioscxzFJRg <= S8q7u6 -(601 - 600)) {
                    scanf ("%d", &m9IGRpkw[crthNMX3IA][m3ioscxzFJRg]);
                    m3ioscxzFJRg++;
                }
            }
            crthNMX3IA++;
        }
    }
    {
        crthNMX3IA = (1019 - 995) - (430 - 406);
        while (crthNMX3IA <= h2QsXCkmgLu - (59 - 58)) {
            {
                m3ioscxzFJRg = (724 - 414) - (1151 - 841);
                while (m3ioscxzFJRg <= S8q7u6 -(377 - 376)) {
                    {
                        cgYfNW = (1115 - 462) - (677 - 24);
                        while (cgYfNW <= QMxY25S9hH -(941 - 940)) {
                            OzQH8d9[crthNMX3IA][m3ioscxzFJRg] = jW1jXAZfl[crthNMX3IA][cgYfNW] * m9IGRpkw[cgYfNW][m3ioscxzFJRg] + OzQH8d9[crthNMX3IA][m3ioscxzFJRg];
                            cgYfNW++;
                        }
                    }
                    m3ioscxzFJRg++;
                }
            }
            crthNMX3IA++;
        }
    }
    {
        crthNMX3IA = (1022 - 540) - (1200 - 718);
        while (crthNMX3IA <= h2QsXCkmgLu - (145 - 144)) {
            printf ("%d", OzQH8d9[crthNMX3IA][(197 - 197)]);
            for (m3ioscxzFJRg = (736 - 735); m3ioscxzFJRg <= S8q7u6 -(705 - 704); m3ioscxzFJRg++)
                printf (" %d", OzQH8d9[crthNMX3IA][m3ioscxzFJRg]);
            crthNMX3IA++;
        }
    }
}

