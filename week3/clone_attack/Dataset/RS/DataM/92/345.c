int main () {
    int rJ3pr5biO;
    int i;
    int BmXVnwKjhdy;
    int XpkXSE;
    int r;
    rJ3pr5biO = (905 - 904);
    int wnzXTI9yBo [1000];
    int Q3GCe5xPo [1000];
    while (rJ3pr5biO != (540 - 540)) {
        int PGhniH;
        int fail;
        int CrRnNHS;
        PGhniH = 0;
        fail = 0;
        CrRnNHS = 0;
        scanf ("%d", &rJ3pr5biO);
        if (!(0 != rJ3pr5biO))
            break;
        for (i = 0; rJ3pr5biO > i; i++)
            scanf ("%d", &wnzXTI9yBo[i]);
        for (i = 0; rJ3pr5biO > i; i++) {
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
            for (BmXVnwKjhdy = rJ3pr5biO - (324 - 323); i < BmXVnwKjhdy; BmXVnwKjhdy--) {
                if (wnzXTI9yBo[BmXVnwKjhdy -(998 - 997)] <= wnzXTI9yBo[BmXVnwKjhdy]) {
                    XpkXSE = wnzXTI9yBo[BmXVnwKjhdy -(401 - 400)];
                    wnzXTI9yBo[BmXVnwKjhdy -1] = wnzXTI9yBo[BmXVnwKjhdy];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    wnzXTI9yBo[BmXVnwKjhdy] = XpkXSE;
                };
            };
        }
        for (i = 0; rJ3pr5biO > i; i++)
            scanf ("%d", &Q3GCe5xPo[i]);
        for (i = 0; i < rJ3pr5biO; i++) {
            for (BmXVnwKjhdy = rJ3pr5biO - 1; i < BmXVnwKjhdy; BmXVnwKjhdy--) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (Q3GCe5xPo[BmXVnwKjhdy -1] <= Q3GCe5xPo[BmXVnwKjhdy]) {
                    XpkXSE = Q3GCe5xPo[BmXVnwKjhdy -1];
                    Q3GCe5xPo[BmXVnwKjhdy -1] = Q3GCe5xPo[BmXVnwKjhdy];
                    Q3GCe5xPo[BmXVnwKjhdy] = XpkXSE;
                };
            };
        }
        {
            BmXVnwKjhdy = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (rJ3pr5biO > BmXVnwKjhdy) {
                i = BmXVnwKjhdy -fail;
                XpkXSE = BmXVnwKjhdy -CrRnNHS;
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
                if (wnzXTI9yBo[i] > Q3GCe5xPo[XpkXSE])
                    PGhniH++;
                else {
                    if (wnzXTI9yBo[i] < Q3GCe5xPo[XpkXSE]) {
                        fail++;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        PGhniH--;
                    }
                    else if (wnzXTI9yBo[i] == Q3GCe5xPo[XpkXSE]) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        if (wnzXTI9yBo[rJ3pr5biO - fail - 1] > Q3GCe5xPo[rJ3pr5biO - CrRnNHS -1]) {
                            PGhniH++;
                            fail++;
                            CrRnNHS++;
                        }
                        else if (wnzXTI9yBo[rJ3pr5biO - fail - 1] < Q3GCe5xPo[rJ3pr5biO - CrRnNHS -1]) {
                            fail++;
                            PGhniH--;
                        }
                        else if (wnzXTI9yBo[rJ3pr5biO - fail - 1] == Q3GCe5xPo[rJ3pr5biO - CrRnNHS -1] && wnzXTI9yBo[rJ3pr5biO - fail - 1] < Q3GCe5xPo[XpkXSE]) {
                            PGhniH--;
                            fail++;
                        };
                    };
                }
                BmXVnwKjhdy++;
            };
        }
        r = 200 * PGhniH;
        printf ("%d\n", r);
    };
}

