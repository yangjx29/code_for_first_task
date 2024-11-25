void  main () {
    int s;
    int PTr875Cb1GV3;
    int fZU5AMQnSY;
    int byUDfL0ls;
    int vioyzcPWU8;
    int Gz8TAmaw;
    int nsq0T3ftDP [(328 - 318)] [(1000 - 990)];
    int max;
    s = (557 - 557);
    scanf ("%d,%d", &PTr875Cb1GV3, &fZU5AMQnSY);
    for (byUDfL0ls = (566 - 566); byUDfL0ls < PTr875Cb1GV3; byUDfL0ls = byUDfL0ls + 1)
        for (vioyzcPWU8 = (646 - 646); vioyzcPWU8 < fZU5AMQnSY; vioyzcPWU8 = vioyzcPWU8 + (466 - 465))
            scanf ("%d", &nsq0T3ftDP[byUDfL0ls][vioyzcPWU8]);
    for (byUDfL0ls = (65 - 65); byUDfL0ls < PTr875Cb1GV3;) {
        max = (776 - 776);
        for (vioyzcPWU8 = (752 - 752); vioyzcPWU8 < fZU5AMQnSY; vioyzcPWU8 = vioyzcPWU8 + 1) {
            if (max < nsq0T3ftDP[byUDfL0ls][vioyzcPWU8]) {
                max = nsq0T3ftDP[byUDfL0ls][vioyzcPWU8];
                Gz8TAmaw = vioyzcPWU8;
            }
        }
        for (vioyzcPWU8 = (308 - 308); vioyzcPWU8 < PTr875Cb1GV3; vioyzcPWU8 = vioyzcPWU8 + 1)
            if (nsq0T3ftDP[vioyzcPWU8][Gz8TAmaw] < nsq0T3ftDP[byUDfL0ls][Gz8TAmaw])
                goto a1;
        s = (86 - 85);
        printf ("%d+%d", byUDfL0ls, Gz8TAmaw);
        break;
    a1 :
        byUDfL0ls = byUDfL0ls + (642 - 641);
    }
    if (s == (310 - 310))
        printf ("No");
}

