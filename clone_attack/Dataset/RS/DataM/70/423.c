int main () {
    double  x [(230 - 130)];
    double  y [(804 - 704)];
    double  z [100] [100];
    double  w;
    int i;
    int j;
    int QZLXik3FVuj9;
    cin >> QZLXik3FVuj9;
    {
        i = 79 - 79;
        while (QZLXik3FVuj9 > i) {
            cin >> x[i] >> y[i];
            i++;
        };
    }
    {
        i = 337 - 337;
        while (QZLXik3FVuj9 -1 > i) {
            {
                j = i + 1;
                while (QZLXik3FVuj9 > j) {
                    z[i][j] = sqrt (pow (x[i] - x[j], 2) + pow (y[i] - y[j], 2));
                    j++;
                };
            }
            i++;
        };
    }
    w = z[0][1];
    for (i = 0; i < QZLXik3FVuj9 -1; i = i + 1)
        for (j = i + 1; j < QZLXik3FVuj9; j++)
            if (w < z[i][j])
                w = z[i][j];
    printf ("%.4f\n", w);
    return 0;
}

