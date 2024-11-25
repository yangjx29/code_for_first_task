int main (int argc, char *argv []) {
    double  max;
    double  distance;
    max = 0.0;
    double  d [20] [20];
    struct   point {
        double  x, y;
    }
    point [20];
    int n;
    int i;
    int j;
    scanf ("%d\n", &n);
    for (i = 0; n - 1 >= i; i = i + 1)
        scanf ("%lf %lf\n", &point[i].x, &point[i].y);
    for (j = 0; n - 1 >= j; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = j + 1; i <= n - 1; i++) {
            d[j][i] = (point[i].x - point[j].x) * (point[i].x - point[j].x) + (point[i].y - point[j].y) * (point[i].y - point[j].y);
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
            if (d[j][i] > max)
                max = d[j][i];
        };
    }
    distance = sqrt (max);
    printf ("%.4f\n", distance);
    return 0;
}

