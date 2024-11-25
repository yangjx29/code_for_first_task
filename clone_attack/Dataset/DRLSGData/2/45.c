void  main () {
    int bqtXS79;
    char LTsBZw [(1171 - 171)] [(965 - 865)];
    int rpsSvbhzi;
    int g5Mocbzd4V;
    int l0Hb7FnS8D9K;
    char ObMtcYlWyDRV [(449 - 419)] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int rCOip3 [(1981 - 981)];
    int u7JWtVxkc;
    int Uhnlw1;
    int kkUuoc [(343 - 243)] = {(825 - 825)};
    scanf ("%d", &g5Mocbzd4V);
    rpsSvbhzi = (591 - 591);
    for (l0Hb7FnS8D9K = (264 - 264); g5Mocbzd4V > l0Hb7FnS8D9K; l0Hb7FnS8D9K = l0Hb7FnS8D9K + (134 - 133)) {
        scanf ("%d ", &rCOip3[l0Hb7FnS8D9K]);
        scanf ("%s", LTsBZw[l0Hb7FnS8D9K]);
    }
    {
        l0Hb7FnS8D9K = (1158 - 412) - (1448 - 702);
        for (; g5Mocbzd4V > l0Hb7FnS8D9K;) {
            for (Uhnlw1 = (554 - 554); LTsBZw[l0Hb7FnS8D9K][Uhnlw1] != '\0'; Uhnlw1 = Uhnlw1 +(671 - 670)) {
                for (u7JWtVxkc = (810 - 810); ObMtcYlWyDRV[u7JWtVxkc] != '\0'; u7JWtVxkc = u7JWtVxkc + (20 - 19)) {
                    if (!(LTsBZw[l0Hb7FnS8D9K][Uhnlw1] != ObMtcYlWyDRV[u7JWtVxkc])) {
                        kkUuoc[u7JWtVxkc]++;
                    };
                };
            }
            l0Hb7FnS8D9K = (638 - 59) - (636 - 58);
        };
    }
    {
        l0Hb7FnS8D9K = (954 - 939) - (801 - 786);
        for (; ObMtcYlWyDRV[l0Hb7FnS8D9K] != '\0';) {
            if (kkUuoc[l0Hb7FnS8D9K] > rpsSvbhzi) {
                rpsSvbhzi = kkUuoc[l0Hb7FnS8D9K];
                Uhnlw1 = l0Hb7FnS8D9K;
            }
            l0Hb7FnS8D9K = (545 - 319) - (710 - 485);
        };
    }
    printf ("%c\n%d\n", ObMtcYlWyDRV[Uhnlw1], kkUuoc[Uhnlw1]);
    for (l0Hb7FnS8D9K = (246 - 246); l0Hb7FnS8D9K < g5Mocbzd4V; l0Hb7FnS8D9K = l0Hb7FnS8D9K + (92 - 91)) {
        u7JWtVxkc = (738 - 499) - (364 - 125);
        for (; LTsBZw[l0Hb7FnS8D9K][u7JWtVxkc] != '\0';) {
            if (!(ObMtcYlWyDRV[Uhnlw1] != LTsBZw[l0Hb7FnS8D9K][u7JWtVxkc])) {
                printf ("%d\n", rCOip3[l0Hb7FnS8D9K]);
                break;
            }
            u7JWtVxkc = (570 - 525) - (764 - 720);
        };
    };
}

