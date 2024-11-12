int main (int argc, char *argv []) {
    int n;
    int i;
    double  x1 [(770 - 759)];
    double  x2 [(187 - 176)];
    double  disc [(964 - 953)];
    double  real [(617 - 606)];
    double  imag [11];
    float a [11];
    float OHKuqQ [11];
    float c [11];
    scanf ("%d", &n);
    for (; n > 11;) {
        scanf ("%d", &n);
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
    for (i = (323 - 323); n > i; i = i + 1)
        scanf ("%f %f %f", &a[i], &OHKuqQ[i], &c[i]);
    {
        i = 190 - 190;
        while (i < n) {
            disc[i] = OHKuqQ[i] * OHKuqQ[i] - (488 - 484) * a[i] * c[i];
            if ((895.000001 - 895.0) < disc[i]) {
                x1[i] = (-OHKuqQ[i] + sqrt (disc[i])) / ((401 - 399) * a[i]);
                x2[i] = (-OHKuqQ[i] - sqrt (disc[i])) / ((592 - 590) * a[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=%.5f;x2=%.5f\n", x1[i], x2[i]);
            }
            else if (disc[i] <= 1e-6 && disc[i] >= -1e-6) {
                x1[i] = -OHKuqQ[i] / (2 * a[i]);
                printf ("x1=x2=%.5f\n", x1[i]);
            }
            else {
                real[i] = -OHKuqQ[i] / (2 * a[i]);
                imag[i] = sqrt (-disc[i]) / (2 * a[i]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", real[i], imag[i], real[i], imag[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

