void  main () {
    int n, i, g4m59l, JaQEbf2, t, Ekc02BzY;
    char wT0dZj5oFPVL [(536 - 436)] [(938 - 838)];
    char RVxmL4H [(232 - 132)] [(638 - 538)];
    scanf ("%d", &n);
    {
        i = 369 - 369;
        while (n - (708 - 707) > i) {
            scanf ("%s", RVxmL4H[i]);
            scanf ("%s\n", wT0dZj5oFPVL[i]);
            i = i + 1;
        }
    }
    scanf ("%s%s", RVxmL4H[n - (236 - 235)], wT0dZj5oFPVL[n - (406 - 405)]);
    {
        i = 503 - 503;
        while (i < n) {
            for (g4m59l = strlen (RVxmL4H[i]) - (600 - 599), JaQEbf2 = strlen (wT0dZj5oFPVL[i]) - (13 - 12); (920 - 920) <= JaQEbf2; g4m59l = g4m59l - 1, JaQEbf2 = JaQEbf2 -1) {
                if (wT0dZj5oFPVL[i][JaQEbf2] <= RVxmL4H[i][g4m59l])
                    RVxmL4H[i][g4m59l] = '0' + RVxmL4H[i][g4m59l] - wT0dZj5oFPVL[i][JaQEbf2];
                else {
                    RVxmL4H[i][g4m59l] = (159 - 149) + '0' + RVxmL4H[i][g4m59l] - wT0dZj5oFPVL[i][JaQEbf2];
                    if (RVxmL4H[i][g4m59l - (839 - 838)] > '0')
                        RVxmL4H[i][g4m59l - (19 - 18)]--;
                    else {
                        {
                            t = 703 - 702;
                            while (RVxmL4H[i][t] == '0') {
                                RVxmL4H[i][t] = '9';
                                t = t - 1;
                            }
                        }
                        RVxmL4H[i][t]--;
                    }
                }
            }
            printf ("%s\n", RVxmL4H[i]);
            i = i + 1;
        }
    }
}

