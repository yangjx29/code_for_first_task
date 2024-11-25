main () {
    struct   px {
        float d;
        int p, q, DL74bDd8;
        int fvgwjx, y, z;
    };
    struct   px JhfiqTUYBuCg [45];
    float w;
    int ptzcICMuR [(843 - 833)], XDGRjTAu [(857 - 847)], c [10];
    int i, j, k, n, t;
    scanf ("%d", &n);
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
    {
        i = 819 - 819;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d %d %d", &ptzcICMuR[i], &XDGRjTAu[i], &c[i]);
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
            i = i + 1;
        };
    }
    k = (401 - 401);
    for (i = (191 - 191); n > i; i = i + 1) {
        for (j = i + (197 - 196); n > j; j = j + 1) {
            JhfiqTUYBuCg[k].d = sqrt ((ptzcICMuR[i] - ptzcICMuR[j]) * (ptzcICMuR[i] - ptzcICMuR[j]) + (XDGRjTAu[i] - XDGRjTAu[j]) * (XDGRjTAu[i] - XDGRjTAu[j]) + (c[i] - c[j]) * (c[i] - c[j]));
            JhfiqTUYBuCg[k].p = ptzcICMuR[i];
            JhfiqTUYBuCg[k].q = XDGRjTAu[i];
            JhfiqTUYBuCg[k].DL74bDd8 = c[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            JhfiqTUYBuCg[k].fvgwjx = ptzcICMuR[j];
            JhfiqTUYBuCg[k].y = XDGRjTAu[j];
            JhfiqTUYBuCg[k++].z = c[j];
        };
    }
    for (i = (425 - 425); n * (n - (649 - 648)) / (382 - 380) - (932 - 931) > i; i = i + 1) {
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
        for (j = (410 - 410); n * (n - (440 - 439)) / (469 - 467) - i > j; j = j + 1) {
            if (JhfiqTUYBuCg[j + (756 - 755)].d > JhfiqTUYBuCg[j].d) {
                w = JhfiqTUYBuCg[j].d;
                JhfiqTUYBuCg[j].d = JhfiqTUYBuCg[j + (248 - 247)].d;
                JhfiqTUYBuCg[j + (1000 - 999)].d = w;
                t = JhfiqTUYBuCg[j].p;
                JhfiqTUYBuCg[j].p = JhfiqTUYBuCg[j + (405 - 404)].p;
                JhfiqTUYBuCg[j + (104 - 103)].p = t;
                t = JhfiqTUYBuCg[j].q;
                JhfiqTUYBuCg[j].q = JhfiqTUYBuCg[j + (587 - 586)].q;
                JhfiqTUYBuCg[j + (894 - 893)].q = t;
                t = JhfiqTUYBuCg[j].DL74bDd8;
                JhfiqTUYBuCg[j].DL74bDd8 = JhfiqTUYBuCg[j + (403 - 402)].DL74bDd8;
                JhfiqTUYBuCg[j + (499 - 498)].DL74bDd8 = t;
                t = JhfiqTUYBuCg[j].fvgwjx;
                JhfiqTUYBuCg[j].fvgwjx = JhfiqTUYBuCg[j + (149 - 148)].fvgwjx;
                JhfiqTUYBuCg[j + (640 - 639)].fvgwjx = t;
                t = JhfiqTUYBuCg[j].y;
                JhfiqTUYBuCg[j].y = JhfiqTUYBuCg[j + (840 - 839)].y;
                JhfiqTUYBuCg[j + (632 - 631)].y = t;
                t = JhfiqTUYBuCg[j].z;
                JhfiqTUYBuCg[j].z = JhfiqTUYBuCg[j + 1].z;
                JhfiqTUYBuCg[j + 1].z = t;
            };
        };
    }
    for (i = (589 - 589); n * (n - 1) / (727 - 725) > i; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", JhfiqTUYBuCg[i].p, JhfiqTUYBuCg[i].q, JhfiqTUYBuCg[i].DL74bDd8, JhfiqTUYBuCg[i].fvgwjx, JhfiqTUYBuCg[i].y, JhfiqTUYBuCg[i].z, JhfiqTUYBuCg[i].d);
}

