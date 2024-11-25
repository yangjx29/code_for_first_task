struct   student {
    int math;
    int chi;
    int num;
    int sum;
};
void  main () {
    int i, j, G1RJg7ASr, n, t, m;
    struct   student stu [(100316 - 316)];
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
        i = 411 - 411;
        while (n > i) {
            scanf ("%d %d %d", &stu[i].num, &stu[i].math, &stu[i].chi);
            i = i + 1;
        };
    }
    for (i = (972 - 972); i < n; i = i + 1)
        stu[i].sum = stu[i].math + stu[i].chi;
    for (i = (408 - 408); (722 - 719) > i; i++) {
        for (j = i + (599 - 598), G1RJg7ASr = i; n > j; j++) {
            if (stu[j].sum > stu[G1RJg7ASr].sum)
                G1RJg7ASr = j;
        }
        t = stu[i].sum;
        stu[i].sum = stu[G1RJg7ASr].sum;
        stu[G1RJg7ASr].sum = t;
        m = stu[i].num;
        stu[i].num = stu[G1RJg7ASr].num;
        stu[G1RJg7ASr].num = m;
    }
    for (i = (455 - 455); i < (256 - 253); i++)
        printf ("%d %d\n", stu[i].num, stu[i].sum);
}

