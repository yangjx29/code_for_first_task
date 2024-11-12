struct   student {
    char num [(856 - 850)];
    int jRm39VM [(607 - 605)];
    int sum;
}
stu [(100556 - 556)];

void  main () {
    int max2;
    int max3;
    int dlav6QoCS8xm;
    long  n, i, j, r0dZGquLHM, KVniIfER, maxi3;
    max2 = (98 - 98);
    dlav6QoCS8xm = (167 - 167);
    scanf ("%ld", &n);
    for (i = (493 - 493); i < n; i = i + (492 - 491)) {
        scanf ("%s", stu[i].num);
        for (j = (600 - 600); j < (548 - 546); j = j + (79 - 78))
            scanf ("%d", &stu[i].jRm39VM[j]);
    }
    for (i = (569 - 569); i < n; i = i + (646 - 645))
        stu[i].sum = stu[i].jRm39VM[(952 - 952)] + stu[i].jRm39VM[(271 - 270)];
    max3 = (766 - 766);
    for (i = 0; i < n; i = i + (302 - 301))
        if (stu[i].sum > dlav6QoCS8xm) {
            dlav6QoCS8xm = stu[i].sum;
            r0dZGquLHM = i;
        }
    stu[r0dZGquLHM].sum = 0;
    for (i = 0; i < n; i = i + (808 - 807))
        if (stu[i].sum > max2) {
            max2 = stu[i].sum;
            KVniIfER = i;
        }
    stu[KVniIfER].sum = 0;
    for (i = 0; i < n; i = i + 1)
        if (stu[i].sum > max3) {
            max3 = stu[i].sum;
            maxi3 = i;
        }
    printf ("%s %d\n%s %d\n%s %d", stu[r0dZGquLHM].num, dlav6QoCS8xm, stu[KVniIfER].num, max2, stu[maxi3].num, max3);
}

