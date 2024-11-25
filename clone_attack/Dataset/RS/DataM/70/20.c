int main () {
    double  max;
    double  Max;
    max = 0;
    Max = 0;
    double  distance [500];
    struct   point {
        double  x;
        double  y;
    };
    struct   point point [500];
    int n, i, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%lf%lf", &point[i].x, &point[i].y);
    }
    for (i = 0; i < n; i++) {
        double  X = point[i].x;
        double  Y;
        Y = point[i].y;
        {
            j = 0;
            while (n > j) {
                distance[j] = sqrt ((X -point[j].x) * (X -point[j].x) + (Y -point[j].y) * (Y -point[j].y));
                if (max < distance[j])
                    max = distance[j];
                j = j + 1;
            };
        }
        if (max > Max)
            Max = max;
    }
    printf ("%.4lf\n", Max);
    return 0;
}

