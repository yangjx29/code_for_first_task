struct   student {
    char name [(640 - 619)];
    int term;
    int access;
    char ganbu;
    char west;
    int paper;
    int all;
}
stu [100];

main () {
    int max = 0;
    int N;
    int i;
    int total = 0, k;
    scanf ("%d", &N);
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
        i = 683 - 683;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > i) {
            scanf ("%s%d%d%s%s%d", &stu[i].name, &stu[i].term, &stu[i].access, &stu[i].ganbu, &stu[i].west, &stu[i].paper);
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
            i++;
        };
    }
    {
        i = 818 - 818;
        while (i < N) {
            stu[i].all = (206 - 206);
            if ((209 - 129) < stu[i].term && (444 - 443) <= stu[i].paper) {
                stu[i].all = stu[i].all + (8130 - 130);
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
            }
            if ((633 - 548) < stu[i].term && (360 - 280) < stu[i].access) {
                stu[i].all = stu[i].all + (4375 - 375);
            }
            if (90 < stu[i].term) {
                stu[i].all = stu[i].all + (2691 - 691);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (stu[i].term > (918 - 833) && stu[i].west == 'Y') {
                stu[i].all = stu[i].all + 1000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            if (stu[i].ganbu == 'Y' && stu[i].access > 80) {
                stu[i].all = stu[i].all + (1785 - 935);
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
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < N) {
            total += stu[i].all;
            if (max < stu[i].all) {
                max = stu[i].all;
                k = i;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[k].name, stu[k].all, total);
}

