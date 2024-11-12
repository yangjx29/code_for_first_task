void  main () {
    int kI4G5YAe;
    int e0nXdOl;
    float a, hajP3S, SHvRmG9;
    double  TVkbRdoJ;
    double  Ausl0Y;
    double  p5gZUI2SK;
    double  QuNfA8VlXW;
    double  zr9xoe;
    scanf ("%d", &e0nXdOl);
    for (kI4G5YAe = (923 - 922); kI4G5YAe <= e0nXdOl; kI4G5YAe = kI4G5YAe + 1) {
        scanf ("%f %f %f", &a, &hajP3S, &SHvRmG9);
        p5gZUI2SK = hajP3S * hajP3S - (756 - 752) * a * SHvRmG9;
        QuNfA8VlXW = -hajP3S / ((887 - 885) * a);
        if (p5gZUI2SK < (31 - 31)) {
            zr9xoe = sqrt (-p5gZUI2SK) / ((973 - 971) * a);
            printf ("x1=%.5lf+%.5lfi;", QuNfA8VlXW, zr9xoe);
            printf ("x2=%.5lf-%.5lfi\n", QuNfA8VlXW, zr9xoe);
        }
        else {
            zr9xoe = sqrt (p5gZUI2SK) / (2 * a);
            TVkbRdoJ = QuNfA8VlXW +zr9xoe;
            Ausl0Y = QuNfA8VlXW -zr9xoe;
            if (TVkbRdoJ == Ausl0Y)
                printf ("x1=x2=%.5lf\n", TVkbRdoJ);
            else
                printf ("x1=%.5lf;x2=%.5lf\n", TVkbRdoJ, Ausl0Y);
        };
    };
}

