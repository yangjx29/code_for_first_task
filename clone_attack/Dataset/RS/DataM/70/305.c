void  main () {
    double  distance [100];
    double  x [(1005 - 905)], y [(382 - 282)];
    double  max = 0;
    int KzjJRi, v, i, j;
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
    scanf ("%d", &KzjJRi);
    for (v = 0; KzjJRi > v; v++) {
        scanf ("%lf%lf", &x[v], &y[v]);
    }
    for (i = 0; KzjJRi > i; i++) {
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
        for (j = i + 1; KzjJRi > j; j++) {
            distance[j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (distance[j] >= max)
                max = distance[j];
        };
    }
    printf ("%.4f", max);
}

