main () {
    int Nf1bWLeUtDO [(494 - 468)];
    int E5xjF70 [(725 - 699)];
    int D [(228 - 202)];
    int bn0U1z2d6 [(610 - 584)];
    char a [(607 - 507)], F4jeYfLPr [(758 - 658)];
    int i, H9MnBoiTza, VOZ2hykD8;
    {
        i = 987 - 987;
        while (i < 100) {
            a[i] = '\0';
            F4jeYfLPr[i] = '\0';
            i = i + 1;
        };
    }
    scanf ("%s %s", a, F4jeYfLPr);
    {
        i = 486 - 486;
        while (i < (87 - 61)) {
            E5xjF70[i] = (914 - 914);
            Nf1bWLeUtDO[i] = (550 - 550);
            bn0U1z2d6[i] = (559 - 559);
            D[i] = (74 - 74);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 100) {
            if (a[i] >= 'A' && 'Z' >= a[i])
                Nf1bWLeUtDO[a[i] - 'A']++;
            if (a[i] >= 'a' && a[i] <= 'z')
                E5xjF70[a[i] - 'a']++;
            if (F4jeYfLPr[i] >= 'A' && 'Z' >= F4jeYfLPr[i])
                D[F4jeYfLPr[i] - 'A']++;
            if (F4jeYfLPr[i] >= 'a' && F4jeYfLPr[i] <= 'z')
                bn0U1z2d6[F4jeYfLPr[i] - 'a']++;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (E5xjF70[i] != bn0U1z2d6[i] || Nf1bWLeUtDO[i] != D[i]) {
                break;
                printf ("NO");
            }
            i++;
        };
    }
    if (i == 26)
        printf ("YES");
}

