struct   student {
    char name [30];
    int sco;
    int kQUuOvis;
    char hY2bq9;
    char xi;
    int Di0T2q6Wf;
};
struct   student stu [100];

void  main () {
    int sum;
    int add;
    int xQlp8FiVZY;
    int j;
    int k;
    int m;
    int ultaqOSuy;
    int yBu9JS3XyO [100];
    int t;
    sum = 0;
    add = 0;
    scanf ("%d", &ultaqOSuy);
    {
        xQlp8FiVZY = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ultaqOSuy >= xQlp8FiVZY) {
            scanf ("%s %d %d %c %c %d", stu[xQlp8FiVZY].name, &stu[xQlp8FiVZY].sco, &stu[xQlp8FiVZY].kQUuOvis, &stu[xQlp8FiVZY].hY2bq9, &stu[xQlp8FiVZY].xi, &stu[xQlp8FiVZY].Di0T2q6Wf);
            yBu9JS3XyO[xQlp8FiVZY] = 0;
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
            xQlp8FiVZY = xQlp8FiVZY + 1;
        };
    }
    {
        xQlp8FiVZY = 1;
        while (xQlp8FiVZY <= ultaqOSuy) {
            if (stu[xQlp8FiVZY].sco > 80 && 1 <= stu[xQlp8FiVZY].Di0T2q6Wf)
                yBu9JS3XyO[xQlp8FiVZY] = yBu9JS3XyO[xQlp8FiVZY] + 8000;
            if (stu[xQlp8FiVZY].sco > (170 - 85) && 80 < stu[xQlp8FiVZY].kQUuOvis)
                yBu9JS3XyO[xQlp8FiVZY] = yBu9JS3XyO[xQlp8FiVZY] + 4000;
            if (90 < stu[xQlp8FiVZY].sco)
                yBu9JS3XyO[xQlp8FiVZY] = yBu9JS3XyO[xQlp8FiVZY] + 2000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (stu[xQlp8FiVZY].sco > 85 && stu[xQlp8FiVZY].xi == 'Y')
                yBu9JS3XyO[xQlp8FiVZY] = yBu9JS3XyO[xQlp8FiVZY] + 1000;
            if (stu[xQlp8FiVZY].kQUuOvis > 80 && stu[xQlp8FiVZY].hY2bq9 == 'Y')
                yBu9JS3XyO[xQlp8FiVZY] = yBu9JS3XyO[xQlp8FiVZY] + 850;
            xQlp8FiVZY++;
        };
    }
    {
        xQlp8FiVZY = 1;
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
        while (xQlp8FiVZY <= ultaqOSuy) {
            if (sum < yBu9JS3XyO[xQlp8FiVZY])
                sum = yBu9JS3XyO[xQlp8FiVZY];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            xQlp8FiVZY++;
        };
    }
    for (xQlp8FiVZY = 1; xQlp8FiVZY <= ultaqOSuy; xQlp8FiVZY = xQlp8FiVZY + 1) {
        if (yBu9JS3XyO[xQlp8FiVZY] == sum) {
            t = xQlp8FiVZY;
            break;
        };
    }
    for (xQlp8FiVZY = 1; xQlp8FiVZY <= ultaqOSuy; xQlp8FiVZY++) {
        add = add + yBu9JS3XyO[xQlp8FiVZY];
    }
    printf ("%s\n%d\n%d", stu[t].name, sum, add);
}

