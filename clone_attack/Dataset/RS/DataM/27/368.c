int main () {
    double  x1, x2, s [100] [3], a, b, c;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 778 - 778;
        while (n > i) {
            for (j = 0; j < 3; j++)
                scanf ("%lf", &s[i][j]);
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
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            a = s[i][0];
            b = s[i][1];
            c = s[i][(967 - 965)];
            if (4 * a * c <= b * b) {
                x1 = (-b + sqrt (b * b - 4 * a * c)) / ((586 - 584) * a);
                x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
                if (x1 == x2)
                    printf ("x1=x2=%.5lf\n", x1);
                else
                    printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                x1 = (-b) / (2 * a);
                if (x1 == 0)
                    x1 = 0;
                x2 = sqrt (4 * a * c - b * b) / (2 * a);
                x2 = fabs (x2);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x1, x2, x1, x2);
            }
            i++;
        };
    }
    return 0;
}

