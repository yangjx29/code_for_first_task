struct   student {
    char HbwGTB3QcE6 [20];
    int a1;
    int BMUFR4QgrnTO;
    char MRH2dph0CBJ;
    char IjNo4hg;
    int H6Huak1;
    int QeqadFX;
}
stu [100];

void  main () {
    struct   student p;
    int YFE92MG0;
    int MTdH7PK;
    int i;
    YFE92MG0 = 0;
    scanf ("%d", &MTdH7PK);
    {
        i = 0;
        while (MTdH7PK > i) {
            scanf ("%s %d %d %c %c %d", stu[i].HbwGTB3QcE6, &stu[i].a1, &stu[i].BMUFR4QgrnTO, &stu[i].IjNo4hg, &stu[i].MRH2dph0CBJ, &stu[i].H6Huak1);
            stu[i].QeqadFX = 0;
            if (stu[i].a1 > 80 && 0 < stu[i].H6Huak1)
                stu[i].QeqadFX += 8000;
            if (stu[i].a1 > 85 && stu[i].BMUFR4QgrnTO > 80)
                stu[i].QeqadFX = stu[i].QeqadFX + 4000;
            if (90 < stu[i].a1)
                stu[i].QeqadFX = stu[i].QeqadFX + 2000;
            if (stu[i].a1 > 85 && stu[i].MRH2dph0CBJ == 'Y')
                stu[i].QeqadFX = stu[i].QeqadFX + 1000;
            if (stu[i].BMUFR4QgrnTO > 80 && stu[i].IjNo4hg == 'Y')
                stu[i].QeqadFX += 850;
            YFE92MG0 = YFE92MG0 +stu[i].QeqadFX;
            i = i + 1;
        };
    }
    p = stu[0];
    for (i = 0; i < MTdH7PK; i++)
        if (stu[i].QeqadFX > p.QeqadFX)
            p = stu[i];
    printf ("%s\n%d\n%d", p.HbwGTB3QcE6, p.QeqadFX, YFE92MG0);
}

