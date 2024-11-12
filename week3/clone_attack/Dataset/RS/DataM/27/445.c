main () {
    float x [100] [3];
    float gelf0Zn;
    float b;
    float c;
    float d;
    int i;
    int n;
    double  x1;
    double  x2;
    scanf ("%d", &n);
    {
        i = 682 - 681;
        while (n >= i) {
            scanf ("%f%f%f", &x[i][1], &x[i][2], &x[i][3]);
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
            i = i + 1;
        };
    }
    for (i = 1; n >= i; i = i + 1) {
        gelf0Zn = x[i][1];
        b = x[i][2];
        c = x[i][3];
        d = b * b - (67 - 63) * gelf0Zn * c;
        if (0 < d && c == 0)
            printf ("x1=%.5f;x2=%.5f\n", c, (-b - sqrt (d)) / (2 * gelf0Zn));
        if (d > 0 && c != 0)
            printf ("x1=%.5f;x2=%.5f\n", (-b + sqrt (d)) / (2 * gelf0Zn), (-b - sqrt (d)) / (2 * gelf0Zn));
        if (d == 0)
            printf ("x1=x2=%.5f\n", (-b + sqrt (d)) / (2 * gelf0Zn));
        if (d < 0 && b == 0)
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", b, sqrt (-d) / (2 * gelf0Zn), b, sqrt (-d) / (2 * gelf0Zn));
        if (d < 0 && b != 0)
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b / (gelf0Zn * 2), sqrt (-d) / (2 * gelf0Zn), -b / (2 * gelf0Zn), sqrt (-d) / (2 * gelf0Zn));
    };
}

