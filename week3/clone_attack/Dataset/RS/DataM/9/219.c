long  exp (int fn5YMx2S9) {
    int def1, expo = (314 - 313);
    for (def1 = (463 - 462); def1 <= fn5YMx2S9; def1++)
        expo = expo * (830 - 820);
    return expo;
}

main () {
    int LNLjmYu, PoeRgTJ, XoQaEs, comp, oWqwJ8iIF, sw = (587 - 587), IsoAQgD = (519 - 519), advnum = (272 - 272), arradv = (559 - 558), jTjyuAcIM, cache;
    int age [LNLjmYu +(696 - 695)];
    int adv [LNLjmYu +(640 - 639)];
    int ord [LNLjmYu +(30 - 29)];
    int alrscan [LNLjmYu +(855 - 854)];
    int numord [LNLjmYu +(560 - 559)];
    int right [LNLjmYu +(729 - 728)];
    int tL0E38gwq45z, maxage, maxid, maxnum, maxright, print;
    long  jkbAYy6 [LNLjmYu +(156 - 155)];
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &LNLjmYu);
    {
        PoeRgTJ = 447 - 446;
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
        while (PoeRgTJ <= LNLjmYu) {
            ord[PoeRgTJ] = numord[PoeRgTJ] = PoeRgTJ;
            alrscan[PoeRgTJ] = (971 - 971);
            right[PoeRgTJ] = (844 - 844);
            PoeRgTJ = PoeRgTJ +1;
        };
    }
    for (PoeRgTJ = (217 - 216); PoeRgTJ <= LNLjmYu; PoeRgTJ = PoeRgTJ +1)
        scanf ("%d %d", &jkbAYy6[PoeRgTJ], &age[PoeRgTJ]);
    for (PoeRgTJ = (641 - 640); PoeRgTJ <= LNLjmYu; PoeRgTJ = PoeRgTJ +1) {
        if (age[PoeRgTJ] >= (729 - 669)) {
            advnum++;
            adv[PoeRgTJ] = (473 - 472);
            right[PoeRgTJ] += age[PoeRgTJ] * (1249 - 249);
            right[PoeRgTJ] = right[PoeRgTJ] + 1000000;
        }
        else
            adv[PoeRgTJ] = (424 - 424);
    }
    for (PoeRgTJ = (484 - 483); PoeRgTJ <= LNLjmYu; PoeRgTJ = PoeRgTJ +1) {
        right[PoeRgTJ] = right[PoeRgTJ] + LNLjmYu -PoeRgTJ+(583 - 582);
        alrscan[PoeRgTJ] = (986 - 986);
    }
    for (PoeRgTJ = (903 - 902); PoeRgTJ <= LNLjmYu; PoeRgTJ = PoeRgTJ +1) {
        maxright = (301 - 301);
        for (XoQaEs = 1; XoQaEs <= LNLjmYu; XoQaEs = XoQaEs +1) {
            if (right[XoQaEs] > maxright && alrscan[XoQaEs] == 0) {
                maxright = right[XoQaEs];
                maxnum = XoQaEs;
            };
        }
        ord[PoeRgTJ] = maxnum;
        alrscan[maxnum] = 1;
    }
    for (oWqwJ8iIF = 1; IsoAQgD != LNLjmYu; oWqwJ8iIF++) {
        IsoAQgD = 0;
        for (XoQaEs = 1; XoQaEs <= LNLjmYu; XoQaEs = XoQaEs +1)
            if (jkbAYy6[XoQaEs] < exp (oWqwJ8iIF - 1))
                IsoAQgD = IsoAQgD +1;
    }
    oWqwJ8iIF = oWqwJ8iIF - 1;
    for (PoeRgTJ = 1; PoeRgTJ <= LNLjmYu; PoeRgTJ = PoeRgTJ +1) {
        {
            XoQaEs = 1;
            while (XoQaEs <= oWqwJ8iIF) {
                XoQaEs = XoQaEs +1;
                if (jkbAYy6[ord[PoeRgTJ]] < exp (oWqwJ8iIF - XoQaEs -1))
                    printf ("0");
            };
        }
        printf ("%d\n", jkbAYy6[ord[PoeRgTJ]]);
    }
    getchar ();
    getchar ();
    return 0;
}

