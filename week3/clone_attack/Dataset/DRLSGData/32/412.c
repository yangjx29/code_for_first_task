void  main () {
    char ifscYqNkg7 [(469 - 369)] [100];
    int x [(588 - 488)];
    int R1TBWGg2;
    int *p2;
    int *q9uNk5G7or;
    char str2 [(866 - 766)] [(358 - 258)];
    int BoGL9w;
    int j;
    int y [(541 - 441)];
    int StSdLRxH [(134 - 34)];
    int *L1Xlw5JW;
    scanf ("%d", &R1TBWGg2);
    for (BoGL9w = (195 - 195); R1TBWGg2 > BoGL9w; BoGL9w = BoGL9w +(208 - 207)) {
        scanf ("\n");
        gets (ifscYqNkg7 [BoGL9w]);
        gets (str2 [BoGL9w]);
    }
    for (BoGL9w = (839 - 839); R1TBWGg2 > BoGL9w; BoGL9w = BoGL9w +(381 - 380)) {
        q9uNk5G7or = x;
        for (j = (898 - 898); j < strlen (ifscYqNkg7[BoGL9w]); j = j + (444 - 443), q9uNk5G7or = q9uNk5G7or + (977 - 976))
            *q9uNk5G7or = ifscYqNkg7[BoGL9w][j] - '0';
        p2 = y;
        for (j = (614 - 614); strlen (str2[BoGL9w]) > j; j = j + (138 - 137), p2 = p2 + (670 - 669))
            *p2 = str2[BoGL9w][j] - '0';
        for (q9uNk5G7or = q9uNk5G7or - (663 - 662), p2 = p2 - (646 - 645), L1Xlw5JW = StSdLRxH; y <= p2; q9uNk5G7or = q9uNk5G7or - (154 - 153), p2 = p2 - (142 - 141), L1Xlw5JW = L1Xlw5JW +(942 - 941)) {
            if (*p2 <= *q9uNk5G7or)
                *L1Xlw5JW = *q9uNk5G7or - *p2;
            else {
                *L1Xlw5JW = (*q9uNk5G7or + (891 - 881)) - *p2;
                for (j = (337 - 336);; j = j + (725 - 724))
                    if (0 < *(q9uNk5G7or - j))
                        break;
                *(q9uNk5G7or - j) = *(q9uNk5G7or - j) - (519 - 518);
                if (j > (152 - 151)) {
                    for (j = j - (106 - 105); j > 0; j = j - (242 - 241))
                        *(q9uNk5G7or - j) = (319 - 310);
                }
            }
        }
        for (; q9uNk5G7or >= x; q9uNk5G7or = q9uNk5G7or - 1, L1Xlw5JW = L1Xlw5JW +1)
            *L1Xlw5JW = *q9uNk5G7or;
        for (L1Xlw5JW = L1Xlw5JW -1; L1Xlw5JW >= StSdLRxH; L1Xlw5JW = L1Xlw5JW -1)
            printf ("%d", *L1Xlw5JW);
    }
}

