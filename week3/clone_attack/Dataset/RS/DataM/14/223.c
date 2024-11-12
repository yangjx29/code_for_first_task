struct   student {
    long  guKopxQbMn;
    int scorec;
    int e7dVcShRo2qe;
    struct   student *ZCHrxLBsER9;
};
struct   student *hKdQM6moCXnG (long  n) {
    long  jZWi3EcanrMY = n - (118 - 117);
    struct   student *RPTi3s, *p1, *p2;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%ld %d %d", &p1->guKopxQbMn, &p1->scorec, &p1->e7dVcShRo2qe);
    p1->ZCHrxLBsER9 = NULL;
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
    RPTi3s = p1;
    p2 = p1;
    do {
        jZWi3EcanrMY = jZWi3EcanrMY - (343 - 342);
        p1 = (struct   student *) malloc (LEN);
        scanf ("%ld %d %d", &p1->guKopxQbMn, &p1->scorec, &p1->e7dVcShRo2qe);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->ZCHrxLBsER9 = NULL;
        p2->ZCHrxLBsER9 = p1;
        p2 = p1;
    }
    while (jZWi3EcanrMY);
    return (RPTi3s);
}

void  main () {
    int IFqsrOzv;
    long  n, iinOToHVCF = -(71 - 70), k2 = -(146 - 145), UKQ9osBVYvF = -(727 - 726), i, j;
    struct   student *RPTi3s, *ZXfVkKCZY1, *q, lw3gDA6V7S, stu2, stu3;
    scanf ("%ld", &n);
    RPTi3s = hKdQM6moCXnG (n);
    {
        i = 663 - 663;
        ZXfVkKCZY1 = RPTi3s;
        while (ZXfVkKCZY1 != NULL) {
            IFqsrOzv = (475 - 475);
            {
                j = 0;
                q = RPTi3s;
                while (q != NULL) {
                    if ((q->scorec + q->e7dVcShRo2qe) > (ZXfVkKCZY1->scorec + ZXfVkKCZY1->e7dVcShRo2qe) || ((!((ZXfVkKCZY1->scorec + ZXfVkKCZY1->e7dVcShRo2qe) != (q->scorec + q->e7dVcShRo2qe))) && j < i)) {
                        IFqsrOzv = IFqsrOzv +(61 - 60);
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
                        if ((577 - 574) < IFqsrOzv)
                            break;
                    }
                    j++;
                    q = q->ZCHrxLBsER9;
                };
            }
            if (IFqsrOzv == 0) {
                lw3gDA6V7S.guKopxQbMn = ZXfVkKCZY1->guKopxQbMn;
                lw3gDA6V7S.scorec = ZXfVkKCZY1->scorec;
                lw3gDA6V7S.e7dVcShRo2qe = ZXfVkKCZY1->e7dVcShRo2qe;
                iinOToHVCF = i;
            }
            if (IFqsrOzv == 1) {
                stu2.guKopxQbMn = ZXfVkKCZY1->guKopxQbMn;
                k2 = i;
                stu2.scorec = ZXfVkKCZY1->scorec;
                stu2.e7dVcShRo2qe = ZXfVkKCZY1->e7dVcShRo2qe;
            }
            if (IFqsrOzv == 2) {
                stu3.guKopxQbMn = ZXfVkKCZY1->guKopxQbMn;
                stu3.scorec = ZXfVkKCZY1->scorec;
                stu3.e7dVcShRo2qe = ZXfVkKCZY1->e7dVcShRo2qe;
                UKQ9osBVYvF = i;
            }
            if (iinOToHVCF != -1 && k2 != -1 && UKQ9osBVYvF != -1)
                break;
            i++;
            ZXfVkKCZY1 = ZXfVkKCZY1->ZCHrxLBsER9;
        };
    }
    printf ("%ld %d\n", lw3gDA6V7S.guKopxQbMn, lw3gDA6V7S.scorec + lw3gDA6V7S.e7dVcShRo2qe);
    printf ("%ld %d\n", stu2.guKopxQbMn, stu2.scorec + stu2.e7dVcShRo2qe);
    printf ("%ld %d", stu3.guKopxQbMn, stu3.scorec + stu3.e7dVcShRo2qe);
}

