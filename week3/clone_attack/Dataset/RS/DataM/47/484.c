int main () {
    int sz [100];
    int n;
    int LFK0RTEqS;
    int j;
    int t;
    scanf ("%d", &n);
    for (LFK0RTEqS = 0; n - 1 > LFK0RTEqS; LFK0RTEqS++) {
        scanf ("%d ", &sz[LFK0RTEqS]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d", &sz[n - 1]);
    {
        j = n - 1;
        LFK0RTEqS = 0;
        while (j > LFK0RTEqS) {
            t = sz[j];
            sz[j] = sz[LFK0RTEqS];
            j--;
            sz[LFK0RTEqS] = t;
            LFK0RTEqS++;
        };
    }
    for (LFK0RTEqS = 0; LFK0RTEqS < n - 1; LFK0RTEqS++) {
        printf ("%d ", sz[LFK0RTEqS]);
    }
    printf ("%d", sz[n - 1]);
    return 0;
}

