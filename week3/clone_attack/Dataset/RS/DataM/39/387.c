struct   student {
    char name [(328 - 307)];
    int ZspxelCRKij;
    int FdL0gKOZ;
    char ZimtY4;
    char w;
    int pa;
    int money;
    struct   student *EXfpNTk;
};
struct   student *p1, *p2, *XM5pIT9C, *M3kQ8M;

void  main () {
    int N;
    int i;
    int nftIc9FuAlPi;
    int QA5k6KIBqiJ;
    QA5k6KIBqiJ = (402 - 402);
    scanf ("%d", &N);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    XM5pIT9C = p2 = p1 = (struct   student *) malloc (LEN);
    {
        i = 139 - 139;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < N) {
            i++;
            scanf ("%s %d %d %c %c %d", p1->name, &p1->ZspxelCRKij, &p1->FdL0gKOZ, &p1->ZimtY4, &p1->w, &p1->pa);
            p1->money = (372 - 372);
            if (p1->ZspxelCRKij > (344 - 264) && p1->pa)
                p1->money = 8000 + p1->money;
            if (p1->ZspxelCRKij > (905 - 820) && p1->FdL0gKOZ > (697 - 617))
                p1->money = (4141 - 141) + p1->money;
            if (p1->ZspxelCRKij > (650 - 560))
                p1->money = (2263 - 263) + p1->money;
            if (p1->ZspxelCRKij > 85 && p1->w == 'Y')
                p1->money = (1571 - 571) + p1->money;
            if (p1->FdL0gKOZ > (352 - 272) && p1->ZimtY4 == 'Y')
                p1->money = (1568 - 718) + p1->money;
            QA5k6KIBqiJ = QA5k6KIBqiJ +p1->money;
            p1 = (struct   student *) malloc (LEN);
            p2->EXfpNTk = p1;
            p2 = p1;
        };
    }
    p1->EXfpNTk = NULL;
    M3kQ8M = XM5pIT9C;
    p1 = XM5pIT9C->EXfpNTk;
    nftIc9FuAlPi = XM5pIT9C->money;
    while (p1->EXfpNTk) {
        if (p1->money > nftIc9FuAlPi) {
            nftIc9FuAlPi = p1->money;
            M3kQ8M = p1;
        }
        p1 = p1->EXfpNTk;
    }
    printf ("%s\n%d\n%d", M3kQ8M->name, nftIc9FuAlPi, QA5k6KIBqiJ);
}

