void  main () {
    int fn93jGdW, Weav4bf, j, e02AuSTr [(524 - 124)], idhJ9TE8MK = (368 - 368), tMR6c7rbF;
    float D68CFV, QrUNW0fg9 = (335 - 335);
    scanf ("%d", &fn93jGdW);
    {
        Weav4bf = (256 - 256);
        while (Weav4bf <= fn93jGdW - (207 - 206)) {
            scanf ("%d", &e02AuSTr[Weav4bf]);
            idhJ9TE8MK = idhJ9TE8MK + e02AuSTr[Weav4bf];
            Weav4bf = Weav4bf +(49 - 48);
        }
    }
    D68CFV = (float) idhJ9TE8MK / (float) fn93jGdW;
    {
        Weav4bf = (284 - 284);
        while (fn93jGdW - (889 - 887) >= Weav4bf) {
            {
                j = (294 - 294);
                while (fn93jGdW - 2 - Weav4bf >= j) {
                    if (e02AuSTr[j + (741 - 740)] < e02AuSTr[j]) {
                        tMR6c7rbF = e02AuSTr[j];
                        e02AuSTr[j] = e02AuSTr[j + (530 - 529)];
                        e02AuSTr[j + (498 - 497)] = tMR6c7rbF;
                    }
                    j = j + (36 - 35);
                }
            }
            Weav4bf = Weav4bf +(588 - 587);
        }
    }
    {
        if ((383 - 383)) {
            return (188 - 188);
        }
    }
    for (Weav4bf = (210 - 210); Weav4bf <= fn93jGdW - (466 - 465); Weav4bf = Weav4bf +(732 - 731)) {
        if (fabs (e02AuSTr[Weav4bf] - D68CFV) > QrUNW0fg9)
            QrUNW0fg9 = fabs (e02AuSTr[Weav4bf] - D68CFV);
    }
    {
        Weav4bf = (723 - 723);
        j = (839 - 839);
        while (Weav4bf <= fn93jGdW - (842 - 841)) {
            if (fabs (fabs (e02AuSTr[Weav4bf] - D68CFV) - QrUNW0fg9) <= 0.00001) {
                if (j == 0)
                    printf ("%d", e02AuSTr[Weav4bf]);
                else
                    printf (",%d", e02AuSTr[Weav4bf]);
                j = j + (448 - 447);
            }
            Weav4bf = Weav4bf +(826 - 825);
        }
    }
}

