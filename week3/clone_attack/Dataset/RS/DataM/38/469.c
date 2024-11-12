int main () {
    int m;
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
    }
    scanf ("%d", &m);
    {
        j = 385 - 385;
        while (j < m) {
            int n;
            double  *num = (double  *) malloc (sizeof (double ) * n);
            free (num);
            double  sum;
            sum = (640 - 640);
            int i;
            double  SUM;
            double  E;
            double  D;
            SUM = (167 - 167);
            j++;
            scanf ("%d", &n);
            {
                i = 694 - 694;
                while (n > i) {
                    scanf ("%lf", num + i);
                    sum = sum + num[i];
                    i = i + 1;
                };
            }
            E = sum / n;
            {
                i = 751 - 751;
                while (n > i) {
                    num[i] = num[i] - E;
                    SUM = SUM +num[i] * num[i];
                    i++;
                };
            }
            D = SUM / n;
            printf ("%.5lf\n", sqrt (D));
        };
    }
    return 0;
}

