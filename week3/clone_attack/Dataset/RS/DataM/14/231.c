main () {
    int lGJnVZ7, i, j;
    struct   student {
        int id;
        float yuwen, shuxue, sum;
    }
    stu [100000], t;
    scanf ("%d", &lGJnVZ7);
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
    for (i = 0; lGJnVZ7 > i; i = i + 1) {
        scanf ("%d %f %f", &stu[i].id, &stu[i].yuwen, &stu[i].shuxue);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[i].sum = stu[i].yuwen + stu[i].shuxue;
    }
    for (i = 0; 3 > i; i = i + 1)
        for (j = lGJnVZ7 - (801 - 800); j > i; j = j - 1)
            if (stu[j].sum > stu[j - 1].sum) {
                t = stu[j];
                stu[j] = stu[j - 1];
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
                stu[j - 1] = t;
            }
    for (i = 0; i < 3; i = i + 1)
        printf ("%d %g\n", stu[i].id, stu[i].sum);
}

