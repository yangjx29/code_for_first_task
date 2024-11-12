int main () {
    double  max [10];
    int n, i;
    struct   dKs6J5edT {
        double  x, y;
    }
    dKs6J5edT [(822 - 812)];
    double  M;
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
        while (n > i) {
            scanf ("%lf %lf", &dKs6J5edT[i].x, &dKs6J5edT[i].y);
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
            i = i + 1;
        };
    }
    for (i = 0; n - 1 > i; i = i + 1) {
        double  dis [10];
        int j;
        for (j = i + 1; j < n; j++) {
            dis[j - 1] = sqrt ((dKs6J5edT[i].x - dKs6J5edT[j].x) * (dKs6J5edT[i].x - dKs6J5edT[j].x) + (dKs6J5edT[i].y - dKs6J5edT[j].y) * (dKs6J5edT[i].y - dKs6J5edT[j].y));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        {
            j = i + 1;
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
            while (n - 1 > j) {
                if (dis[j] < dis[j - 1]) {
                    max[i] = dis[j - 1];
                    dis[j] = dis[j - 1];
                }
                else
                    max[i] = dis[j];
                j++;
            };
        };
    }
    {
        i = 0;
        while (n - 1 > i) {
            if (max[i] > max[i + 1]) {
                M = max[i];
                max[i + 1] = max[i];
            }
            else
                M = max[i + 1];
            i++;
        };
    }
    printf ("%.4f", M);
    return 0;
}

