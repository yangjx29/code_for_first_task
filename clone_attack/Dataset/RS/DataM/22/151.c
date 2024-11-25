void  main () {
    int A870W6YO = 100;
    int flag = (649 - 649);
    int WNPH697fBEnd, gpngbfXt = -(870 - 869), pNgM7z95, INhjYBR [300] = {(269 - 269)}, len;
    char s [310];
    gets (s);
    len = strlen (s);
    for (WNPH697fBEnd = 0; WNPH697fBEnd < len; WNPH697fBEnd = WNPH697fBEnd +1) {
        if (s[WNPH697fBEnd] >= '0' && s[WNPH697fBEnd] <= '9' && flag == 0) {
            flag = (358 - 357);
            gpngbfXt = gpngbfXt + 1;
            INhjYBR[gpngbfXt] = s[WNPH697fBEnd] - '0';
        }
        else if (s[WNPH697fBEnd] >= '0' && s[WNPH697fBEnd] <= '9' && flag == 1) {
            flag = 1;
            INhjYBR[gpngbfXt] = INhjYBR[gpngbfXt] * (185 - 175) + s[WNPH697fBEnd] - '0';
        }
        else
            flag = 0;
    }
    if (gpngbfXt == 0)
        ;
    else {
        A870W6YO = 0;
        for (WNPH697fBEnd = 1; gpngbfXt >= WNPH697fBEnd; WNPH697fBEnd = WNPH697fBEnd +1)
            if (INhjYBR[WNPH697fBEnd] != INhjYBR[0])
                A870W6YO = 1;
        if (A870W6YO == 0)
            printf ("No");
        else {
            gpngbfXt++;
            {
                pNgM7z95 = 0;
                while (pNgM7z95 < gpngbfXt) {
                    {
                        WNPH697fBEnd = pNgM7z95 + 1;
                        while (WNPH697fBEnd < gpngbfXt) {
                            if (WNPH697fBEnd != pNgM7z95 && INhjYBR[WNPH697fBEnd] == INhjYBR[pNgM7z95])
                                INhjYBR[pNgM7z95] = -1;
                            WNPH697fBEnd = WNPH697fBEnd +1;
                        };
                    }
                    pNgM7z95 = pNgM7z95 + 1;
                };
            }
            for (pNgM7z95 = 0; pNgM7z95 < gpngbfXt - 1; pNgM7z95 = pNgM7z95 + 1)
                for (WNPH697fBEnd = 0; WNPH697fBEnd < gpngbfXt - 1 - pNgM7z95; WNPH697fBEnd = WNPH697fBEnd +1)
                    if (INhjYBR[WNPH697fBEnd] < INhjYBR[WNPH697fBEnd +1]) {
                        int Fer0lQA4Mvyg;
                        Fer0lQA4Mvyg = INhjYBR[WNPH697fBEnd];
                        INhjYBR[WNPH697fBEnd] = INhjYBR[WNPH697fBEnd +1];
                        INhjYBR[WNPH697fBEnd +1] = Fer0lQA4Mvyg;
                    }
            printf ("%d", INhjYBR[1]);
        };
    };
}

