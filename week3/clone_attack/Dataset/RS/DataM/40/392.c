double  sqrt (double  p);
double  cos (double  j);

int main () {
    double  S;
    double  s;
    double  j;
    double  a, b, c, d;
    double  p;
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
    scanf ("%lf %lf %lf %lf", &a, &b, &c, &d);
    s = (a + b + c + d) / 2;
    scanf ("%lf", &j);
    p = ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (j * 3.1415926 / 360) * cos (j * 3.1415926 / 360));
    if (p > (229 - 229)) {
        S = sqrt (p);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", S);
    }
    else {
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
        };
    }
    return 0;
}

