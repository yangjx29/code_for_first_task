void  main () {
    struct   student {
        int i;
        int oaFp7S46;
        int cbF5PZROKt;
        int m;
        struct   student *nKvgQUBw;
    };
    int n, iawVPCl0mbH6, k;
    struct   student *PBbSVRCuhv, *p1, *Ga1GiYCQ47, *p0;
    p1 = (struct   student *) malloc (LEN);
    Ga1GiYCQ47 = (struct   student *) malloc (LEN);
    scanf ("%d", &n);
    scanf ("%d%d%d", &p1->i, &p1->oaFp7S46, &p1->cbF5PZROKt);
    p1->m = p1->oaFp7S46 + p1->cbF5PZROKt;
    scanf ("%d%d%d", &Ga1GiYCQ47->i, &Ga1GiYCQ47->oaFp7S46, &Ga1GiYCQ47->cbF5PZROKt);
    Ga1GiYCQ47->m = Ga1GiYCQ47->oaFp7S46 + Ga1GiYCQ47->cbF5PZROKt;
    if (p1->m > Ga1GiYCQ47->m) {
        PBbSVRCuhv = p1;
        p1->nKvgQUBw = Ga1GiYCQ47;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Ga1GiYCQ47->nKvgQUBw = 0;
    }
    else {
        p0 = p1;
        p1 = Ga1GiYCQ47;
        PBbSVRCuhv = p1;
        Ga1GiYCQ47 = p0;
        p1->nKvgQUBw = Ga1GiYCQ47;
        Ga1GiYCQ47->nKvgQUBw = 0;
    }
    p0 = (struct   student *) malloc (LEN);
    scanf ("%d%d%d", &p0->i, &p0->oaFp7S46, &p0->cbF5PZROKt);
    p0->m = p0->oaFp7S46 + p0->cbF5PZROKt;
    for (; (p0->m <= p1->m) && (p1->nKvgQUBw != 0);) {
        Ga1GiYCQ47 = p1;
        p1 = p1->nKvgQUBw;
    }
    if (p0->m > p1->m) {
        if (PBbSVRCuhv == p1)
            PBbSVRCuhv = p0;
        else
            Ga1GiYCQ47->nKvgQUBw = p0;
        p0->nKvgQUBw = p1;
    }
    else {
        p1->nKvgQUBw = p0;
        p0->nKvgQUBw = 0;
    }
    {
        iawVPCl0mbH6 = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (iawVPCl0mbH6 < n) {
            p0 = (struct   student *) malloc (LEN);
            scanf ("%d%d%d", &p0->i, &p0->oaFp7S46, &p0->cbF5PZROKt);
            p0->m = p0->oaFp7S46 + p0->cbF5PZROKt;
            {
                p1 = PBbSVRCuhv;
                k = 0;
                while (k <= 2) {
                    if (p0->m > p1->m)
                        break;
                    k++;
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
                    p1 = p1->nKvgQUBw;
                };
            }
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
            if (k == 3)
                continue;
            iawVPCl0mbH6 = iawVPCl0mbH6 + 1;
            p1 = Ga1GiYCQ47 = PBbSVRCuhv;
            while (p0->m <= p1->m) {
                Ga1GiYCQ47 = p1;
                p1 = p1->nKvgQUBw;
            }
            if (p0->m > p1->m) {
                if (PBbSVRCuhv == p1)
                    PBbSVRCuhv = p0;
                else
                    Ga1GiYCQ47->nKvgQUBw = p0;
                p0->nKvgQUBw = p1;
            }
            else {
                p1->nKvgQUBw = p0;
                p0->nKvgQUBw = 0;
            };
        };
    }
    {
        iawVPCl0mbH6 = 0;
        p1 = PBbSVRCuhv;
        while (iawVPCl0mbH6 < 3) {
            iawVPCl0mbH6++;
            printf ("%d %d\n", p1->i, p1->m);
            p1 = p1->nKvgQUBw;
        };
    };
}

