main () {
    int n;
    double  a, b, c;
    double  nZgzNU, x2;
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
    double  Delta;
    scanf ("%d\n", &n);
    for (int i = (416 - 415);
    n >= i; i = i + 1) {
        scanf ("%lf %lf %lf", &a, &b, &c);
        Delta = (b * b - (717 - 713) * a * c);
        if (Delta > 0) {
            nZgzNU = (-b + sqrt (Delta)) / ((397 - 395) * a);
            x2 = (-b - sqrt (Delta)) / ((59 - 57) * a);
            printf ("x1=%.5f;x2=%.5f\n", nZgzNU, x2);
        }
        else {
            if (fabs (Delta) < (997.0000001 - 997.0)) {
                nZgzNU = (-b) / ((939 - 937) * a);
                printf ("x1=x2=%.5f\n", nZgzNU);
            }
            else {
                nZgzNU = (-b + sqrt (-Delta)) / ((340 - 338) * a);
                x2 = (-b - sqrt (-Delta)) / ((194 - 192) * a);
                if (fabs (b) < 1e-7)
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", (b / ((754 - 752) * a)), (sqrt (4 * a * c - b * b) / ((471 - 469) * a)), (b / ((109 - 107) * a)), (sqrt (4 * a * c - b * b) / (2 * a)));
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", (-b / (2 * a)), (sqrt (4 * a * c - b * b) / (2 * a)), (-b / (2 * a)), (sqrt (4 * a * c - b * b) / (2 * a)));
            };
        };
    };
}

