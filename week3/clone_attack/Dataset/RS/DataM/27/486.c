int main () {
    int number;
    float uCexL4;
    float b;
    float c;
    double  delta;
    delta = 0;
    scanf ("%d", &number);
    while (number--) {
        scanf ("%f %f %f", &uCexL4, &b, &c);
        delta = b * b - 4 * uCexL4 * c;
        if (delta > 0) {
            double  x1;
            double  NzjQe7kVKiYR;
            x1 = (-b + sqrt (delta)) / (2 * uCexL4);
            NzjQe7kVKiYR = (-b - sqrt (delta)) / (2 * uCexL4);
            printf ("x1=%.5f;x2=%.5f\n", x1, NzjQe7kVKiYR);
        }
        else if (delta == 0) {
            double  x;
            x = (-b) / (2 * uCexL4);
            printf ("x1=x2=%.5f\n", x);
        }
        else {
            delta = -delta;
            if (b == 0) {
                double  xfront = b / (2 * uCexL4);
                double  xbehind;
                xbehind = sqrt (delta) / (2 * uCexL4);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", xfront, xbehind, xfront, xbehind);
            }
            else {
                double  xfront = (-b) / (2 * uCexL4);
                double  xbehind;
                xbehind = sqrt (delta) / (2 * uCexL4);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", xfront, xbehind, xfront, xbehind);
            };
        };
    };
}

