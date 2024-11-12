void  main () {
    float z6DpH09mX [(280 - 180)] [2];
    double  prUFduA;
    double  p3iERa;
    prUFduA = (82 - 82);
    int jyPVavG, Bi5jUvypP, num;
    scanf ("%d", &num);
    for (jyPVavG = (507 - 507); num > jyPVavG; jyPVavG = jyPVavG + 1) {
        scanf ("%f %f", &z6DpH09mX[jyPVavG][(159 - 159)], &z6DpH09mX[jyPVavG][(261 - 260)]);
    }
    {
        jyPVavG = 247 - 247;
        while (num > jyPVavG) {
            {
                Bi5jUvypP = jyPVavG;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (num > Bi5jUvypP) {
                    p3iERa = (z6DpH09mX[jyPVavG][(660 - 660)] - z6DpH09mX[Bi5jUvypP][0]) * (z6DpH09mX[jyPVavG][0] - z6DpH09mX[Bi5jUvypP][0]) + (z6DpH09mX[jyPVavG][(786 - 785)] - z6DpH09mX[Bi5jUvypP][(724 - 723)]) * (z6DpH09mX[jyPVavG][1] - z6DpH09mX[Bi5jUvypP][1]);
                    Bi5jUvypP++;
                    if (p3iERa > prUFduA) {
                        prUFduA = p3iERa;
                    };
                };
            }
            jyPVavG++;
        };
    }
    printf ("%.4lf\n", sqrt (fabs (prUFduA)));
}

