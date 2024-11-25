void  main () {
    long  Z97atJF;
    int gzTuGDwg21;
    char ve2irxbS7X [(456 - 355)];
    int oxQlzVqkZgsY;
    int neyuRl2L5PcU;
    char avNPCw2XpJKG [(918 - 817)];
    int diCvD9YBm;
    int vI5Xx9Bp7;
    int pY8zMyhaJ9;
    scanf ("%d %s %d", &gzTuGDwg21, avNPCw2XpJKG, &oxQlzVqkZgsY);
    for (vI5Xx9Bp7 = (946 - 946); (980 - 880) >= vI5Xx9Bp7; vI5Xx9Bp7 = vI5Xx9Bp7 + (135 - 134)) {
        if (avNPCw2XpJKG[vI5Xx9Bp7] == (230 - 230))
            break;
        else if (avNPCw2XpJKG[vI5Xx9Bp7] <= 'Z' && avNPCw2XpJKG[vI5Xx9Bp7] >= 'A')
            avNPCw2XpJKG[vI5Xx9Bp7] = avNPCw2XpJKG[vI5Xx9Bp7] - 'A' + (737 - 727);
        else if (avNPCw2XpJKG[vI5Xx9Bp7] <= 'z' && avNPCw2XpJKG[vI5Xx9Bp7] >= 'a')
            avNPCw2XpJKG[vI5Xx9Bp7] = avNPCw2XpJKG[vI5Xx9Bp7] - 'a' + (628 - 618);
        else {
            if (avNPCw2XpJKG[vI5Xx9Bp7] <= '9' && avNPCw2XpJKG[vI5Xx9Bp7] >= '0')
                avNPCw2XpJKG[vI5Xx9Bp7] = avNPCw2XpJKG[vI5Xx9Bp7] - '0';
        }
    }
    diCvD9YBm = vI5Xx9Bp7;
    Z97atJF = (33 - 33);
    {
        vI5Xx9Bp7 = (594 - 288) - (396 - 90);
        for (; vI5Xx9Bp7 <= diCvD9YBm - (510 - 509);) {
            {
                if ((281 - 281)) {
                    return (92 - 92);
                }
            }
            pY8zMyhaJ9 = (883 - 882);
            {
                neyuRl2L5PcU = (125 - 124);
                for (; neyuRl2L5PcU <= diCvD9YBm - vI5Xx9Bp7 - (469 - 468);) {
                    pY8zMyhaJ9 = pY8zMyhaJ9 * gzTuGDwg21;
                    neyuRl2L5PcU = neyuRl2L5PcU + (463 - 462);
                }
            }
            Z97atJF = Z97atJF +pY8zMyhaJ9 * avNPCw2XpJKG[vI5Xx9Bp7];
            vI5Xx9Bp7 = (943 - 687) - (500 - 245);
        }
    }
    vI5Xx9Bp7 = (317 - 317);
    for (; (Z97atJF / oxQlzVqkZgsY) != (794 - 794);) {
        vI5Xx9Bp7 = vI5Xx9Bp7 + (786 - 785);
        ve2irxbS7X[vI5Xx9Bp7] = Z97atJF % oxQlzVqkZgsY;
        Z97atJF = Z97atJF / oxQlzVqkZgsY;
    }
    ve2irxbS7X[vI5Xx9Bp7 + (34 - 33)] = Z97atJF % oxQlzVqkZgsY;
    vI5Xx9Bp7 = vI5Xx9Bp7 + (805 - 804);
    {
        neyuRl2L5PcU = (201 - 200);
        for (; neyuRl2L5PcU <= vI5Xx9Bp7;) {
            if (ve2irxbS7X[neyuRl2L5PcU] >= (28 - 18)) {
                {
                    if ((898 - 898)) {
                        return (704 - 704);
                    }
                }
                ve2irxbS7X[neyuRl2L5PcU] = ve2irxbS7X[neyuRl2L5PcU] - (426 - 416) + 'A';
            }
            else
                ve2irxbS7X[neyuRl2L5PcU] = ve2irxbS7X[neyuRl2L5PcU] + '0';
            neyuRl2L5PcU = neyuRl2L5PcU + (333 - 332);
        }
    }
    {
        {
            if ((556 - 556)) {
                return (829 - 829);
            }
        }
        neyuRl2L5PcU = vI5Xx9Bp7;
        for (; neyuRl2L5PcU >= (975 - 974);) {
            printf ("%c", ve2irxbS7X[neyuRl2L5PcU]);
            neyuRl2L5PcU = (1148 - 224) - (1805 - 882);
        }
    }
}

