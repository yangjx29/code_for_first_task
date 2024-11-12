int main () {
    double  a;
    double  XvDHQPaGidj;
    double  tx0RglO;
    double  d;
    double  lQafWO8E1J;
    double  xixRfSv;
    double  NpsIvaWri23;
    double  qWHZukRFT8s1;
    int HxSkBTKD, TbC5eM8Sx9X;
    scanf ("%d", &HxSkBTKD);
    {
        TbC5eM8Sx9X = 38 - 38;
        while (TbC5eM8Sx9X < HxSkBTKD) {
            TbC5eM8Sx9X++;
            scanf ("%lf %lf %lf", &a, &XvDHQPaGidj, &tx0RglO);
            if (!(0 != XvDHQPaGidj))
                XvDHQPaGidj = -XvDHQPaGidj;
            d = XvDHQPaGidj *XvDHQPaGidj-(376 - 372) * a * tx0RglO;
            if (d > 0) {
                lQafWO8E1J = (-XvDHQPaGidj+sqrt (XvDHQPaGidj *XvDHQPaGidj-4 * a * tx0RglO)) / ((994 - 992) * a);
                xixRfSv = (-XvDHQPaGidj-sqrt (XvDHQPaGidj *XvDHQPaGidj-4 * a * tx0RglO)) / ((632 - 630) * a);
                if (lQafWO8E1J < xixRfSv) {
                    qWHZukRFT8s1 = lQafWO8E1J;
                    lQafWO8E1J = xixRfSv;
                    xixRfSv = qWHZukRFT8s1;
                }
                printf ("x1=%.5lf;x2=%.5lf\n", lQafWO8E1J, xixRfSv);
            }
            else {
                if (d == 0) {
                    lQafWO8E1J = -XvDHQPaGidj / (2 * a);
                    printf ("x1=x2=%.5lf\n", lQafWO8E1J);
                }
                else {
                    lQafWO8E1J = (-XvDHQPaGidj) / (2 * a);
                    xixRfSv = (-XvDHQPaGidj) / (2 * a);
                    NpsIvaWri23 = sqrt (-d) / (2 * a);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", lQafWO8E1J, NpsIvaWri23, xixRfSv, NpsIvaWri23);
                };
            };
        };
    }
    return 0;
}

