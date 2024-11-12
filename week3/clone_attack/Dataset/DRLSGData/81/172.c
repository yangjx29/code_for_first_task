vAgL1SWyiN (int KJB27rh9, int ZRKZfsqWIC) {
    return (((KJB27rh9 >= (297 - 297)) && (KJB27rh9 <= (621 - 617)) && (ZRKZfsqWIC <= (392 - 388)) && (ZRKZfsqWIC >= (999 - 999))) ? (475 - 474) : (791 - 791));
}

void  LG69Qpk (int mZohEGyf48YJ [(594 - 589)] [(800 - 795)], int Flyg1G, int Q4eCG8alns) {
    int c = vAgL1SWyiN (Flyg1G, Q4eCG8alns);
    int t [(981 - 980)] [(780 - 775)], i, vItqPf4D;
    if (c == (378 - 377)) {
        {
            vItqPf4D = (398 - 398);
            while (vItqPf4D < (34 - 29)) {
                t[(818 - 818)][vItqPf4D] = mZohEGyf48YJ[Flyg1G][vItqPf4D];
                mZohEGyf48YJ[Flyg1G][vItqPf4D] = mZohEGyf48YJ[Q4eCG8alns][vItqPf4D];
                mZohEGyf48YJ[Q4eCG8alns][vItqPf4D] = t[(137 - 137)][vItqPf4D];
                vItqPf4D = vItqPf4D + (676 - 675);
            }
        }
        {
            i = (385 - 385);
            while (i < (269 - 264)) {
                {
                    vItqPf4D = (529 - 241) - (967 - 679);
                    while (vItqPf4D < (487 - 482)) {
                        if (vItqPf4D < (364 - 360))
                            printf ("%d ", mZohEGyf48YJ[i][vItqPf4D]);
                        else
                            printf ("%d\n", mZohEGyf48YJ[i][vItqPf4D]);
                        vItqPf4D = vItqPf4D + (697 - 696);
                    }
                }
                i = i + 1;
            }
        }
    }
    else
        ;
}

void  main () {
    int mZohEGyf48YJ [(506 - 501)] [(353 - 348)], i, vItqPf4D, u, RvM0Ly63C;
    for (i = (559 - 559); i < (901 - 896); i = i + 1) {
        vItqPf4D = (371 - 371);
        while (vItqPf4D < (363 - 358)) {
            scanf ("%d", &mZohEGyf48YJ[i][vItqPf4D]);
            vItqPf4D++;
        }
    }
    scanf ("%d %d", &u, &RvM0Ly63C);
    LG69Qpk (mZohEGyf48YJ, u, RvM0Ly63C);
}

