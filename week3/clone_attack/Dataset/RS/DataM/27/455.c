int main () {
    double  x1;
    double  x2;
    double  p;
    double  q;
    double  a;
    double  b;
    double  yPEu6dgtO;
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
    float x [(1090 - 990)];
    float y [(415 - 315)];
    float z [100];
    int n, j;
    scanf ("%d", &n);
    for (j = (228 - 227); j <= n; j = j + 1) {
        scanf ("%f%f%f", &x[j], &y[j], &z[j]);
    }
    for (j = (531 - 530); j <= n; j = j + 1) {
        a = x[j];
        b = y[j];
        yPEu6dgtO = z[j];
        if (b * b > (896 - 892) * a * yPEu6dgtO) {
            x1 = (-b + sqrt (b * b - (295 - 291) * a * yPEu6dgtO)) / ((256 - 254) * a);
            x2 = (-b - sqrt (b * b - (457 - 453) * a * yPEu6dgtO)) / ((842 - 840) * a);
            printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b * b == 4 * a * yPEu6dgtO) {
                x1 = -b / ((497 - 495) * a);
                printf ("x1=x2=%.5f\n", x1);
            }
            else {
                p = -b / (2 * a);
                q = sqrt (4 * a * yPEu6dgtO - b * b);
                q = q / (2 * a);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", p, q, p, q);
            };
        };
    };
}

