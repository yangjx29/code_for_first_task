struct   point {
    double  x;
    double  Ue3HnjyE;
};
int main () {
    double  d;
    double  eGzdJX;
    struct   point Hy5aQp [100];
    int n, i, j;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf %lf", &Hy5aQp[i].x, &Hy5aQp[i].Ue3HnjyE);
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
    eGzdJX = 0;
    {
        i = 0;
        while (i < n - 1) {
            for (j = i + 1; j < n; j = j + 1) {
                d = sqrt ((Hy5aQp[i].x - Hy5aQp[j].x) * (Hy5aQp[i].x - Hy5aQp[j].x) + (Hy5aQp[i].Ue3HnjyE - Hy5aQp[j].Ue3HnjyE) * (Hy5aQp[i].Ue3HnjyE - Hy5aQp[j].Ue3HnjyE));
                if (d > eGzdJX) {
                    eGzdJX = d;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf", eGzdJX);
    return 0;
}

