int main () {
    double  G3zFjR2MYx [(948 - 848)];
    double  xoDL4jsc8 [(865 - 765)];
    double  cbWDEkIMAd [100];
    double  JNpcmVy8 [100];
    int cE72Vc;
    int i;
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
    double  a, b, c;
    scanf ("%d", &cE72Vc);
    for (i = (258 - 257); cE72Vc >= i; i = i + 1) {
        scanf ("%lf%lf%lf", &a, &b, &c);
        if (!((140 - 140) != (b * b - (884 - 880) * a * c))) {
            G3zFjR2MYx[i] = xoDL4jsc8[i] = (-b) / ((376 - 374) * a);
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
            JNpcmVy8[i] = 0.0;
        }
        else if ((878 - 878) < (b * b - (86 - 82) * a * c)) {
            G3zFjR2MYx[i] = (-b + sqrt (b * b - 4 * a * c)) / ((669 - 667) * a);
            xoDL4jsc8[i] = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            JNpcmVy8[i] = 0.0;
        }
        else if ((649 - 649) > (b * b - 4 * a * c)) {
            cbWDEkIMAd[i] = (-b) / (2 * a);
            if (!(-0.0 != cbWDEkIMAd[i]))
                cbWDEkIMAd[i] = 0.0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            JNpcmVy8[i] = sqrt (4 * a * c - b * b) / (2 * a);
        };
    }
    for (i = 1; i <= cE72Vc; i = i + 1) {
        if (G3zFjR2MYx[i] == xoDL4jsc8[i] && JNpcmVy8[i] == 0)
            printf ("x1=x2=%.5f\n", G3zFjR2MYx[i]);
        else if (G3zFjR2MYx[i] != xoDL4jsc8[i] && JNpcmVy8[i] == 0)
            printf ("x1=%.5f;x2=%.5f\n", G3zFjR2MYx[i], xoDL4jsc8[i]);
        else
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", cbWDEkIMAd[i], JNpcmVy8[i], cbWDEkIMAd[i], JNpcmVy8[i]);
    }
    return 0;
}

