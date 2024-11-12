int main () {
    double  d4Zd2Q;
    double  x2;
    int i;
    int w9lF2iO64J;
    struct   pare {
        double  yoFB47sHE;
        double  b;
        double  DHJcog;
    }
    p1 [EJLog9e];
    double  J37ozthnXR;
    double  rqxavLUTFYb;
    scanf ("%d", &w9lF2iO64J);
    {
        i = 704 - 704;
        while (w9lF2iO64J > i) {
            scanf ("%lf%lf%lf", &p1[i].yoFB47sHE, &p1[i].b, &p1[i].DHJcog);
            i++;
        };
    }
    {
        i = 0;
        while (i < w9lF2iO64J) {
            if (0 < (p1[i].b * p1[i].b) - 4 * p1[i].yoFB47sHE * p1[i].DHJcog) {
                d4Zd2Q = (-p1[i].b + sqrt (p1[i].b * p1[i].b - 4 * p1[i].yoFB47sHE * p1[i].DHJcog)) / (2 * p1[i].yoFB47sHE);
                x2 = (-p1[i].b - sqrt (p1[i].b * p1[i].b - 4 * p1[i].yoFB47sHE * p1[i].DHJcog)) / (2 * p1[i].yoFB47sHE);
                printf ("x1=%.5lf;x2=%.5lf\n", d4Zd2Q, x2);
            }
            if (!(0 != (p1[i].b * p1[i].b) - 4 * p1[i].yoFB47sHE * p1[i].DHJcog)) {
                d4Zd2Q = -p1[i].b / (2 * p1[i].yoFB47sHE);
                printf ("x1=x2=%.5lf\n", d4Zd2Q);
            }
            if (p1[i].b * p1[i].b - 4 * p1[i].yoFB47sHE * p1[i].DHJcog < 0) {
                rqxavLUTFYb = -p1[i].b / (2 * p1[i].yoFB47sHE);
                J37ozthnXR = (sqrt (-p1[i].b * p1[i].b + 4 * p1[i].yoFB47sHE * p1[i].DHJcog)) / (2 * p1[i].yoFB47sHE);
                if (p1[i].b == 0) {
                    printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", J37ozthnXR, J37ozthnXR);
                }
                else {
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", rqxavLUTFYb, J37ozthnXR, rqxavLUTFYb, J37ozthnXR);
                };
            }
            i++;
        };
    }
    return 0;
}

