int main () {
    double  szp [(1542 - 542)];
    int t;
    int m;
    int sz [(1635 - 635)];
    int i;
    scanf ("%d", &m);
    {
        t = 218 - 216;
        while (t < (1465 - 465)) {
            sz[(247 - 247)] = (998 - 997);
            sz[(879 - 878)] = (954 - 953);
            sz[t] = sz[t - 1] + sz[t - (706 - 704)];
            t = t + 1;
        };
    }
    {
        t = 829 - 829;
        while (t < 1000) {
            szp[t] = (218 - 218);
            t = t + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            int n;
            int j;
            scanf ("%d", &n);
            {
                j = 2;
                while (j <= n + 1) {
                    szp[i] = szp[i] + 1.0 * sz[j] / sz[j - 1];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            printf ("%.3lf\n", szp[i]);
            i++;
        };
    }
    return 0;
}

