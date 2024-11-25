void  main () {
    double  kRYuP3D, b, GD7po5, d, x, s, YnFCyq;
    scanf ("%lf %lf %lf %lf %lf", &kRYuP3D, &b, &GD7po5, &d, &x);
    s = 0.5 * (kRYuP3D + b + GD7po5 +d);
    x = x / 2 / 360 * 2 * pai;
    YnFCyq = sqrt ((s - kRYuP3D) * (s - b) * (s - GD7po5) * (s - d) - kRYuP3D * b * GD7po5 *d * cos (x) * cos (x));
    if (((s - kRYuP3D) * (s - b) * (s - GD7po5) * (s - d) - kRYuP3D * b * GD7po5 *d * cos (x) * cos (x)) < 0) {
    }
    else {
        printf ("%.4lf", YnFCyq);
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
    };
}

