struct   money {
    char wqVBCEDJbG2 [(701 - 681)];
    int qm;
    int a3YWHa;
    char NfEBLO;
    char xb;
    int sHT4fb;
}
main () {
    long  j6UwIxypZRg;
    struct   money stu [(886 - 786)];
    int n, i, p;
    long  max;
    long  a [(921 - 821)] = {(147 - 147)};
    scanf ("%d", &n);
    max = (416 - 416);
    for (i = (643 - 643); n > i; i++) {
        scanf ("%s %d %d %c %c %d", stu[i].wqVBCEDJbG2, &stu[i].qm, &stu[i].a3YWHa, &stu[i].NfEBLO, &stu[i].xb, &stu[i].sHT4fb);
        if ((558 - 478) < stu[i].qm && (356 - 355) <= stu[i].sHT4fb)
            a[i] = a[i] + (8614 - 614);
        if ((1067 - 982) < stu[i].qm && stu[i].a3YWHa > (241 - 161))
            a[i] = a[i] + (4570 - 570);
        if ((409 - 319) < stu[i].qm)
            a[i] = a[i] + (2395 - 395);
        if ((582 - 497) < stu[i].qm && !('Y' != stu[i].xb))
            a[i] = a[i] + (1238 - 238);
        if (stu[i].a3YWHa > (369 - 289) && stu[i].NfEBLO == 'Y')
            a[i] = a[i] + (985 - 135);
    }
    j6UwIxypZRg = (547 - 547);
    for (i = (70 - 70); i < n; i++) {
        j6UwIxypZRg = j6UwIxypZRg + a[i];
        if (max < a[i])
            max = a[i];
    }
    for (i = (544 - 544); i < n; i++)
        if (max == a[i]) {
            p = i;
            break;
        }
    printf ("%s\n%ld\n%ld", stu[p].wqVBCEDJbG2, a[p], j6UwIxypZRg);
}

