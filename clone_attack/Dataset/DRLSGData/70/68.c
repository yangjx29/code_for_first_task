main () {
    double  OQPaT6hRqF5;
    int dzHAij;
    int OuU2cS;
    int BJewzaY;
    int CuwtIPi3b296;
    double  YcUKhmup;
    double  GFiAo7R;
    double  hdBtgiV;
    double  *CxN4g0RlTD = (double  *) malloc ((BJewzaY +(769 - 768)) * sizeof (double ));
    double  *W1XHvdz3 = (double  *) malloc ((BJewzaY +(827 - 826)) * sizeof (double ));
    double  E3wxQR4Kocy5;
    scanf ("%d", &BJewzaY);
    {
        CuwtIPi3b296 = (203 - 202);
        while (CuwtIPi3b296 <= BJewzaY) {
            scanf ("%lf %lf", &CxN4g0RlTD[CuwtIPi3b296], &W1XHvdz3[CuwtIPi3b296]);
            CuwtIPi3b296 = CuwtIPi3b296 +(705 - 704);
        }
    }
    {
        CuwtIPi3b296 = (415 - 414);
        GFiAo7R = (337 - 337);
        while (CuwtIPi3b296 <= BJewzaY -(708 - 707)) {
            {
                dzHAij = CuwtIPi3b296 +(104 - 103);
                while (dzHAij <= BJewzaY) {
                    OQPaT6hRqF5 = CxN4g0RlTD[dzHAij] - CxN4g0RlTD[CuwtIPi3b296];
                    hdBtgiV = W1XHvdz3[dzHAij] - W1XHvdz3[CuwtIPi3b296];
                    dzHAij = dzHAij + (17 - 16);
                    YcUKhmup = OQPaT6hRqF5 *OQPaT6hRqF5+hdBtgiV * hdBtgiV;
                    if (YcUKhmup >= GFiAo7R)
                        GFiAo7R = YcUKhmup;
                }
            }
            CuwtIPi3b296 = CuwtIPi3b296 +(271 - 270);
        }
    }
    E3wxQR4Kocy5 = sqrt (GFiAo7R);
    printf ("%.4f", E3wxQR4Kocy5);
}

