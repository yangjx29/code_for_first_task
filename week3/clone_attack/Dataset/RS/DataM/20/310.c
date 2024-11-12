void  main () {
    int JbLuID;
    int iGv7RtU4OIku;
    int I9C4vJ;
    int DYNByf;
    int YLxWrBezi;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char s [(321 - 301)] [(427 - 414)], aHyaWA [(591 - 588)], S [20] [13];
    DYNByf = JbLuID -(949 - 948);
    for (JbLuID = (940 - 939); (s[JbLuID][(939 - 939)] = getchar ()) != EOF; JbLuID = JbLuID +1) {
        gets (S [JbLuID]);
        s[JbLuID][(704 - 703)] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcat (s[JbLuID], S[JbLuID]);
    }
    {
        JbLuID = 933 - 932;
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
        while (JbLuID <= DYNByf) {
            YLxWrBezi = (544 - 544);
            {
                iGv7RtU4OIku = 297 - 296;
                while (s[JbLuID][iGv7RtU4OIku] != ' ') {
                    if (s[JbLuID][iGv7RtU4OIku] > s[JbLuID][YLxWrBezi])
                        YLxWrBezi = iGv7RtU4OIku;
                    iGv7RtU4OIku = iGv7RtU4OIku + 1;
                };
            }
            aHyaWA[(407 - 407)] = s[JbLuID][I9C4vJ +(741 - 739)];
            aHyaWA[1] = s[JbLuID][I9C4vJ +(533 - 530)];
            aHyaWA[(434 - 432)] = s[JbLuID][I9C4vJ +(208 - 204)];
            I9C4vJ = iGv7RtU4OIku - 1;
            for (iGv7RtU4OIku = I9C4vJ; iGv7RtU4OIku > YLxWrBezi; iGv7RtU4OIku = iGv7RtU4OIku - 1)
                s[JbLuID][iGv7RtU4OIku + (785 - 782)] = s[JbLuID][iGv7RtU4OIku];
            s[JbLuID][YLxWrBezi +1] = aHyaWA[0];
            s[JbLuID][YLxWrBezi +(893 - 891)] = aHyaWA[1];
            s[JbLuID][YLxWrBezi +(448 - 445)] = aHyaWA[(469 - 467)];
            for (iGv7RtU4OIku = 0; iGv7RtU4OIku <= I9C4vJ +3; iGv7RtU4OIku = iGv7RtU4OIku + 1)
                printf ("%c", s[JbLuID][iGv7RtU4OIku]);
            JbLuID = JbLuID +1;
            printf ("\n");
        };
    };
}

