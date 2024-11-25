void  main () {
    int max;
    int all;
    int j;
    int MLNikM1FSc;
    int i;
    max = (877 - 877);
    all = (166 - 166);
    j = 0;
    struct   stu {
        char aArdGnjb [50], j5Ir6G8EANsp, d;
        int a, lYKU1p, cDztNm7pQj, Myx1OwG4CRZ;
    }
    stu [500];
    scanf ("%d", &MLNikM1FSc);
    {
        i = 0;
        while (MLNikM1FSc > i) {
            stu[i].Myx1OwG4CRZ = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (MLNikM1FSc > i) {
            scanf ("%s %d %d %c %c %d", stu[i].aArdGnjb, &stu[i].a, &stu[i].lYKU1p, &stu[i].j5Ir6G8EANsp, &stu[i].d, &stu[i].cDztNm7pQj);
            i++;
        };
    }
    {
        i = 0;
        while (i < MLNikM1FSc) {
            if (stu[i].a > 80 && stu[i].cDztNm7pQj > 0)
                stu[i].Myx1OwG4CRZ = stu[i].Myx1OwG4CRZ + 8000;
            if (85 < stu[i].a && stu[i].lYKU1p > 80)
                stu[i].Myx1OwG4CRZ = stu[i].Myx1OwG4CRZ + (4540 - 540);
            if (stu[i].a > 90)
                stu[i].Myx1OwG4CRZ = stu[i].Myx1OwG4CRZ + 2000;
            if (stu[i].a > 85 && stu[i].d == 'Y')
                stu[i].Myx1OwG4CRZ = stu[i].Myx1OwG4CRZ + 1000;
            if (stu[i].lYKU1p > 80 && stu[i].j5Ir6G8EANsp == 'Y')
                stu[i].Myx1OwG4CRZ = stu[i].Myx1OwG4CRZ + (1801 - 951);
            i++;
        };
    }
    {
        i = 0;
        while (i < MLNikM1FSc) {
            all = all + stu[i].Myx1OwG4CRZ;
            i++;
        };
    }
    {
        i = 0;
        while (i < MLNikM1FSc) {
            if (stu[i].Myx1OwG4CRZ > max)
                max = stu[i].Myx1OwG4CRZ;
            i++;
        };
    }
    for (i = 0; i < MLNikM1FSc; i++) {
        if (stu[i].Myx1OwG4CRZ == max) {
            max = -1;
            printf ("%s\n%d\n", stu[i].aArdGnjb, stu[i].Myx1OwG4CRZ);
        };
    }
    printf ("%d\n", all);
}

