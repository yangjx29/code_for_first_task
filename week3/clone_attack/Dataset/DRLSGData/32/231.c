void  main () {
    int jdeCfB4L;
    int Cbtv5igA;
    int CsqebJUCVM;
    char hCbp06X [(470 - 369)];
    int irmdI0WsFyPn;
    int tFqW2j5fe;
    int KHxu94BpiRSs;
    int wwT9pF;
    char zpIqaAu5 [(118 - 17)];
    char YLs7JpORvmnw [(244 - 144)] [(246 - 145)];
    scanf ("%d", &irmdI0WsFyPn);
    for (KHxu94BpiRSs = (670 - 670); KHxu94BpiRSs < irmdI0WsFyPn; KHxu94BpiRSs = KHxu94BpiRSs +(615 - 614)) {
        scanf ("%s %s", hCbp06X, zpIqaAu5);
        wwT9pF = strlen (hCbp06X);
        Cbtv5igA = strlen (zpIqaAu5);
        CsqebJUCVM = wwT9pF - Cbtv5igA;
        YLs7JpORvmnw[KHxu94BpiRSs][wwT9pF] = '\0';
        for (tFqW2j5fe = wwT9pF - (150 - 149); (764 - 764) <= tFqW2j5fe; tFqW2j5fe = tFqW2j5fe - (585 - 584)) {
            if (tFqW2j5fe >= wwT9pF - Cbtv5igA) {
                if (hCbp06X[tFqW2j5fe] >= zpIqaAu5[tFqW2j5fe - CsqebJUCVM])
                    YLs7JpORvmnw[KHxu94BpiRSs][tFqW2j5fe] = hCbp06X[tFqW2j5fe] - zpIqaAu5[tFqW2j5fe - CsqebJUCVM] + '0';
                else {
                    jdeCfB4L = tFqW2j5fe - (638 - 637);
                    YLs7JpORvmnw[KHxu94BpiRSs][tFqW2j5fe] = (702 - 692) + hCbp06X[tFqW2j5fe] - zpIqaAu5[tFqW2j5fe - CsqebJUCVM] + '0';
                    for (; hCbp06X[jdeCfB4L] == '0';) {
                        hCbp06X[jdeCfB4L] = '9';
                        jdeCfB4L = jdeCfB4L - (121 - 120);
                    }
                    hCbp06X[jdeCfB4L]--;
                }
            }
            else
                YLs7JpORvmnw[KHxu94BpiRSs][tFqW2j5fe] = hCbp06X[tFqW2j5fe];
        }
    }
    for (KHxu94BpiRSs = 0; KHxu94BpiRSs < irmdI0WsFyPn; KHxu94BpiRSs = KHxu94BpiRSs +1)
        printf ("%s\n", YLs7JpORvmnw[KHxu94BpiRSs]);
}

