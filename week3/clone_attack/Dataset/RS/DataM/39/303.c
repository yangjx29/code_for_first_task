void  main () {
    char LZxs9K18R65c [(305 - 275)];
    int Q2uriQbZz [101];
    struct   stu {
        char e30LaPx [20];
        int sco1;
        int sco2;
        char a [(157 - 155)];
        char xGi42EcBq8 [2];
        int uqp9EA;
    }
    stu [(1054 - 953)];
    int YOT6v8;
    int max;
    int HxDH2wztXJe5;
    int Qh4YlZ3Cx;
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
    scanf ("%d", &YOT6v8);
    for (HxDH2wztXJe5 = (362 - 362); YOT6v8 > HxDH2wztXJe5; HxDH2wztXJe5++) {
        scanf ("%s", stu[HxDH2wztXJe5].e30LaPx);
        scanf ("%d", &stu[HxDH2wztXJe5].sco1);
        scanf ("%d", &stu[HxDH2wztXJe5].sco2);
        scanf ("%s", stu[HxDH2wztXJe5].a);
        scanf ("%s", stu[HxDH2wztXJe5].xGi42EcBq8);
        scanf ("%d", &stu[HxDH2wztXJe5].uqp9EA);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Q2uriQbZz[HxDH2wztXJe5] = (444 - 444);
        if ((751 - 671) < stu[HxDH2wztXJe5].sco1 && stu[HxDH2wztXJe5].uqp9EA >= 1)
            Q2uriQbZz[HxDH2wztXJe5] = Q2uriQbZz[HxDH2wztXJe5] + (8589 - 589);
        if (stu[HxDH2wztXJe5].sco1 > 85 && (573 - 493) < stu[HxDH2wztXJe5].sco2)
            Q2uriQbZz[HxDH2wztXJe5] = Q2uriQbZz[HxDH2wztXJe5] + 4000;
        if (stu[HxDH2wztXJe5].sco1 > (895 - 805))
            Q2uriQbZz[HxDH2wztXJe5] = Q2uriQbZz[HxDH2wztXJe5] + 2000;
        if (stu[HxDH2wztXJe5].sco1 > 85 && stu[HxDH2wztXJe5].xGi42EcBq8[(110 - 110)] == 'Y')
            Q2uriQbZz[HxDH2wztXJe5] = Q2uriQbZz[HxDH2wztXJe5] + (1978 - 978);
        if (stu[HxDH2wztXJe5].sco2 > 80 && stu[HxDH2wztXJe5].a[0] == 'Y')
            Q2uriQbZz[HxDH2wztXJe5] = Q2uriQbZz[HxDH2wztXJe5] + 850;
    }
    max = Q2uriQbZz[0];
    Qh4YlZ3Cx = Q2uriQbZz[0];
    strcpy (LZxs9K18R65c, stu[0].e30LaPx);
    {
        HxDH2wztXJe5 = 1;
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
        while (HxDH2wztXJe5 < YOT6v8) {
            if (Q2uriQbZz[HxDH2wztXJe5] > max) {
                max = Q2uriQbZz[HxDH2wztXJe5];
                strcpy (LZxs9K18R65c, stu[HxDH2wztXJe5].e30LaPx);
            }
            Qh4YlZ3Cx = Qh4YlZ3Cx +Q2uriQbZz[HxDH2wztXJe5];
            HxDH2wztXJe5++;
        };
    }
    printf ("%s\n", LZxs9K18R65c);
    printf ("%d\n", max);
    printf ("%d\n", Qh4YlZ3Cx);
}

