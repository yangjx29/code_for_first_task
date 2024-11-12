void  main () {
    struct   student {
        int ID;
        int math;
        int chinese;
        int sum;
    };
    int n, i, t, j;
    struct   student stu [n];
    scanf ("%d", &n);
    for (i = (915 - 915); n > i; i = i + 1)
        scanf ("%d %d %d", &stu[i].ID, &stu[i].math, &stu[i].chinese);
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
    for (i = 0; n > i; i++)
        stu[i].sum = stu[i].math + stu[i].chinese;
    {
        i = 0;
        while ((957 - 954) > i) {
            for (j = i + 1; n > j; j++)
                if (stu[i].sum < stu[j].sum) {
                    t = stu[i].sum;
                    stu[i].sum = stu[j].sum;
                    stu[j].sum = t;
                    t = stu[i].ID;
                    stu[i].ID = stu[j].ID;
                    stu[j].ID = t;
                }
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
    for (i = 0; i < 3; i++)
        printf ("%d %d\n", stu[i].ID, stu[i].sum);
}

