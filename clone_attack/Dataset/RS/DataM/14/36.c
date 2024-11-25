struct   student {
    int UXgBIAelc7F;
    int score1;
    int score2;
    int total;
}
stu [100000];

int main () {
    int n, i, j, k, t;
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d %d", &stu[i].UXgBIAelc7F, &stu[i].score1, &stu[i].score2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[i].total = stu[i].score1 + stu[i].score2;
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
        while (i < 3) {
            k = i;
            for (j = i + 1; j < n; j = j + 1)
                if (stu[j].total > stu[k].total)
                    k = j;
            if (k != i) {
                t = stu[i].total;
                stu[i].total = stu[k].total;
                stu[k].total = t;
                t = stu[i].UXgBIAelc7F;
                stu[i].UXgBIAelc7F = stu[k].UXgBIAelc7F;
                stu[k].UXgBIAelc7F = t;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < 3; i = i + 1) {
        printf ("%d %d\n", stu[i].UXgBIAelc7F, stu[i].total);
    };
}

