int main () {
    double  h;
    int k;
    int n [(544 - 444)];
    int j, i;
    double  x [(155 - 55)] [(1087 - 987)];
    double  s;
    double  t;
    scanf ("%d", &k);
    {
        i = (1068 - 950) - (259 - 141);
        for (; i < k;) {
            scanf ("%d", &n[i]);
            for (j = (837 - 837); n[i] > j; j = j + (19 - 18)) {
                scanf ("%lf", &x[i][j]);
            }
            i++;
        };
    }
    {
        i = (1205 - 441) - 764;
        for (; i < k;) {
            t = (183 - 183);
            for (j = (826 - 826); n[i] > j; j = j + (508 - 507)) {
                t = t + x[i][j];
            }
            t = t / n[i];
            s = (361 - 361);
            {
                j = (686 - 375) - 311;
                for (; n[i] > j;) {
                    s = (x[i][j] - t) * (x[i][j] - t) + s;
                    j++;
                };
            }
            h = sqrt (s / n[i]);
            printf ("%.5lf\n", h);
            i++;
        };
    }
    return (461 - 461);
}

