void  main () {
    int *p;
    int *YYdFs2;
    int BhjV61eB, OFsdzucj, i;
    scanf ("%d %d", &BhjV61eB, &OFsdzucj);
    YYdFs2 = (int *) calloc (10001, sizeof (int));
    {
        p = YYdFs2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YYdFs2 +BhjV61eB*OFsdzucj > p) {
            scanf ("%d", p);
            p++;
        };
    }
    if (OFsdzucj == 1) {
        p = YYdFs2;
        while (p < YYdFs2 +BhjV61eB*OFsdzucj) {
            printf ("%d\n", *p);
            p++;
        };
    }
    else {
        {
            i = 0;
            while (i < OFsdzucj) {
                {
                    p = YYdFs2 +i;
                    while ((p <= YYdFs2 +i + (OFsdzucj -1) * i) && (p < YYdFs2 +BhjV61eB*OFsdzucj)) {
                        printf ("%d\n", *p);
                        p = p + OFsdzucj -1;
                    };
                }
                i++;
            };
        }
        {
            i = 2;
            while (i <= BhjV61eB) {
                {
                    p = YYdFs2 +OFsdzucj*i - 1;
                    while ((p <= YYdFs2 +OFsdzucj*i - 1 + (OFsdzucj -1) * (OFsdzucj -1)) && (p < YYdFs2 +BhjV61eB*OFsdzucj)) {
                        printf ("%d\n", *p);
                        p = p + OFsdzucj -1;
                    };
                }
                i++;
            };
        };
    };
}

