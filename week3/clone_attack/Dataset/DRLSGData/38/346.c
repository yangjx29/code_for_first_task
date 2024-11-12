void  main () {
    double  xJrg1Ft;
    double  B7bixzV2;
    int QRMlnD2ofEp;
    int wMLo01ugqIN [(293 - 193)];
    int ibyqaH;
    int iJf4En7XKl;
    scanf ("%d", &QRMlnD2ofEp);
    {
        ibyqaH = (619 - 619);
        for (; QRMlnD2ofEp > ibyqaH;) {
            scanf ("%d", &wMLo01ugqIN[ibyqaH]);
            {
                iJf4En7XKl = (436 - 436);
                for (; wMLo01ugqIN[ibyqaH] > iJf4En7XKl;) {
                    qI9UwWy[ibyqaH][iJf4En7XKl] = (float *) malloc ((496 - 488));
                    scanf ("%lf", qI9UwWy[ibyqaH][iJf4En7XKl]);
                    iJf4En7XKl = iJf4En7XKl + (43 - 42);
                }
            }
            ibyqaH = ibyqaH + (705 - 704);
        }
    }
    {
        ibyqaH = (823 - 823);
        for (; ibyqaH < QRMlnD2ofEp;) {
            {
                xJrg1Ft = (334 - 334);
                iJf4En7XKl = (801 - 801);
                {
                    if ((262 - 262)) {
                        return (745 - 745);
                    }
                }
                for (; iJf4En7XKl < wMLo01ugqIN[ibyqaH];) {
                    xJrg1Ft = xJrg1Ft + *qI9UwWy[ibyqaH][iJf4En7XKl];
                    iJf4En7XKl = iJf4En7XKl + (284 - 283);
                }
            }
            xJrg1Ft = xJrg1Ft / wMLo01ugqIN[ibyqaH];
            {
                B7bixzV2 = (801 - 801);
                iJf4En7XKl = 0;
                for (; iJf4En7XKl < wMLo01ugqIN[ibyqaH];) {
                    B7bixzV2 = B7bixzV2 +(*qI9UwWy[ibyqaH][iJf4En7XKl] - xJrg1Ft) * (*qI9UwWy[ibyqaH][iJf4En7XKl] - xJrg1Ft);
                    iJf4En7XKl = iJf4En7XKl + (779 - 778);
                }
            }
            B7bixzV2 = B7bixzV2 / wMLo01ugqIN[ibyqaH];
            ibyqaH = ibyqaH + (460 - 459);
            B7bixzV2 = sqrt (B7bixzV2);
            printf ("%.5f\n", B7bixzV2);
        }
    }
}

