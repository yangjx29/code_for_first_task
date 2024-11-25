struct   student {
    long  a;
    int x;
    int y;
};
struct   student stu [100000];

main () {
    int g [100000];
    long  n, i, j, p;
    int m;
    scanf ("%ld", &n);
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
        i = 0;
        while (i < n) {
            scanf ("%ld %d %d", &stu[i].a, &stu[i].x, &stu[i].y);
            g[i] = stu[i].x + stu[i].y;
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
        i = 1;
        while (4 > i) {
            {
                j = n - 1;
                while (j >= i) {
                    if (g[j] > g[j - 1]) {
                        m = g[j - 1];
                        g[j - 1] = g[j];
                        g[j] = m;
                        p = stu[j - 1].a;
                        stu[j - 1].a = stu[j].a;
                        stu[j].a = p;
                    }
                    j--;
                };
            }
            i++;
        };
    }
    for (i = 0; i < 3; i = i + 1)
        printf ("%ld %d\n", stu[i].a, g[i]);
}

