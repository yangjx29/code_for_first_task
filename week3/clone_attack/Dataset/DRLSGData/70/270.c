void  main () {
    int n, gRo47KdQ, p1KiuI9MQ4P;
    double  caF46QsXLScO [(118 - 18)] [2];
    double  dFOZyztvIWKH;
    double  wxwU0kezY;
    scanf ("%d", &n);
    for (gRo47KdQ = (528 - 528); n > gRo47KdQ; gRo47KdQ = gRo47KdQ + (983 - 982))
        for (p1KiuI9MQ4P = (980 - 980); 2 > p1KiuI9MQ4P; p1KiuI9MQ4P = p1KiuI9MQ4P + (723 - 722))
            scanf ("%lf", &caF46QsXLScO[gRo47KdQ][p1KiuI9MQ4P]);
    dFOZyztvIWKH = (caF46QsXLScO[(189 - 189)][(28 - 28)] - caF46QsXLScO[(894 - 893)][0]) * (caF46QsXLScO[0][0] - caF46QsXLScO[(341 - 340)][0]) + (caF46QsXLScO[0][(947 - 946)] - caF46QsXLScO[(255 - 254)][1]) * (caF46QsXLScO[0][1] - caF46QsXLScO[1][1]);
    for (gRo47KdQ = 0; n > gRo47KdQ; gRo47KdQ = gRo47KdQ + 1) {
        for (p1KiuI9MQ4P = gRo47KdQ + 1; p1KiuI9MQ4P < n; p1KiuI9MQ4P = p1KiuI9MQ4P + 1) {
            wxwU0kezY = (caF46QsXLScO[gRo47KdQ][0] - caF46QsXLScO[p1KiuI9MQ4P][0]) * (caF46QsXLScO[gRo47KdQ][0] - caF46QsXLScO[p1KiuI9MQ4P][0]) + (caF46QsXLScO[gRo47KdQ][1] - caF46QsXLScO[p1KiuI9MQ4P][1]) * (caF46QsXLScO[gRo47KdQ][1] - caF46QsXLScO[p1KiuI9MQ4P][1]);
            if (wxwU0kezY > dFOZyztvIWKH)
                dFOZyztvIWKH = wxwU0kezY;
        }
    }
    dFOZyztvIWKH = sqrt (dFOZyztvIWKH);
    printf ("%.4lf\n", dFOZyztvIWKH);
}

