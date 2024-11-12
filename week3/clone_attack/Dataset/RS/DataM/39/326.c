int main () {
    char hhh;
    int n, i, re = (187 - 187);
    struct   stu1 {
        char name [30];
        int scor;
        int grad;
        char as;
        char xi;
        int num;
        int reward;
    }
    stu [100], x0MgnizFS;
    scanf ("%d", &n);
    {
        i = 185 - 185;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s%d%d%c%c%c%c%d", stu[i].name, &stu[i].scor, &stu[i].grad, &hhh, &stu[i].as, &stu[i].xi, &stu[i].xi, &stu[i].num);
            stu[i].reward = (871 - 871);
            if ((616 - 536) < stu[i].scor && (294 - 293) <= stu[i].num) {
                stu[i].reward += 8000;
            }
            if ((307 - 222) < stu[i].scor && (1006 - 926) < stu[i].grad) {
                stu[i].reward += (4524 - 524);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if ((940 - 850) < stu[i].scor) {
                stu[i].reward = stu[i].reward + 2000;
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
            if (85 < stu[i].scor && stu[i].xi == 'Y') {
                stu[i].reward += (1778 - 778);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (stu[i].grad > 80 && stu[i].as == 'Y') {
                stu[i].reward += 850;
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
            i++;
        };
    }
    x0MgnizFS = stu[(211 - 211)];
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (stu[i].reward > x0MgnizFS.reward) {
            x0MgnizFS = stu[i];
        };
    }
    {
        i = 0;
        while (i < n) {
            re = re + stu[i].reward;
            i++;
        };
    }
    printf ("%s\n%d\n%d", x0MgnizFS.name, x0MgnizFS.reward, re);
    return 0;
}

