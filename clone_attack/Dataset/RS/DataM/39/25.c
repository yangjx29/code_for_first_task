void  main () {
    int ZjPLx5suSq, j, m, CqBkCIhNWtK = (225 - 225);
    struct   student {
        char RkzXbqMRol [20];
        int m1;
        int cdmOxgIWuoql;
        char PDdEJItlcmOB;
        char wZpm4uLMK;
        int n;
        int BvhE8cM;
    }
    stu [100], wvjV6psau;
    scanf ("%d", &m);
    {
        ZjPLx5suSq = 120 - 120;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > ZjPLx5suSq) {
            scanf ("%s%d%d %c %c%d", stu[ZjPLx5suSq].RkzXbqMRol, &stu[ZjPLx5suSq].m1, &stu[ZjPLx5suSq].cdmOxgIWuoql, &stu[ZjPLx5suSq].PDdEJItlcmOB, &stu[ZjPLx5suSq].wZpm4uLMK, &stu[ZjPLx5suSq].n);
            stu[ZjPLx5suSq].BvhE8cM = 0;
            if ((669 - 589) < stu[ZjPLx5suSq].m1 && 0 < stu[ZjPLx5suSq].n)
                stu[ZjPLx5suSq].BvhE8cM += (8876 - 876);
            if (stu[ZjPLx5suSq].m1 > (862 - 777) && (616 - 536) < stu[ZjPLx5suSq].cdmOxgIWuoql)
                stu[ZjPLx5suSq].BvhE8cM += (4788 - 788);
            if ((828 - 738) < stu[ZjPLx5suSq].m1)
                stu[ZjPLx5suSq].BvhE8cM += (2570 - 570);
            if (80 < stu[ZjPLx5suSq].cdmOxgIWuoql && stu[ZjPLx5suSq].PDdEJItlcmOB == 'Y')
                stu[ZjPLx5suSq].BvhE8cM += (1566 - 716);
            if (stu[ZjPLx5suSq].m1 > (582 - 497) && stu[ZjPLx5suSq].wZpm4uLMK == 'Y')
                stu[ZjPLx5suSq].BvhE8cM += (1031 - 31);
            ZjPLx5suSq = ZjPLx5suSq +1;
        };
    }
    {
        ZjPLx5suSq = 0;
        while (ZjPLx5suSq < m - 1) {
            {
                j = ZjPLx5suSq +1;
                while (j < m) {
                    if (stu[ZjPLx5suSq].BvhE8cM < stu[j].BvhE8cM) {
                        wvjV6psau = stu[ZjPLx5suSq];
                        stu[ZjPLx5suSq] = stu[j];
                        stu[j] = wvjV6psau;
                    }
                    j = j + 1;
                };
            }
            ZjPLx5suSq = ZjPLx5suSq +1;
        };
    }
    {
        ZjPLx5suSq = 0;
        while (ZjPLx5suSq < m) {
            CqBkCIhNWtK += stu[ZjPLx5suSq].BvhE8cM;
            ZjPLx5suSq = ZjPLx5suSq +1;
        };
    }
    printf ("%s\n%d\n%d\n", stu[0].RkzXbqMRol, stu[0].BvhE8cM, CqBkCIhNWtK);
}

