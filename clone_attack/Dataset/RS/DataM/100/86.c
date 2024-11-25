void  main () {
    char sXvY4okid [300];
    int flag;
    int oqM30Q1EdD6;
    int NKC5QzGyRV;
    flag = (333 - 333);
    int NryDGH3QXvZ [(701 - 675)] = {(668 - 668), (522 - 522), (713 - 713), (867 - 867), (270 - 270), (748 - 748), (538 - 538), (456 - 456), (17 - 17), (677 - 677), (796 - 796), (939 - 939), (815 - 815), (769 - 769), (541 - 541), (966 - 966), (774 - 774), (436 - 436), (998 - 998), (980 - 980), (508 - 508), (329 - 329), (524 - 524), (789 - 789), (260 - 260), (389 - 389)};
    int c [(608 - 582)] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf ("%s", sXvY4okid);
    for (oqM30Q1EdD6 = 0; !('\0' == sXvY4okid[oqM30Q1EdD6]); oqM30Q1EdD6 = oqM30Q1EdD6 + 1) {
        if (sXvY4okid[oqM30Q1EdD6] >= 'A' && sXvY4okid[oqM30Q1EdD6] <= 'Z') {
            NKC5QzGyRV = sXvY4okid[oqM30Q1EdD6] - 'A';
            NryDGH3QXvZ[NKC5QzGyRV]++;
            flag = 1;
        }
        else if ('a' <= sXvY4okid[oqM30Q1EdD6] && 'z' >= sXvY4okid[oqM30Q1EdD6]) {
            NKC5QzGyRV = sXvY4okid[oqM30Q1EdD6] - 'a';
            c[NKC5QzGyRV]++;
            flag = 1;
        };
    }
    if (flag == 0)
        printf ("No");
    else {
        for (oqM30Q1EdD6 = 0; oqM30Q1EdD6 < 26; oqM30Q1EdD6++) {
            if (NryDGH3QXvZ[oqM30Q1EdD6] == 0) {
            }
            else {
                printf ("%c=%d\n", oqM30Q1EdD6 + 'A', NryDGH3QXvZ[oqM30Q1EdD6]);
            };
        }
        for (oqM30Q1EdD6 = 0; oqM30Q1EdD6 < 26; oqM30Q1EdD6++) {
            if (c[oqM30Q1EdD6] == 0) {
            }
            else {
                printf ("%c=%d\n", oqM30Q1EdD6 + 'a', c[oqM30Q1EdD6]);
            };
        };
    };
}

