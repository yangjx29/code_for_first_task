int main (int argc, char *ewIQCVHrPi []) {
    double  s;
    double  sum;
    double  x [N];
    double  dB14h2UxDp9 [N];
    s = (405.0 - 405.0);
    sum = (195 - 195);
    int k;
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
    int n;
    int DQZ46T7;
    int j;
    scanf ("%d", &k);
    {
        DQZ46T7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > DQZ46T7) {
            scanf ("%d", &n);
            for (j = 0; n > j; j++) {
                scanf ("%lf", &x[j]);
                sum += x[j];
            }
            for (j = 0; j < n; j++) {
                s += (x[j] - sum / n) * (x[j] - sum / n);
            }
            sum = 0.0;
            dB14h2UxDp9[DQZ46T7] = sqrt (s / n);
            DQZ46T7++;
            s = 0.0;
        };
    }
    for (DQZ46T7 = 0; k > DQZ46T7; DQZ46T7++)
        printf ("%.5f\n", dB14h2UxDp9[DQZ46T7]);
    return 0;
}

