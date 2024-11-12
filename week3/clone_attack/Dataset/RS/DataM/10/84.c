void  main () {
    int wwGqQZ3B9m [(1026 - 976)] = {(40 - 40)}, spTwLB6KC [50], r4i2a1cnuWz, FMxlFH, CVpCOjn;
    int samqtR;
    scanf ("%d", &samqtR);
    for (FMxlFH = (658 - 658); samqtR > FMxlFH; FMxlFH++) {
        scanf ("%d", &wwGqQZ3B9m[FMxlFH]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        spTwLB6KC[FMxlFH] = 1;
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
    {
        FMxlFH = 0;
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
        while (FMxlFH < samqtR) {
            for (CVpCOjn = 0; CVpCOjn < FMxlFH; CVpCOjn = CVpCOjn +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (wwGqQZ3B9m[FMxlFH] <= wwGqQZ3B9m[CVpCOjn]) {
                    spTwLB6KC[FMxlFH] = spTwLB6KC[CVpCOjn] + 1 > spTwLB6KC[FMxlFH] ? spTwLB6KC[CVpCOjn] + 1 : spTwLB6KC[FMxlFH];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            FMxlFH = FMxlFH +1;
        };
    }
    r4i2a1cnuWz = spTwLB6KC[0];
    {
        FMxlFH = 1;
        while (FMxlFH < samqtR) {
            if (spTwLB6KC[FMxlFH] > r4i2a1cnuWz)
                r4i2a1cnuWz = spTwLB6KC[FMxlFH];
            FMxlFH++;
        };
    }
    printf ("%d\n", r4i2a1cnuWz);
}

