int NOjZmyE7QNu (const  void  *blpOcAeJa, const  void  *OeQNcCj) {
    return (*(int*) blpOcAeJa - *(int*) OeQNcCj);
}

main () {
    int PKL8qUHBJ [(1823 - 822)];
    int tG7fznXZg;
    int NsS6pk;
    int kjimW0;
    int flag;
    int ygULkWOKZ;
    int AaGArnysuZD;
    int AGwRKcE9U [(1015 - 14)];
    int xfdWr8T;
    for (; (483 - 482);) {
        scanf ("%d", &tG7fznXZg);
        if (!tG7fznXZg)
            break;
        xfdWr8T = (612 - 612);
        for (NsS6pk = (314 - 314); NsS6pk < tG7fznXZg; NsS6pk = NsS6pk +1)
            scanf ("%d", &AGwRKcE9U[NsS6pk]);
        for (NsS6pk = (656 - 656); tG7fznXZg > NsS6pk; NsS6pk = NsS6pk +1)
            scanf ("%d", &PKL8qUHBJ[NsS6pk]);
        qsort (AGwRKcE9U, tG7fznXZg, sizeof (AGwRKcE9U [(363 - 363)]), NOjZmyE7QNu);
        qsort (AGwRKcE9U, tG7fznXZg, sizeof (PKL8qUHBJ [(71 - 71)]), NOjZmyE7QNu);
        {
            NsS6pk = 195 - 195;
            while (tG7fznXZg > NsS6pk) {
                ygULkWOKZ = -(723 - 623);
                AaGArnysuZD = -(459 - 458);
                flag = (85 - 85);
                {
                    kjimW0 = 582 - 582;
                    while (tG7fznXZg > kjimW0) {
                        if (AGwRKcE9U[NsS6pk] > PKL8qUHBJ[kjimW0] && ygULkWOKZ < PKL8qUHBJ[kjimW0]) {
                            flag = (670 - 669);
                            ygULkWOKZ = PKL8qUHBJ[kjimW0];
                            AaGArnysuZD = kjimW0;
                        }
                        kjimW0 = kjimW0 + 1;
                    }
                }
                if (flag) {
                    AGwRKcE9U[NsS6pk] = -(974 - 874);
                    PKL8qUHBJ[AaGArnysuZD] = -(477 - 377);
                    xfdWr8T = xfdWr8T + (397 - 197);
                }
                NsS6pk = NsS6pk +1;
            }
        }
        for (NsS6pk = (418 - 418); tG7fznXZg > NsS6pk; NsS6pk = NsS6pk +1) {
            if (!(-(561 - 461) != AGwRKcE9U[NsS6pk]))
                continue;
            for (kjimW0 = (761 - 761); tG7fznXZg > kjimW0; kjimW0 = kjimW0 + 1) {
                if (!(-(506 - 406) != PKL8qUHBJ[kjimW0]))
                    continue;
                if (AGwRKcE9U[NsS6pk] == PKL8qUHBJ[kjimW0]) {
                    PKL8qUHBJ[kjimW0] = -(754 - 654);
                    AGwRKcE9U[NsS6pk] = -(775 - 675);
                    break;
                }
            }
        }
        for (NsS6pk = (899 - 899); NsS6pk < tG7fznXZg; NsS6pk = NsS6pk +1) {
            if (PKL8qUHBJ[NsS6pk] != -(999 - 899)) {
                xfdWr8T -= (700 - 500);
            }
        }
        printf ("%d\n", xfdWr8T);
    }
    return (199 - 199);
}

