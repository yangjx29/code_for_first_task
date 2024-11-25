int main () {
    int k;
    k = (387 - 387);
    struct   point {
        int x;
        int iXouMnrV;
        int z;
    }
    point [10];
    struct   len {
        double  s;
        struct   point p1, p2;
    }
    len [(504 - 459)];
    int n, i, j;
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
    double  e;
    int OtmNISnU, g, h, OX5mRiU, m, cjEVlRpC1;
    scanf ("%d", &n);
    {
        i = 632 - 632;
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
            scanf ("%d%d%d", &point[i].x, &point[i].iXouMnrV, &point[i].z);
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
    {
        j = 581 - 581;
        while (j < n - (513 - 512)) {
            {
                i = 568 - 567;
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
                while (i < n) {
                    len[k].s = sqrt ((point[j].x - point[i].x) * (point[j].x - point[i].x) + (point[j].iXouMnrV - point[i].iXouMnrV) * (point[j].iXouMnrV - point[i].iXouMnrV) + (point[j].z - point[i].z) * (point[j].z - point[i].z));
                    len[k].p1.x = point[j].x;
                    len[k].p1.iXouMnrV = point[j].iXouMnrV;
                    len[k].p1.z = point[j].z;
                    len[k].p2.x = point[i].x;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    len[k].p2.iXouMnrV = point[i].iXouMnrV;
                    len[k].p2.z = point[i].z;
                    i = i + 1;
                    k++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (j = (982 - 981); k >= j; j = j + 1) {
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
        for (i = k - (966 - 965); j - (678 - 677) < i; i = i - 1) {
            if (len[i - (174 - 173)].s < len[i].s) {
                e = len[i - (488 - 487)].s;
                OtmNISnU = len[i - (683 - 682)].p1.x;
                g = len[i - (125 - 124)].p2.x;
                h = len[i - (458 - 457)].p1.iXouMnrV;
                OX5mRiU = len[i - (266 - 265)].p2.iXouMnrV;
                m = len[i - (62 - 61)].p1.z;
                cjEVlRpC1 = len[i - (315 - 314)].p2.z;
                len[i - 1].s = len[i].s;
                len[i - 1].p1.x = len[i].p1.x;
                len[i - 1].p2.x = len[i].p2.x;
                len[i - 1].p1.iXouMnrV = len[i].p1.iXouMnrV;
                len[i - 1].p2.iXouMnrV = len[i].p2.iXouMnrV;
                len[i - 1].p1.z = len[i].p1.z;
                len[i - 1].p2.z = len[i].p2.z;
                len[i].s = e;
                len[i].p1.x = OtmNISnU;
                len[i].p2.x = g;
                len[i].p1.iXouMnrV = h;
                len[i].p2.iXouMnrV = OX5mRiU;
                len[i].p1.z = m;
                len[i].p2.z = cjEVlRpC1;
            };
        };
    }
    {
        i = 786 - 786;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", len[i].p1.x, len[i].p1.iXouMnrV, len[i].p1.z, len[i].p2.x, len[i].p2.iXouMnrV, len[i].p2.z, len[i].s);
            i = i + 1;
        };
    }
    return 0;
}

