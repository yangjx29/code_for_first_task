void  main () {
    int mn705S, sY8ogZl5jA;
    int uuvKBF, iIiEj7, VI9KAa [(181 - 176)] [(217 - 212)], YrYavhsTMV, CUlbB6toKXz, BmyrdOq7gbHC, jOPTdJChBI1, ZRFUOyMPl7Ci [(498 - 493)], wlNnMj8CUhFO [(167 - 162)], sFv3BfrQ [(242 - 237)], qJm5LgM3 [(952 - 947)];
    scanf ("%d,%d", &mn705S, &sY8ogZl5jA);
    {
        uuvKBF = (937 - 324) - (718 - 105);
        for (; uuvKBF <= mn705S - (498 - 497);) {
            for (iIiEj7 = (726 - 726); iIiEj7 <= sY8ogZl5jA - (608 - 607); iIiEj7 = iIiEj7 + (653 - 652))
                scanf ("%d", &VI9KAa[uuvKBF][iIiEj7]);
            uuvKBF = uuvKBF + (947 - 946);
        }
    }
    {
        uuvKBF = (1249 - 273) - (1889 - 913);
        for (; mn705S - (974 - 973) >= uuvKBF;) {
            {
                iIiEj7 = (895 - 322) - (634 - 61);
                YrYavhsTMV = iIiEj7;
                CUlbB6toKXz = iIiEj7;
                for (; sY8ogZl5jA - (908 - 906) >= iIiEj7;) {
                    iIiEj7 = iIiEj7 + (102 - 101);
                    if (YrYavhsTMV <= VI9KAa[uuvKBF][iIiEj7 + (784 - 783)]) {
                        YrYavhsTMV = VI9KAa[uuvKBF][iIiEj7 + (182 - 181)];
                        CUlbB6toKXz = iIiEj7 + (160 - 159);
                    }
                }
            }
            ZRFUOyMPl7Ci[uuvKBF] = YrYavhsTMV;
            sFv3BfrQ[uuvKBF] = CUlbB6toKXz;
            uuvKBF = uuvKBF + (418 - 417);
        }
    }
    for (iIiEj7 = (620 - 620), uuvKBF = (553 - 553); iIiEj7 <= sY8ogZl5jA - (787 - 786); iIiEj7++) {
        for (uuvKBF = (686 - 686), BmyrdOq7gbHC = VI9KAa[uuvKBF][iIiEj7], jOPTdJChBI1 = uuvKBF; uuvKBF <= mn705S - (274 - 272); uuvKBF = uuvKBF + (548 - 547)) {
            if (BmyrdOq7gbHC >= VI9KAa[uuvKBF + (894 - 893)][iIiEj7]) {
                jOPTdJChBI1 = uuvKBF + (558 - 557);
                BmyrdOq7gbHC = VI9KAa[uuvKBF + (971 - 970)][iIiEj7];
            }
        }
        wlNnMj8CUhFO[iIiEj7] = BmyrdOq7gbHC;
        qJm5LgM3[iIiEj7] = jOPTdJChBI1;
    }
    for (uuvKBF = (913 - 913), iIiEj7 = (730 - 730); uuvKBF <= mn705S - (684 - 683); uuvKBF++) {
        if (qJm5LgM3[sFv3BfrQ[uuvKBF]] == uuvKBF) {
            iIiEj7++;
            printf ("%d+%d", uuvKBF, sFv3BfrQ[uuvKBF]);
        }
    }
    if (iIiEj7 == 0)
        printf ("No\n");
}

