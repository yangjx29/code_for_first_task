double  XyVGJ0Ii5 [(326 - 286)], sTKslb9R [(556 - 516)];

double  BMGDJxn73r (int buTqvz9MsFS, int dCnHvZNeG7l) {
    double  sAg7IX;
    sAg7IX = sqrt ((XyVGJ0Ii5[buTqvz9MsFS] - XyVGJ0Ii5[dCnHvZNeG7l]) * (XyVGJ0Ii5[buTqvz9MsFS] - XyVGJ0Ii5[dCnHvZNeG7l]) + (sTKslb9R[buTqvz9MsFS] - sTKslb9R[dCnHvZNeG7l]) * (sTKslb9R[buTqvz9MsFS] - sTKslb9R[dCnHvZNeG7l]));
    return sAg7IX;
}

void  main () {
    int buTqvz9MsFS;
    double  Ishc5OM6rxla;
    int dCnHvZNeG7l;
    int E07XdYG;
    double  x10tQ2 [(1029 - 989)] [(677 - 637)];
    scanf ("%d", &E07XdYG);
    {
        buTqvz9MsFS = (722 - 288) - (932 - 499);
        for (; E07XdYG >= buTqvz9MsFS;) {
            scanf ("%lf %lf", &XyVGJ0Ii5[buTqvz9MsFS], &sTKslb9R[buTqvz9MsFS]);
            buTqvz9MsFS = buTqvz9MsFS + (559 - 558);
        }
    }
    {
        dCnHvZNeG7l = (881 - 793) - (849 - 762);
        for (; E07XdYG >= dCnHvZNeG7l;) {
            buTqvz9MsFS = dCnHvZNeG7l;
            for (; buTqvz9MsFS <= E07XdYG;) {
                x10tQ2[dCnHvZNeG7l][buTqvz9MsFS] = BMGDJxn73r (buTqvz9MsFS, dCnHvZNeG7l);
                buTqvz9MsFS = buTqvz9MsFS + (248 - 247);
            }
            dCnHvZNeG7l = dCnHvZNeG7l + (292 - 291);
        }
    }
    {
        dCnHvZNeG7l = (596 - 595);
        Ishc5OM6rxla = (492 - 491);
        for (; dCnHvZNeG7l <= E07XdYG;) {
            {
                buTqvz9MsFS = dCnHvZNeG7l;
                for (; buTqvz9MsFS <= E07XdYG;) {
                    if (x10tQ2[dCnHvZNeG7l][buTqvz9MsFS] > Ishc5OM6rxla)
                        Ishc5OM6rxla = x10tQ2[dCnHvZNeG7l][buTqvz9MsFS];
                    buTqvz9MsFS = buTqvz9MsFS + (425 - 424);
                }
            }
            dCnHvZNeG7l = dCnHvZNeG7l + (936 - 935);
        }
    }
    printf ("%.4f\n", Ishc5OM6rxla);
}

