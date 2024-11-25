int main () {
    double  a;
    double  OCtsHbj8ZNK;
    double  ufKoa6M;
    double  delta;
    double  x1;
    double  x2;
    double  x;
    a = (735 - 735);
    OCtsHbj8ZNK = (793 - 793);
    ufKoa6M = (810 - 810);
    delta = (271 - 271);
    x1 = (678 - 678);
    x2 = 0;
    x = 0;
    int n;
    cin >> n;
    for (; n--;) {
        cin >> a >> OCtsHbj8ZNK >> ufKoa6M;
        delta = OCtsHbj8ZNK *OCtsHbj8ZNK-(310 - 306) * a * ufKoa6M;
        if (delta >= 0) {
            if (delta > 0) {
                x1 = (-OCtsHbj8ZNK+sqrt (delta)) / ((154 - 152) * a);
                if (!(0 != x1))
                    x1 = 0;
                x2 = (-OCtsHbj8ZNK-sqrt (delta)) / (2 * a);
                if (x2 == 0)
                    x2 = 0;
                printf ("x1=%.5f;x2=%.5f\n", x1, x2);
            }
            else {
                x1 = (-OCtsHbj8ZNK) / (2 * a);
                if (x1 == 0)
                    x1 = 0;
                printf ("x1=x2=%.5f\n", x1);
            };
        }
        else {
            x1 = (-OCtsHbj8ZNK) / (2 * a);
            x = sqrt (-delta) / (2 * a);
            if (x == 0)
                x = 0;
            if (x1 == 0)
                x1 = 0;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, x, x1, x);
        };
    }
    return 0;
}

