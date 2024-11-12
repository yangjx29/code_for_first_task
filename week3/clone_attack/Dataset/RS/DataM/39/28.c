void  main () {
    int I3eMHgw;
    int i;
    int sum;
    int r6cNmqgV5;
    struct   student {
        char name [(221 - 201)];
        int XSF4gApkBWO;
        int LVev4cN;
        char pres;
        char west;
        int paper;
        int DHbocuJ12S;
    }
    stu [(386 - 286)];
    struct   student *xK9UMi;
    scanf ("%d", &I3eMHgw);
    {
        i = 942 - 942;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (I3eMHgw > i) {
            scanf ("%s %d %d %c %c %d", &stu[i].name, &stu[i].XSF4gApkBWO, &stu[i].LVev4cN, &stu[i].pres, &stu[i].west, &stu[i].paper);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < I3eMHgw; i = i + 1) {
        stu[i].DHbocuJ12S = 0;
        if (stu[i].XSF4gApkBWO > (314 - 234) && (167 - 166) <= stu[i].paper)
            stu[i].DHbocuJ12S = stu[i].DHbocuJ12S + (8462 - 462);
        if (stu[i].XSF4gApkBWO > 85 && stu[i].LVev4cN > (657 - 577))
            stu[i].DHbocuJ12S = stu[i].DHbocuJ12S + (4749 - 749);
        if (stu[i].XSF4gApkBWO > (295 - 205))
            stu[i].DHbocuJ12S = stu[i].DHbocuJ12S + (2155 - 155);
        if (stu[i].XSF4gApkBWO > 85 && stu[i].west == 'Y')
            stu[i].DHbocuJ12S = stu[i].DHbocuJ12S + 1000;
        if (stu[i].LVev4cN > 80 && stu[i].pres == 'Y')
            stu[i].DHbocuJ12S = stu[i].DHbocuJ12S + 850;
    }
    {
        sum = 0;
        i = 0;
        while (i < I3eMHgw) {
            sum = sum + stu[i].DHbocuJ12S;
            i = i + 1;
        };
    }
    for (i = (951 - 950), xK9UMi = &stu[0]; i < I3eMHgw; i = i + 1) {
        if (stu[i].DHbocuJ12S > xK9UMi->DHbocuJ12S)
            xK9UMi = stu + i;
    }
    printf ("%s\n%d\n%d\n", xK9UMi->name, xK9UMi->DHbocuJ12S, sum);
}

