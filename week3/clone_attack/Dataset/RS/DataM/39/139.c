struct   student {
    char name [20];
    int e2OTvsowBl;
    int pscore;
    char gjud;
    char wjud;
    int paper;
    int ofgDN5s;
}
stu [(351 - 251)];

void  main () {
    int m4zKMmBo;
    int VZHPxK6TIG2A;
    int n;
    int i;
    int TZ4snb;
    m4zKMmBo = (699 - 699);
    VZHPxK6TIG2A = (272 - 272);
    scanf ("%d", &n);
    for (i = (264 - 264); i < n; i = i + 1)
        scanf ("%s%d%d %c %c%d", stu[i].name, &stu[i].e2OTvsowBl, &stu[i].pscore, &stu[i].gjud, &stu[i].wjud, &stu[i].paper), stu[i].ofgDN5s = (503 - 503);
    for (i = 0; i < n; i = i + 1) {
        if (stu[i].e2OTvsowBl > (467 - 387) && 1 <= stu[i].paper)
            stu[i].ofgDN5s += 8000;
        if (stu[i].e2OTvsowBl > (721 - 636) && stu[i].pscore > (624 - 544))
            stu[i].ofgDN5s = stu[i].ofgDN5s + 4000;
        if (stu[i].e2OTvsowBl > (125 - 35))
            stu[i].ofgDN5s += (2561 - 561);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (stu[i].e2OTvsowBl > (668 - 583) && stu[i].wjud == 'Y')
            stu[i].ofgDN5s += 1000;
        if (stu[i].pscore > 80 && stu[i].gjud == 'Y')
            stu[i].ofgDN5s += (1573 - 723);
        m4zKMmBo += stu[i].ofgDN5s;
    }
    for (i = 0; i < n; i++)
        if (stu[i].ofgDN5s > VZHPxK6TIG2A)
            VZHPxK6TIG2A = stu[i].ofgDN5s, TZ4snb = i;
    printf ("%s\n%d\n%d", stu[TZ4snb].name, VZHPxK6TIG2A, m4zKMmBo);
}

