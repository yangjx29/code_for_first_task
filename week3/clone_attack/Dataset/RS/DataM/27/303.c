void  main () {
    double  a, xMYOHU9, c, d, e;
    int Zh7MYexZgC6;
    int dEXpMWdHR;
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
    scanf ("%d", &Zh7MYexZgC6);
    for (dEXpMWdHR = 1; dEXpMWdHR <= Zh7MYexZgC6; dEXpMWdHR++) {
        scanf ("%lf %lf %lf", &a, &xMYOHU9, &c);
        if ((xMYOHU9 * xMYOHU9 - 4 * a * c) < 0) {
            d = (-(xMYOHU9 / (2 * a)));
            e = (sqrt (-xMYOHU9 * xMYOHU9 + 4 * a * c)) / (2 * a);
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
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d, e, d, e);
        }
        else if (0 <= (xMYOHU9 * xMYOHU9 - 4 * a * c)) {
            d = (-xMYOHU9 + sqrt (xMYOHU9 * xMYOHU9 - 4 * a * c)) / (2 * a);
            e = (-xMYOHU9 - sqrt (xMYOHU9 * xMYOHU9 - 4 * a * c)) / (2 * a);
            if (d == e)
                printf ("x1=x2=%.5f\n", d);
            else {
                if (!(d == e))
                    printf ("x1=%.5f;x2=%.5f\n", d, e);
            };
        };
    };
}

