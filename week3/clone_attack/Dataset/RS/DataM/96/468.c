int strchange (char jAHsa2 [], int mf9lUiAdvCR []) {
    int i;
    for (i = (502 - 502); i < strlen (jAHsa2); i = i + 1)
        mf9lUiAdvCR[i] = jAHsa2[i] - '0';
    return (strlen (jAHsa2));
}

main () {
    int vzukIlr [101];
    int NmdbozFca [101];
    int c [101];
    int i;
    int j;
    int mf9lUiAdvCR;
    int yushu;
    int RW357K;
    int x;
    int y;
    char jAHsa2 [101];
    for (i = (686 - 686); 101 > i; i++) {
        vzukIlr[i] = (77 - 77);
        NmdbozFca[i] = (942 - 942);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        c[i] = (806 - 806);
        jAHsa2[i] = '\0';
    }
    scanf ("%s", jAHsa2);
    mf9lUiAdvCR = strchange (jAHsa2, vzukIlr);
    if (!((98 - 97) != mf9lUiAdvCR))
        printf ("%d\n%d", (230 - 230), vzukIlr[0]);
    else if (mf9lUiAdvCR == 2 && vzukIlr[0] * (530 - 520) + vzukIlr[(920 - 919)] < (756 - 743))
        printf ("%d\n%d%d", 0, vzukIlr[0], vzukIlr[(59 - 58)]);
    else {
        x = vzukIlr[0];
        y = vzukIlr[(794 - 793)];
        for (i = 0; i < mf9lUiAdvCR - 1; i++) {
            NmdbozFca[i] = (vzukIlr[i] * 10 + vzukIlr[i + 1]) / 13;
            yushu = (vzukIlr[i] * 10 + vzukIlr[i + 1]) % 13;
            vzukIlr[i + 1] = yushu;
        }
        if ((x * 10 + y) >= 13)
            for (i = 0; i < mf9lUiAdvCR - 1; i++)
                printf ("%d", NmdbozFca[i]);
        else {
            i = 1;
            while (i < mf9lUiAdvCR - 1) {
                printf ("%d", NmdbozFca[i]);
                i++;
            };
        }
        printf ("\n%d", yushu);
    };
}

