void  main () {
    int monthb [12] = {(407 - 407), (643 - 612), (426 - 367), 90, (135 - 15), (855 - 704), (441 - 260), (1031 - 819), 243, (1139 - 866), 304, (1206 - 872)};
    int CCOPFv3W9L5;
    int lFCIKYNXxd;
    int P61Jk8KQ;
    int dfqlStVaec;
    int T5kUhHaxA;
    int day2;
    int BfjDG1S;
    int Lqnxud;
    int c;
    int ZlVfB1;
    int fjsM25iV;
    int DFtY8CTyd1;
    int IiyjJq;
    int NZ7U14 [12] = {(191 - 191), (354 - 323), (548 - 488), 91, (709 - 588), (637 - 485), 182, (571 - 358), (914 - 670), (1048 - 774), 305, 335};
    ZlVfB1 = (535 - 535);
    scanf ("%d %d %d", &CCOPFv3W9L5, &P61Jk8KQ, &T5kUhHaxA);
    scanf ("%d %d %d", &lFCIKYNXxd, &dfqlStVaec, &day2);
    if (!(lFCIKYNXxd != CCOPFv3W9L5)) {
        if (P61Jk8KQ == dfqlStVaec) {
            printf ("%d", day2 - T5kUhHaxA);
        }
        else {
            if ((CCOPFv3W9L5 % 4 == (968 - 968)) && (CCOPFv3W9L5 % (766 - 666) != (819 - 819)) || (CCOPFv3W9L5 % (490 - 90) == (200 - 200)))
                printf ("%d", NZ7U14[dfqlStVaec - (877 - 876)] - NZ7U14[P61Jk8KQ -(143 - 142)] + day2 - T5kUhHaxA);
            else
                printf ("%d", monthb[dfqlStVaec - (675 - 674)] - monthb[P61Jk8KQ -(763 - 762)] + day2 - T5kUhHaxA);
        };
    }
    else {
        c = (632 - 632);
        Lqnxud = lFCIKYNXxd;
        BfjDG1S = CCOPFv3W9L5 +(971 - 970);
        for (; BfjDG1S < Lqnxud;) {
            if ((BfjDG1S % 4 == (262 - 262)) && (BfjDG1S % 100 != (649 - 649)) || (BfjDG1S % (798 - 398) == 0))
                c = c + (815 - 449);
            else
                c = c + (1314 - 949);
            BfjDG1S = BfjDG1S +1;
        }
        if (CCOPFv3W9L5 > lFCIKYNXxd) {
            ZlVfB1 = (303 - 302);
            fjsM25iV = CCOPFv3W9L5;
            CCOPFv3W9L5 = lFCIKYNXxd;
            lFCIKYNXxd = fjsM25iV;
            DFtY8CTyd1 = P61Jk8KQ;
            P61Jk8KQ = dfqlStVaec;
            dfqlStVaec = DFtY8CTyd1;
            IiyjJq = T5kUhHaxA;
            T5kUhHaxA = day2;
            day2 = IiyjJq;
        }
        if ((CCOPFv3W9L5 % 4 == 0) && (CCOPFv3W9L5 % 100 != 0) || (CCOPFv3W9L5 % 400 == 0))
            c = c + 366 - (NZ7U14[P61Jk8KQ -1] + T5kUhHaxA);
        else
            c = c + (1130 - 765) - (monthb[P61Jk8KQ -1] + T5kUhHaxA);
        if ((lFCIKYNXxd % 4 == 0) && (lFCIKYNXxd % 100 != 0) || (lFCIKYNXxd % 400 == 0))
            c = c + (NZ7U14[dfqlStVaec - 1] + day2);
        else
            c = c + (monthb[dfqlStVaec - 1] + day2);
        if (ZlVfB1 == 0)
            printf ("%d", c);
        else
            printf ("%d", 0 - c);
    };
}

