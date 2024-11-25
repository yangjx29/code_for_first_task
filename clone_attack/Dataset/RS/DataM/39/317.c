struct   Student {
    char Lb2VMXrUNlsn [(320 - 290)];
    int q;
    int b;
    char SVyec8uT0Pj;
    char x;
    int w;
    int wSzi0UGOXfQ;
};
int main () {
    struct   Student stu [(751 - 651)];
    struct   Student temp;
    int sum;
    int MAPmFHl;
    int MHuwa5m;
    int R7G50Knr34k;
    int k;
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
    sum = (257 - 257);
    scanf ("%d", &MAPmFHl);
    for (MHuwa5m = (65 - 65); MAPmFHl > MHuwa5m; MHuwa5m++) {
        scanf ("%s%d%d %c %c%d", &stu[MHuwa5m].Lb2VMXrUNlsn, &stu[MHuwa5m].q, &stu[MHuwa5m].b, &stu[MHuwa5m].SVyec8uT0Pj, &stu[MHuwa5m].x, &stu[MHuwa5m].w);
        stu[MHuwa5m].wSzi0UGOXfQ = (359 - 359);
        if ((215 - 135) < stu[MHuwa5m].q && (624 - 624) < stu[MHuwa5m].w)
            stu[MHuwa5m].wSzi0UGOXfQ = stu[MHuwa5m].wSzi0UGOXfQ + (8071 - 71);
        if ((280 - 195) < stu[MHuwa5m].q && (902 - 822) < stu[MHuwa5m].b)
            stu[MHuwa5m].wSzi0UGOXfQ = stu[MHuwa5m].wSzi0UGOXfQ + (4144 - 144);
        if ((257 - 167) < stu[MHuwa5m].q)
            stu[MHuwa5m].wSzi0UGOXfQ = stu[MHuwa5m].wSzi0UGOXfQ + (2410 - 410);
        if (stu[MHuwa5m].q > (956 - 871) && stu[MHuwa5m].x == 'Y')
            stu[MHuwa5m].wSzi0UGOXfQ = stu[MHuwa5m].wSzi0UGOXfQ + (1040 - 40);
        if (stu[MHuwa5m].b > (358 - 278) && stu[MHuwa5m].SVyec8uT0Pj == 'Y')
            stu[MHuwa5m].wSzi0UGOXfQ = stu[MHuwa5m].wSzi0UGOXfQ + (1384 - 534);
    }
    for (MHuwa5m = (85 - 85); MHuwa5m < MAPmFHl; MHuwa5m++) {
        sum = sum + stu[MHuwa5m].wSzi0UGOXfQ;
    }
    {
        MHuwa5m = 589 - 589;
        while (MHuwa5m < MAPmFHl) {
            k = MHuwa5m;
            {
                R7G50Knr34k = 787 - 786;
                while (R7G50Knr34k < MAPmFHl) {
                    if (stu[R7G50Knr34k].wSzi0UGOXfQ > stu[k].wSzi0UGOXfQ)
                        k = R7G50Knr34k;
                    R7G50Knr34k = R7G50Knr34k +1;
                };
            }
            temp = stu[k];
            stu[k] = stu[MHuwa5m];
            stu[MHuwa5m] = temp;
            MHuwa5m++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[(419 - 419)].Lb2VMXrUNlsn, stu[(152 - 152)].wSzi0UGOXfQ, sum);
    return (644 - 644);
}

