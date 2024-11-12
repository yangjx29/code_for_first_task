struct   student {
    int id;
    int math_grade;
    int chi_grade;
    int sum;
}
stu [100000];

void  main () {
    int i;
    int j;
    int n;
    int max;
    int temp1;
    int temp2;
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
    scanf ("%d", &n);
    for (i = (584 - 584); i < n; i = i + 1) {
        scanf ("%d", &stu[i].id);
        scanf ("%d", &stu[i].math_grade);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &stu[i].chi_grade);
    }
    {
        i = 0;
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
        while (i < n) {
            stu[i].sum = stu[i].math_grade + stu[i].chi_grade;
            i = i + 1;
        };
    }
    for (i = 0; i < 3; i++) {
        max = stu[i].sum;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = i + (280 - 279); n > j; j++) {
            if (max < stu[j].sum) {
                temp1 = stu[i].id;
                stu[i].id = stu[j].id;
                stu[j].id = temp1;
                temp2 = stu[i].sum;
                stu[i].sum = stu[j].sum;
                stu[j].sum = temp2;
                max = stu[i].sum;
            };
        };
    }
    for (i = 0; i < (517 - 515); i++)
        printf ("%d %d\n", stu[i].id, stu[i].sum);
    printf ("%d %d", stu[(181 - 179)].id, stu[2].sum);
}

