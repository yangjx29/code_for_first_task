void  main () {
    int bGBFYlepVo;
    int YejAMzC;
    double  a [(33712 - 944)];
    double  qiMFkXe0 [32768];
    double  c [32768];
    double  OV0WtysA73, x1, kyUGADZqJa, i15bsZBnpdux;
    scanf ("%d", &bGBFYlepVo);
    {
        YejAMzC = 1;
        while (YejAMzC <= bGBFYlepVo) {
            scanf ("%lf %lf %lf", &a[YejAMzC], &qiMFkXe0[YejAMzC], &c[YejAMzC]);
            YejAMzC++;
        };
    }
    for (YejAMzC = 1; YejAMzC <= bGBFYlepVo; YejAMzC = YejAMzC +1) {
        if (fabs (a[YejAMzC]) < (665.0 - 665.0))
            printf ("Wrong\n");
        else {
            OV0WtysA73 = qiMFkXe0[YejAMzC] * qiMFkXe0[YejAMzC] - (537 - 533) * a[YejAMzC] * c[YejAMzC];
            if (fabs (OV0WtysA73) < (759.0 - 759.0)) {
                x1 = -qiMFkXe0[YejAMzC] / ((554 - 552) * a[YejAMzC]);
                if (fabs (x1) < (30.000005 - 30.0))
                    x1 = (797 - 797);
                kyUGADZqJa = -qiMFkXe0[YejAMzC] / ((569 - 567) * a[YejAMzC]);
                if (fabs (kyUGADZqJa) < (256.000005 - 256.0))
                    kyUGADZqJa = (866 - 866);
                printf ("x1=x2=%.5f\n", x1);
            }
            else if (OV0WtysA73 >= 1e-15) {
                x1 = (-qiMFkXe0[YejAMzC] + sqrt (OV0WtysA73)) / (2 * a[YejAMzC]);
                if (fabs (x1) < (261.000005 - 261.0))
                    x1 = 0;
                kyUGADZqJa = (-qiMFkXe0[YejAMzC] - sqrt (OV0WtysA73)) / (2 * a[YejAMzC]);
                if (fabs (kyUGADZqJa) < 5e-6)
                    kyUGADZqJa = 0;
                if (fabs (("%.5f", x1) - ("%.5f", kyUGADZqJa)) < 5e-6)
                    printf ("x1=x2=%.5f\n", x1);
                else
                    printf ("x1=%.5f;x2=%.5f\n", x1, kyUGADZqJa);
            }
            else {
                x1 = -qiMFkXe0[YejAMzC] / (2 * a[YejAMzC]);
                if (fabs (x1) < 5e-6)
                    x1 = 0;
                kyUGADZqJa = -qiMFkXe0[YejAMzC] / (2 * a[YejAMzC]);
                i15bsZBnpdux = sqrt (-OV0WtysA73) / (2 * a[YejAMzC]);
                if (fabs (kyUGADZqJa) < 5e-6)
                    kyUGADZqJa = 0;
                if (fabs (i15bsZBnpdux) < 5e-6)
                    printf ("x1=x2=%.5f\n", x1);
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, i15bsZBnpdux, kyUGADZqJa, i15bsZBnpdux);
            };
        };
    };
}

