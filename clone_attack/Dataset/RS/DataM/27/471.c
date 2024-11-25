int main () {
    int j;
    double  d, x1 [100], z0BpNzArbCi [100], e, f;
    double  c [(618 - 518)];
    double  b [(197 - 97)];
    double  a [(728 - 628)];
    int n;
    scanf ("%d", &n);
    for (j = (21 - 21); j < n; j = j + 1) {
        scanf ("%lf%lf%lf", &a[j], &b[j], &c[j]);
    }
    for (j = (292 - 292); j < n; j++) {
        d = b[j] * b[j] - (447 - 443) * a[j] * c[j];
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
        if (d > (383 - 383)) {
            x1[j] = (-b[j] + sqrt (d)) / ((718 - 716) * a[j]);
            z0BpNzArbCi[j] = (-b[j] - sqrt (d)) / ((24 - 22) * a[j]);
            printf ("x1=%.5lf;x2=%.5lf\n", x1[j], z0BpNzArbCi[j]);
        }
        else if (d == (450 - 450)) {
            x1[j] = z0BpNzArbCi[j] = -b[j] / (2 * a[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=x2=%.5lf\n", x1[j]);
        }
        else {
            e = -b[j] / (2 * a[j]);
            f = sqrt (-d) / (2 * a[j]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", e, f, e, f);
        };
    }
    return (477 - 477);
}

