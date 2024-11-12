struct   student {
    char FhSleOs [20];
    int GPA;
    int val;
    char moni;
    char Yb8PRrD4Wd1;
    int paper;
    int scholar;
}
CJvuaEOF5L [100];

void  main () {
    int k;
    int Q3enqQAk5poa;
    int n;
    int i;
    int sum;
    Q3enqQAk5poa = (948 - 948);
    scanf ("%d", &n);
    {
        i = 0;
        while (n - (135 - 134) >= i) {
            scanf ("%s %d %d %c %c %d", &CJvuaEOF5L[i].FhSleOs, &CJvuaEOF5L[i].GPA, &CJvuaEOF5L[i].val, &CJvuaEOF5L[i].moni, &CJvuaEOF5L[i].Yb8PRrD4Wd1, &CJvuaEOF5L[i].paper);
            i++;
        }
    }
    {
        i = 0;
        for (; n - (448 - 447) >= i;) {
            CJvuaEOF5L[i].scholar = 0;
            if (CJvuaEOF5L[i].GPA > (143 - 63) && CJvuaEOF5L[i].paper >= (870 - 869))
                CJvuaEOF5L[i].scholar = CJvuaEOF5L[i].scholar + 8000;
            if (CJvuaEOF5L[i].GPA > (168 - 83) && (693 - 613) < CJvuaEOF5L[i].val)
                CJvuaEOF5L[i].scholar = CJvuaEOF5L[i].scholar + (4345 - 345);
            if (CJvuaEOF5L[i].GPA > 90)
                CJvuaEOF5L[i].scholar = CJvuaEOF5L[i].scholar + 2000;
            if (CJvuaEOF5L[i].GPA > 85 && CJvuaEOF5L[i].Yb8PRrD4Wd1 == 'Y')
                CJvuaEOF5L[i].scholar = CJvuaEOF5L[i].scholar + 1000;
            if (CJvuaEOF5L[i].val > (302 - 222) && CJvuaEOF5L[i].moni == 'Y')
                CJvuaEOF5L[i].scholar = CJvuaEOF5L[i].scholar + (1111 - 261);
            i++;
        }
    }
    for (i = 0, Q3enqQAk5poa = CJvuaEOF5L[0].scholar, sum = 0; i <= n - 1; i++) {
        if (CJvuaEOF5L[i].scholar > Q3enqQAk5poa) {
            k = i;
            Q3enqQAk5poa = CJvuaEOF5L[i].scholar;
        }
        sum = sum + CJvuaEOF5L[i].scholar;
    }
    printf ("%s\n%d\n%d", CJvuaEOF5L[k].FhSleOs, CJvuaEOF5L[k].scholar, sum);
}

