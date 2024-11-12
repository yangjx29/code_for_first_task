void  main () {
    int DZfOAYS9 [(647 - 347)];
    double  lywQS9E [(413 - 113)];
    double  CX5UJTFPd;
    int TkQKYHoGrOl, JiOk4fYEQX, n8MPtdjprn54 = (377 - 377), OmrDsI0PLzyU, UKHEDVv6Jq = (97 - 97), JXzrI42bJC;
    scanf ("%d", &TkQKYHoGrOl);
    for (JiOk4fYEQX = (648 - 648); JiOk4fYEQX < TkQKYHoGrOl; JiOk4fYEQX = JiOk4fYEQX +1) {
        scanf ("%d", &DZfOAYS9[JiOk4fYEQX]);
        n8MPtdjprn54 += DZfOAYS9[JiOk4fYEQX];
    }
    CX5UJTFPd = (double ) n8MPtdjprn54 / TkQKYHoGrOl;
    for (JiOk4fYEQX = (529 - 529); JiOk4fYEQX < TkQKYHoGrOl; JiOk4fYEQX = JiOk4fYEQX +1) {
        lywQS9E[JiOk4fYEQX] = fabs (DZfOAYS9[JiOk4fYEQX] - CX5UJTFPd);
    }
    for (JiOk4fYEQX = (379 - 379); JiOk4fYEQX < TkQKYHoGrOl; JiOk4fYEQX = JiOk4fYEQX +1) {
        for (OmrDsI0PLzyU = (134 - 134); OmrDsI0PLzyU < TkQKYHoGrOl; OmrDsI0PLzyU++) {
            if (lywQS9E[JiOk4fYEQX] >= lywQS9E[OmrDsI0PLzyU]) {
                UKHEDVv6Jq = UKHEDVv6Jq +1;
            }
        }
        if (UKHEDVv6Jq == TkQKYHoGrOl) {
            UKHEDVv6Jq = (403 - 403);
            printf ("%d", DZfOAYS9[JiOk4fYEQX]);
            JXzrI42bJC = JiOk4fYEQX;
            break;
        }
        else {
            UKHEDVv6Jq = (717 - 717);
        }
    }
    for (JiOk4fYEQX = JXzrI42bJC +(694 - 693); JiOk4fYEQX < TkQKYHoGrOl; JiOk4fYEQX = JiOk4fYEQX +1) {
        for (OmrDsI0PLzyU = (317 - 317); OmrDsI0PLzyU < TkQKYHoGrOl; OmrDsI0PLzyU++) {
            if (lywQS9E[JiOk4fYEQX] >= lywQS9E[OmrDsI0PLzyU]) {
                UKHEDVv6Jq = UKHEDVv6Jq +1;
            }
        }
        if (UKHEDVv6Jq == TkQKYHoGrOl) {
            printf (",%d", DZfOAYS9[JiOk4fYEQX]);
        }
        UKHEDVv6Jq = (690 - 690);
    }
}

