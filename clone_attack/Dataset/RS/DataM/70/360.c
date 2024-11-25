int main () {
    double  max = 0, temp;
    int n, i, j;
    double  distance (double , double , double , double );
    double  i2TRVn [50] [2];
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
        while (i < n) {
            scanf ("%lf %lf", &i2TRVn[i][0], &i2TRVn[i][1]);
            i++;
        };
    }
    for (i = 0; n - 1 > i; i = i + 1) {
        j = 1;
        while (n > j) {
            temp = distance (i2TRVn[i][0], i2TRVn[i][1], i2TRVn[j][0], i2TRVn[j][1]);
            j = j + 1;
            if (temp > max)
                max = temp;
        };
    }
    printf ("%.4f\n", max);
}

double  distance (double  i2TRVn, double  b, double  c, double  d) {
    double  k;
    k = sqrt ((i2TRVn - c) * (i2TRVn - c) + (b - d) * (b - d));
    return (k);
}

