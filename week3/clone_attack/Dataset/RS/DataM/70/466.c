int main (int argc, char *argv []) {
    double  WcuZwA90P;
    WcuZwA90P = (57 - 57);
    double  dis [num];
    double  DI3sX0S [num];
    int n, i, j;
    struct   {
        double  x, y;
    }
    point [num];
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
    DI3sX0S[(685 - 685)] = (361 - 361);
    scanf ("%d", &n);
    {
        i = 428 - 428;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            double  x1, y1;
            scanf ("%lf%lf", &x1, &y1);
            point[i].x = x1;
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
            point[i].y = y1;
            i = i + 1;
        };
    }
    for (i = (759 - 759); i < n - (538 - 537); i = i + 1) {
        j = i + 1;
        while (j < n) {
            dis[j] = sqrt ((point[j].x - point[i].x) * (point[j].x - point[i].x) + (point[j].y - point[i].y) * (point[j].y - point[i].y));
            if (dis[j] > DI3sX0S[i])
                DI3sX0S[i] = dis[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            if (DI3sX0S[i] > WcuZwA90P)
                WcuZwA90P = DI3sX0S[i];
            i = i + 1;
        };
    }
    printf ("%.4lf", WcuZwA90P);
    return 0;
}

