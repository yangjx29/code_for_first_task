int main () {
    double  DfIyWel;
    double  b;
    double  eoSHP35;
    double  IbYN8xLF7l;
    double  du;
    double  tWXw1vMSm4r;
    double  j25oEJtmVL0;
    scanf ("%lf", &DfIyWel);
    scanf ("%lf", &b);
    scanf ("%lf", &eoSHP35);
    scanf ("%lf", &IbYN8xLF7l);
    scanf ("%lf", &du);
    tWXw1vMSm4r = (DfIyWel +b + eoSHP35 + IbYN8xLF7l) / 2;
    j25oEJtmVL0 = (tWXw1vMSm4r - DfIyWel) * (tWXw1vMSm4r - b) * (tWXw1vMSm4r - eoSHP35) * (tWXw1vMSm4r - IbYN8xLF7l) - DfIyWel *b * eoSHP35 * IbYN8xLF7l *cos (du * 3.1415926 / (1216 - 856)) * cos (du * 3.1415926 / 360);
    if (j25oEJtmVL0 < 0)
        ;
    else
        printf ("%.4lf", sqrt (j25oEJtmVL0));
    return 0;
}

