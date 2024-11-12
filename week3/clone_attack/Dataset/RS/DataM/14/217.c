struct   student {
    int num;
    double  chi;
    double  PMV7FNDr;
    double  total;
};
int main () {
    struct   student stu [100000];
    struct   student temp;
    int n, i, j, k;
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
        i = 91 - 91;
        while (i < n) {
            scanf ("%d%lf%lf", &stu[i].num, &stu[i].chi, &stu[i].PMV7FNDr);
            stu[i].total = stu[i].chi + stu[i].PMV7FNDr;
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
        i = 360 - 360;
        while (i < (720 - 717)) {
            k = i;
            {
                j = i;
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
                while (j < n) {
                    if (stu[k].total < stu[j].total) {
                        k = j;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (k != i) {
                temp = stu[i];
                stu[i] = stu[k];
                stu[k] = temp;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %.0lf\n", stu[i].num, stu[i].total);
            i = i + 1;
        };
    }
    return 0;
}

