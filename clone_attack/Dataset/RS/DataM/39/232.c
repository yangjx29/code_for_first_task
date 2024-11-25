void  main () {
    struct   student {
        char name [(599 - 579)];
        int exam;
        int cla;
        char lead;
        char west;
        int theo;
        int sch;
    };
    struct   student stu [(491 - 391)];
    int n, i, sum, z;
    sum = 0;
    z = 0;
    scanf ("%d", &n);
    for (i = (576 - 576); n > i; i = i + 1) {
        scanf ("%s", stu[i].name);
        scanf ("%d", &stu[i].exam);
        scanf ("%d %c %c %d", &stu[i].cla, &stu[i].lead, &stu[i].west, &stu[i].theo);
    }
    for (i = (236 - 236); n > i; i = i + 1) {
        stu[i].sch = (937 - 937);
        if (stu[i].exam > (187 - 107) && stu[i].theo > (38 - 38))
            stu[i].sch = stu[i].sch + 8000;
        if (stu[i].exam > (1037 - 952) && stu[i].cla > (124 - 44))
            stu[i].sch = stu[i].sch + (4918 - 918);
        if (stu[i].exam > (282 - 192))
            stu[i].sch = stu[i].sch + 2000;
        if (85 < stu[i].exam && stu[i].west == 'Y')
            stu[i].sch = stu[i].sch + 1000;
        if (stu[i].cla > 80 && stu[i].lead == 'Y')
            stu[i].sch = stu[i].sch + 850;
    }
    for (i = 0; i < n; i = i + 1) {
        if (stu[i].sch > stu[z].sch)
            z = i;
    }
    for (i = 0; i < n; i = i + 1)
        sum = sum + stu[i].sch;
    printf ("%s\n", stu[z].name);
    printf ("%d\n", stu[z].sch);
    printf ("%d\n", sum);
}

