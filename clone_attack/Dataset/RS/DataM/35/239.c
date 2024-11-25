main () {
    int sOJ7wSCf;
    int KzUG42S [(589 - 489)] [100];
    int RNhkB9 [100] = {0};
    int n;
    int rvm8NbYOB;
    int flag [100] = {(323 - 322)};
    int lTFMdIlB;
    int m6y2uegV;
    sOJ7wSCf = 0;
    scanf ("%d,%d", &n, &rvm8NbYOB);
    {
        lTFMdIlB = 0;
        while (n > lTFMdIlB) {
            {
                m6y2uegV = 0;
                while (m6y2uegV < rvm8NbYOB) {
                    scanf ("%d", &KzUG42S[lTFMdIlB][m6y2uegV]);
                    if (sOJ7wSCf < KzUG42S[lTFMdIlB][m6y2uegV]) {
                        RNhkB9[lTFMdIlB] = m6y2uegV;
                        sOJ7wSCf = KzUG42S[lTFMdIlB][m6y2uegV];
                    }
                    m6y2uegV++;
                };
            }
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
            lTFMdIlB = lTFMdIlB + 1;
        };
    }
    sOJ7wSCf = 0;
    {
        m6y2uegV = 0;
        while (n > m6y2uegV) {
            {
                lTFMdIlB = 0;
                while (n > lTFMdIlB) {
                    if (KzUG42S[m6y2uegV][RNhkB9[m6y2uegV]] > KzUG42S[lTFMdIlB][RNhkB9[m6y2uegV]])
                        flag[m6y2uegV] = 0;
                    lTFMdIlB++;
                };
            }
            if (!(1 != flag[m6y2uegV]))
                printf ("%d+%d", m6y2uegV, RNhkB9[m6y2uegV]);
            m6y2uegV++;
        };
    }
    {
        m6y2uegV = 0;
        while (n > m6y2uegV) {
            sOJ7wSCf += flag[m6y2uegV];
            m6y2uegV++;
        };
    }
    if (sOJ7wSCf == 0)
        ;
}

