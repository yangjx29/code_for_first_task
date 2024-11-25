int main () {
    int JEJZYf;
    int i;
    double  b [(403 - 203)];
    double  CEUJ3bO [(1164 - 964)];
    double  c [200];
    double  max = (789 - 789);
    scanf ("%d\n", &JEJZYf);
    {
        i = 203 - 203;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JEJZYf > i) {
            scanf ("%lf", &CEUJ3bO[i]);
            scanf ("%lf", &b[i]);
            c[i] = sqrt (CEUJ3bO[i] * CEUJ3bO[i] + b[i] * b[i]);
            i++;
        };
    }
    for (int UCD7i9 = (344 - 344);
    JEJZYf > UCD7i9; UCD7i9++) {
        for (int k = 0;
        JEJZYf > k; k++) {
            if (sqrt ((CEUJ3bO[UCD7i9] - CEUJ3bO[k]) * (CEUJ3bO[UCD7i9] - CEUJ3bO[k]) + (b[UCD7i9] - b[k]) * (b[UCD7i9] - b[k])) > max)
                max = sqrt ((CEUJ3bO[UCD7i9] - CEUJ3bO[k]) * (CEUJ3bO[UCD7i9] - CEUJ3bO[k]) + (b[UCD7i9] - b[k]) * (b[UCD7i9] - b[k]));
        };
    }
    printf ("%.4lf\n", max);
}

