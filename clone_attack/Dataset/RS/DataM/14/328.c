struct   stu {
    int num;
    int score1;
    int score2;
}
stu [100000];

void  main () {
    int zna03WV, tvinhKJW, gYMBbCHWfgQ, a [100000], dJcimw;
    scanf ("%d", &gYMBbCHWfgQ);
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
        zna03WV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gYMBbCHWfgQ > zna03WV) {
            scanf ("%d%d%d", &stu[zna03WV].num, &stu[zna03WV].score1, &stu[zna03WV].score2);
            a[zna03WV] = stu[zna03WV].score1 + stu[zna03WV].score2;
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
            zna03WV++;
        };
    }
    {
        tvinhKJW = 0;
        while (3 > tvinhKJW) {
            dJcimw = 0;
            for (zna03WV = 0; zna03WV < gYMBbCHWfgQ; zna03WV = zna03WV + 1)
                dJcimw = (dJcimw >= a[zna03WV]) ? dJcimw : a[zna03WV];
            {
                zna03WV = 0;
                while (zna03WV < gYMBbCHWfgQ) {
                    if (a[zna03WV] == dJcimw) {
                        printf ("%d %d\n", stu[zna03WV].num, a[zna03WV]);
                        a[zna03WV] = 0;
                        break;
                    }
                    zna03WV++;
                };
            }
            tvinhKJW++;
        };
    };
}

