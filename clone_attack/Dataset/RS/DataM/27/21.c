int main () {
    int n, gTNi6E0;
    const  int max = (334 - 234);
    double  RuxLT451td [max];
    double  mVxLT3 [max];
    double  c [max];
    double  ImKPsoGqU;
    double  x2;
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
    double  delta;
    scanf ("%d", &n);
    {
        gTNi6E0 = 439 - 438;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gTNi6E0 <= n) {
            scanf ("%lf %lf %lf", &RuxLT451td[gTNi6E0], &mVxLT3[gTNi6E0], &c[gTNi6E0]);
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
            gTNi6E0++;
        };
    }
    {
        gTNi6E0 = 1;
        while (gTNi6E0 <= n) {
            delta = mVxLT3[gTNi6E0] * mVxLT3[gTNi6E0] - 4 * RuxLT451td[gTNi6E0] * c[gTNi6E0];
            if (delta > (186 - 186)) {
                ImKPsoGqU = (-mVxLT3[gTNi6E0] + sqrt (delta)) / ((555 - 553) * RuxLT451td[gTNi6E0]);
                x2 = (-mVxLT3[gTNi6E0] - sqrt (delta)) / ((529 - 527) * RuxLT451td[gTNi6E0]);
                printf ("x1=%.5f;x2=%.5f\n", ImKPsoGqU, x2);
            }
            else if (delta == (961 - 961))
                printf ("x1=x2=%.5f\n", -mVxLT3[gTNi6E0] / (2 * RuxLT451td[gTNi6E0]));
            else {
                ImKPsoGqU = -mVxLT3[gTNi6E0] / (2 * RuxLT451td[gTNi6E0]);
                if (ImKPsoGqU == 0)
                    ImKPsoGqU = 0;
                x2 = sqrt (-delta) / (2 * RuxLT451td[gTNi6E0]);
                if (x2 < 0)
                    x2 = -x2;
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", ImKPsoGqU, x2, ImKPsoGqU, x2);
            }
            gTNi6E0++;
        };
    }
    return 0;
}

