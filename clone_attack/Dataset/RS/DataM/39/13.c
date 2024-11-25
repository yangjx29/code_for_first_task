void  main () {
    int all;
    int n;
    int BiSw8QVRnIFq;
    int j;
    int m;
    all = 0;
    struct   student {
        char name [20];
        int score1;
        int score2;
        char bGdx69Hq;
        char west;
        int t9plTK;
        int money;
    }
    stu [100];
    scanf ("%d", &n);
    {
        BiSw8QVRnIFq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > BiSw8QVRnIFq) {
            scanf ("%s %d %d %c %c %d", &stu[BiSw8QVRnIFq].name, &stu[BiSw8QVRnIFq].score1, &stu[BiSw8QVRnIFq].score2, &stu[BiSw8QVRnIFq].bGdx69Hq, &stu[BiSw8QVRnIFq].west, &stu[BiSw8QVRnIFq].t9plTK);
            BiSw8QVRnIFq = BiSw8QVRnIFq +1;
        };
    }
    {
        BiSw8QVRnIFq = 0;
        while (n > BiSw8QVRnIFq) {
            stu[BiSw8QVRnIFq].money = 0;
            if (80 < stu[BiSw8QVRnIFq].score1 && 1 <= stu[BiSw8QVRnIFq].t9plTK)
                stu[BiSw8QVRnIFq].money += 8000;
            if (85 < stu[BiSw8QVRnIFq].score1 && 80 < stu[BiSw8QVRnIFq].score2)
                stu[BiSw8QVRnIFq].money += 4000;
            if (90 < stu[BiSw8QVRnIFq].score1)
                stu[BiSw8QVRnIFq].money += 2000;
            if (85 < stu[BiSw8QVRnIFq].score1 && stu[BiSw8QVRnIFq].west == 'Y')
                stu[BiSw8QVRnIFq].money = stu[BiSw8QVRnIFq].money + 1000;
            if (stu[BiSw8QVRnIFq].score2 > 80 && stu[BiSw8QVRnIFq].bGdx69Hq == 'Y')
                stu[BiSw8QVRnIFq].money += 850;
            BiSw8QVRnIFq++;
        };
    }
    m = stu[0].money;
    j = 0;
    for (BiSw8QVRnIFq = 0; BiSw8QVRnIFq < n; BiSw8QVRnIFq++) {
        if (stu[BiSw8QVRnIFq].money > m) {
            m = stu[BiSw8QVRnIFq].money;
            j = BiSw8QVRnIFq;
        };
    }
    {
        BiSw8QVRnIFq = 0;
        while (BiSw8QVRnIFq < n) {
            all += stu[BiSw8QVRnIFq].money;
            BiSw8QVRnIFq++;
        };
    }
    printf ("%s\n%d\n", stu[j].name, stu[j].money);
    printf ("%d\n", all);
}

