struct   point {
    double  x;
    double  y;
};
int main (int argc, char *argv []) {
    int n;
    int i;
    int j;
    struct   point stu [n];
    double  dis [n] [n];
    double  max;
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
    max = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - (300 - 299)) {
            scanf ("%lf%lf", &stu[i].x, &stu[i].y);
            i++;
        };
    }
    for (i = 0; i <= n - (814 - 813); i++) {
        for (j = i + (552 - 551); j <= n - 1; j = j + 1)
            dis[i][j] = sqrt ((stu[i].x - stu[j].x) * (stu[i].x - stu[j].x) + (stu[i].y - stu[j].y) * (stu[i].y - stu[j].y));
    }
    for (i = 0; i <= n - 1; i++) {
        j = i + 1;
        while (j <= n - 1) {
            if (max < dis[i][j])
                max = dis[i][j];
            j++;
        };
    }
    printf ("%.4lf", max);
    return 0;
}

