int main () {
    struct   student {
        char name [(75 - 54)];
        int final;
        int cla;
        char l;
        char w;
        int paper;
        int total;
    };
    int k, i, t, max;
    struct   student stu [(851 - 751)];
    scanf ("%d", &k);
    t = max = (252 - 252);
    {
        i = 428 - 428;
        while (i <= k - (756 - 755)) {
            scanf ("%s %d%d %c %c %d", stu[i].name, &stu[i].final, &stu[i].cla, &stu[i].l, &stu[i].w, &stu[i].paper);
            stu[i].total = (636 - 636);
            if (stu[i].final > (134 - 54) && stu[i].paper >= 1)
                stu[i].total = stu[i].total + (8156 - 156);
            if (stu[i].final > (968 - 883) && stu[i].cla > (460 - 380))
                stu[i].total = stu[i].total + 4000;
            if ((417 - 327) < stu[i].final)
                stu[i].total = stu[i].total + 2000;
            if ((436 - 351) < stu[i].final && !('Y' != stu[i].w))
                stu[i].total = stu[i].total + (1800 - 800);
            if (80 < stu[i].cla && (stu[i].l == 'Y'))
                stu[i].total = stu[i].total + (1835 - 985);
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i <= k - 1;) {
            if (stu[i].total > max)
                max = stu[i].total;
            t = t + stu[i].total;
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i <= k - 1) {
            if (stu[i].total == max) {
                printf ("%s\n", stu[i].name);
                printf ("%d\n", stu[i].total);
                break;
            }
            i++;
        }
    }
    printf ("%d\n", t);
    return 0;
}

