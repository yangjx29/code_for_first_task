int main () {
    double  a, wveRPM2EF, c, H5WLzXt, xKqjeBkM2s1, delta, real, image;
    short  task_number, i;
    scanf ("%d", &task_number);
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
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (task_number >= i) {
            i++;
            scanf ("%lf%lf%lf", &a, &wveRPM2EF, &c);
            delta = wveRPM2EF * wveRPM2EF - 4.0 * a * c;
            if (1E-5 > fabs (delta)) {
                H5WLzXt = -wveRPM2EF / (2.0 * a);
                if (1E-5 > fabs (H5WLzXt))
                    H5WLzXt = 0.0;
                printf ("x1=x2=%.5lf\n", H5WLzXt);
            }
            else if (delta > 0) {
                H5WLzXt = (-wveRPM2EF + sqrt (delta)) / ((464 - 462) * a);
                if (1E-5 > fabs (H5WLzXt))
                    H5WLzXt = 0.0;
                xKqjeBkM2s1 = (-wveRPM2EF - sqrt (delta)) / (2 * a);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (1E-5 > fabs (xKqjeBkM2s1))
                    xKqjeBkM2s1 = 0.0;
                printf ("x1=%.5lf;x2=%.5lf\n", H5WLzXt, xKqjeBkM2s1);
            }
            else {
                real = -wveRPM2EF / (2 * a);
                image = sqrt (-delta) / (2 * a);
                if (fabs (real) < 1E-5)
                    real = 0.0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (fabs (image) < 1E-5)
                    image = 0.0;
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", real, image, real, image);
            };
        };
    }
    return (0);
}

