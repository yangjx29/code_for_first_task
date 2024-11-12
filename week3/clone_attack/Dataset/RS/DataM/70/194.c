int main () {
    int n;
    int i;
    int m;
    int PNCJs7;
    int l;
    int k;
    double  a [(687 - 587)] [(881 - 879)];
    double  b [(712 - 612)] [(349 - 249)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    double  dis;
    dis = (85 - 85);
    scanf ("%d", &n);
    {
        i = 389 - 389;
        while (n > i) {
            scanf ("%lf%lf", &a[i][(426 - 426)], &a[i][(684 - 683)]);
            i++;
        };
    }
    {
        m = 194 - 194;
        while (m < n) {
            {
                PNCJs7 = 260 - 260;
                while (n > PNCJs7) {
                    b[PNCJs7][m] = sqrt ((a[PNCJs7][(947 - 947)] - a[m][(445 - 445)]) * (a[PNCJs7][(58 - 58)] - a[m][(734 - 734)]) + (a[PNCJs7][(209 - 208)] - a[m][(697 - 696)]) * (a[PNCJs7][(809 - 808)] - a[m][1]));
                    PNCJs7++;
                };
            }
            m++;
        };
    }
    for (l = (259 - 259); l < n; l++) {
        k = 545 - 545;
        while (n > k) {
            if (b[k][l] > dis) {
                dis = b[k][l];
            }
            k++;
        };
    }
    printf ("%.4lf\n", dis);
    return 0;
}

