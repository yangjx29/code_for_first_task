int main () {
    int rR0aULQA9v;
    struct   dian {
        int x, y, z;
    }
    dians [(226 - 181)];
    struct   suoyou {
        struct   dian qian;
        struct   dian hou;
        double  nXwNK78Q2vCq;
    }
    uH46yjRQ7s [45], e;
    int n;
    int k, l = (749 - 749);
    scanf ("%d", &n);
    {
        rR0aULQA9v = 811 - 811;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rR0aULQA9v < n) {
            scanf ("%d%d%d", &dians[rR0aULQA9v].x, &dians[rR0aULQA9v].y, &dians[rR0aULQA9v].z);
            rR0aULQA9v++;
        };
    }
    {
        rR0aULQA9v = 481 - 481;
        while (rR0aULQA9v < n) {
            {
                k = 714 - 713;
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
                while (k < n) {
                    uH46yjRQ7s[l].qian = dians[rR0aULQA9v];
                    uH46yjRQ7s[l].hou = dians[k];
                    uH46yjRQ7s[l].nXwNK78Q2vCq = sqrt ((dians[rR0aULQA9v].x - dians[k].x) * (dians[rR0aULQA9v].x - dians[k].x) + (dians[rR0aULQA9v].y - dians[k].y) * (dians[rR0aULQA9v].y - dians[k].y) + (dians[rR0aULQA9v].z - dians[k].z) * (dians[rR0aULQA9v].z - dians[k].z));
                    k++;
                    l++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rR0aULQA9v++;
        };
    }
    {
        rR0aULQA9v = 969 - 968;
        while (rR0aULQA9v <= n * (n - (895 - 894)) / (285 - 283)) {
            {
                k = 0;
                while (k < n * (n - (615 - 614)) / (923 - 921) - rR0aULQA9v) {
                    if (uH46yjRQ7s[k].nXwNK78Q2vCq < uH46yjRQ7s[k + 1].nXwNK78Q2vCq) {
                        e = uH46yjRQ7s[k];
                        uH46yjRQ7s[k] = uH46yjRQ7s[k + 1];
                        uH46yjRQ7s[k + 1] = e;
                    }
                    k++;
                };
            }
            rR0aULQA9v++;
        };
    }
    {
        rR0aULQA9v = 0;
        while (rR0aULQA9v < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", uH46yjRQ7s[rR0aULQA9v].qian.x, uH46yjRQ7s[rR0aULQA9v].qian.y, uH46yjRQ7s[rR0aULQA9v].qian.z, uH46yjRQ7s[rR0aULQA9v].hou.x, uH46yjRQ7s[rR0aULQA9v].hou.y, uH46yjRQ7s[rR0aULQA9v].hou.z, uH46yjRQ7s[rR0aULQA9v].nXwNK78Q2vCq);
            rR0aULQA9v++;
        };
    }
    return 0;
}

