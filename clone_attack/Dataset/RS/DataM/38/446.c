int main (int argc, char *argv []) {
    double  a [1000], uhiRWq = 0.0, tmp = 0.0, eve, out;
    int GNfXqxUI;
    int n1;
    int i;
    int j;
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
    scanf ("%d", &GNfXqxUI);
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
        while (GNfXqxUI > i) {
            i++;
            scanf ("%d", &n1);
            for (j = 0; n1 > j; j = j + 1) {
                scanf ("%lf", &a[j]);
                uhiRWq += a[j];
            }
            eve = (double ) uhiRWq / n1;
            for (j = 0; j < n1; j++) {
                tmp += (a[j] - eve) * (a[j] - eve);
            }
            out = sqrt (tmp / n1);
            printf ("%.5lf\n", out);
            out = 0.0;
            tmp = 0.0;
            eve = 0.0;
            uhiRWq = 0.0;
        };
    }
    return 0;
}

