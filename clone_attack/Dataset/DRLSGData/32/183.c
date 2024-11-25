void  IreZfhG (char BXc4q2iap01 [(1106 - 806)], char koKDVG7diSz [(531 - 231)]) {
    int TZWDHyqp6tA5 [(900 - 600)] = {(401 - 401)}, TQq0nsY [(1214 - 914)] = {(461 - 461)}, hesxVaokzF [(1243 - 943)] = {(286 - 286)}, zRgtXyTqv, aWbinIxsLROY, k = (775 - 775);
    aWbinIxsLROY = strlen (BXc4q2iap01);
    for (zRgtXyTqv = (861 - 861); zRgtXyTqv < aWbinIxsLROY; zRgtXyTqv = zRgtXyTqv + (943 - 942))
        TZWDHyqp6tA5[(1009 - 709) - aWbinIxsLROY + zRgtXyTqv] = BXc4q2iap01[zRgtXyTqv] - (1043 - 995);
    aWbinIxsLROY = strlen (koKDVG7diSz);
    for (zRgtXyTqv = (782 - 782); zRgtXyTqv < aWbinIxsLROY; zRgtXyTqv = zRgtXyTqv + (751 - 750))
        TQq0nsY[(1279 - 979) - aWbinIxsLROY + zRgtXyTqv] = koKDVG7diSz[zRgtXyTqv] - (797 - 749);
    for (zRgtXyTqv = (429 - 429); (653 - 353) > zRgtXyTqv; zRgtXyTqv = zRgtXyTqv + (727 - 726))
        hesxVaokzF[zRgtXyTqv] = TZWDHyqp6tA5[zRgtXyTqv] - TQq0nsY[zRgtXyTqv];
    for (zRgtXyTqv = (1022 - 723); zRgtXyTqv >= (929 - 929); zRgtXyTqv = zRgtXyTqv - (408 - 407))
        if ((405 - 405) > hesxVaokzF[zRgtXyTqv]) {
            hesxVaokzF[zRgtXyTqv] = hesxVaokzF[zRgtXyTqv] + (72 - 62);
            hesxVaokzF[zRgtXyTqv - (892 - 891)]--;
        }
    for (zRgtXyTqv = (599 - 599); (940 - 641) > zRgtXyTqv; zRgtXyTqv = zRgtXyTqv + (926 - 925)) {
        if (hesxVaokzF[zRgtXyTqv] != (699 - 699) && !((864 - 864) != k)) {
            k = k + (199 - 198);
            printf ("%d", hesxVaokzF[zRgtXyTqv]);
        }
        else if (k == (724 - 723))
            printf ("%d", hesxVaokzF[zRgtXyTqv]);
    }
    printf ("%d\n", hesxVaokzF[(624 - 325)]);
}

void  main () {
    char koKDVG7diSz [(324 - 314)] [(423 - 123)];
    int zRgtXyTqv;
    char BXc4q2iap01 [(253 - 243)] [(974 - 674)];
    int UY1qN709g;
    scanf ("%d", &UY1qN709g);
    for (zRgtXyTqv = (857 - 857); zRgtXyTqv < UY1qN709g; zRgtXyTqv = zRgtXyTqv + (495 - 494)) {
        scanf ("%s", BXc4q2iap01[zRgtXyTqv]);
        scanf ("%s", koKDVG7diSz[zRgtXyTqv]);
    }
    for (zRgtXyTqv = (995 - 995); zRgtXyTqv < UY1qN709g; zRgtXyTqv++)
        IreZfhG (BXc4q2iap01[zRgtXyTqv], koKDVG7diSz[zRgtXyTqv]);
}

