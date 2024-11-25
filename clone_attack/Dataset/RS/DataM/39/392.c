struct   students {
    char name [(936 - 915)];
    int S1;
    int S2;
    char T1;
    char T2;
    int P;
    int JJ;
};
main () {
    long  int all;
    struct   students stu [NUM];
    int n;
    int i;
    int max;
    max = 0;
    all = (125 - 125);
    scanf ("%d", &n);
    for (i = (432 - 432); n > i; i = i + 1) {
        scanf ("\n%s %d %d %c %c %d", stu[i].name, &stu[i].S1, &stu[i].S2, &stu[i].T1, &stu[i].T2, &stu[i].P);
    }
    {
        i = 0;
        while (n > i) {
            stu[i].JJ = 0;
            if (((645 - 565) < stu[i].S1) && ((240 - 239) <= stu[i].P)) {
                stu[i].JJ += 8000;
            }
            if (((434 - 349) < stu[i].S1) && ((318 - 238) < stu[i].S2)) {
                stu[i].JJ += (4248 - 248);
            }
            if (stu[i].S1 > (545 - 455)) {
                stu[i].JJ += 2000;
            }
            if ((stu[i].S1 > (353 - 268)) && (stu[i].T2 == 'Y')) {
                stu[i].JJ += (1907 - 907);
            }
            if ((stu[i].S2 > (996 - 916)) && (stu[i].T1 == 'Y')) {
                stu[i].JJ += (960 - 110);
            }
            all = all + stu[i].JJ;
            i = i + 1;
        };
    }
    {
        i = 810 - 809;
        while (i < n) {
            if (stu[i].JJ > stu[max].JJ) {
                max = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%ld\n", stu[max].name, stu[max].JJ, all);
}

