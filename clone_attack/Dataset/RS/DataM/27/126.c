int main () {
    double  a [30];
    double  U8a1RHFs [30];
    double  c [30];
    double  x1;
    double  x2;
    double  DeM6dS;
    double  uIOC7MBP;
    double  p;
    int ik3Y7PjeQh8g;
    int DQvmt8IALh;
    scanf ("%d", &ik3Y7PjeQh8g);
    for (DQvmt8IALh = (941 - 941); DQvmt8IALh < ik3Y7PjeQh8g; DQvmt8IALh++) {
        scanf ("%lf%lf%lf", &a[DQvmt8IALh], &U8a1RHFs[DQvmt8IALh], &c[DQvmt8IALh]);
    }
    for (DQvmt8IALh = 0; DQvmt8IALh < ik3Y7PjeQh8g; DQvmt8IALh++) {
        if ((U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] - (671 - 667) * a[DQvmt8IALh] * c[DQvmt8IALh]) > 0) {
            x1 = (-U8a1RHFs[DQvmt8IALh] + sqrt (U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] - 4 * a[DQvmt8IALh] * c[DQvmt8IALh])) / (2 * a[DQvmt8IALh]);
            printf ("x1=%.5lf;", x1);
            x2 = (-U8a1RHFs[DQvmt8IALh] - sqrt (U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] - 4 * a[DQvmt8IALh] * c[DQvmt8IALh])) / (2 * a[DQvmt8IALh]);
            printf ("x2=%.5lf\n", x2);
        }
        else if ((U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] - 4 * a[DQvmt8IALh] * c[DQvmt8IALh]) == 0) {
            x1 = x2 = (-U8a1RHFs[DQvmt8IALh]) / (2 * a[DQvmt8IALh]);
            printf ("x1=x2=%.5lf\n", x1);
        }
        else {
            DeM6dS = sqrt (-U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] + 4 * a[DQvmt8IALh] * c[DQvmt8IALh]) / (2 * a[DQvmt8IALh]);
            uIOC7MBP = -(sqrt (-U8a1RHFs[DQvmt8IALh] * U8a1RHFs[DQvmt8IALh] + 4 * a[DQvmt8IALh] * c[DQvmt8IALh]) / (2 * a[DQvmt8IALh]));
            p = (-U8a1RHFs[DQvmt8IALh]) / (2 * a[DQvmt8IALh]);
            if (a > 0) {
                printf ("x1=%.5lf+%.5lfi;", p, DeM6dS);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("x2=%.5lf%.5lfi\n", p, uIOC7MBP);
            }
            else {
                printf ("x1=%.5lf%.5lfi;", p, DeM6dS);
                printf ("x2=%.5lf+%.5lfi\n", p, uIOC7MBP);
            };
        };
    }
    return 0;
}

