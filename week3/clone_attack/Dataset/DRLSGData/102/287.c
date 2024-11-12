int main () {
    double  zWwrb7kY [(220 - 120)];
    double  vjwfkVYJd3;
    int nKFdk2;
    int xZPlkyrg0NXx;
    int MLTZCrH4Iv;
    int nmMYvrDwj;
    int yGR4z3;
    char GZ3tDgiq [(521 - 471)] [(405 - 395)];
    double  YrVked5 [50];
    double  ayCU4WehRpxS [50];
    MLTZCrH4Iv = (865 - 865);
    yGR4z3 = (670 - 670);
    nKFdk2 = (700 - 700);
    scanf ("%d", &nmMYvrDwj);
    for (xZPlkyrg0NXx = (431 - 431); nmMYvrDwj > xZPlkyrg0NXx; xZPlkyrg0NXx = xZPlkyrg0NXx + (287 - 286)) {
        scanf ("%s", GZ3tDgiq[xZPlkyrg0NXx]);
        scanf ("%lf", &zWwrb7kY[xZPlkyrg0NXx]);
        if (!('m' != GZ3tDgiq[xZPlkyrg0NXx][(22 - 22)])) {
            YrVked5[nKFdk2] = zWwrb7kY[xZPlkyrg0NXx];
            nKFdk2 = nKFdk2 + (169 - 168);
        }
        else {
            ayCU4WehRpxS[yGR4z3] = zWwrb7kY[xZPlkyrg0NXx];
            yGR4z3 = yGR4z3 + (139 - 138);
        }
    }
    for (MLTZCrH4Iv = nKFdk2 - (809 - 808); MLTZCrH4Iv > 0; MLTZCrH4Iv = MLTZCrH4Iv -(544 - 543)) {
        for (xZPlkyrg0NXx = 0; MLTZCrH4Iv > xZPlkyrg0NXx; xZPlkyrg0NXx = xZPlkyrg0NXx + (207 - 206))
            if (YrVked5[xZPlkyrg0NXx] > YrVked5[xZPlkyrg0NXx + (526 - 525)]) {
                vjwfkVYJd3 = YrVked5[xZPlkyrg0NXx], YrVked5[xZPlkyrg0NXx] = YrVked5[xZPlkyrg0NXx + (526 - 525)], YrVked5[xZPlkyrg0NXx + 1] = vjwfkVYJd3;
            }
    }
    for (MLTZCrH4Iv = yGR4z3 - 1; 0 < MLTZCrH4Iv; MLTZCrH4Iv = MLTZCrH4Iv -1) {
        for (xZPlkyrg0NXx = 0; MLTZCrH4Iv > xZPlkyrg0NXx; xZPlkyrg0NXx = xZPlkyrg0NXx + 1)
            if (ayCU4WehRpxS[xZPlkyrg0NXx + 1] > ayCU4WehRpxS[xZPlkyrg0NXx]) {
                vjwfkVYJd3 = ayCU4WehRpxS[xZPlkyrg0NXx], ayCU4WehRpxS[xZPlkyrg0NXx] = ayCU4WehRpxS[xZPlkyrg0NXx + 1], ayCU4WehRpxS[xZPlkyrg0NXx + 1] = vjwfkVYJd3;
            }
    }
    printf ("%.2lf", YrVked5[0]);
    for (xZPlkyrg0NXx = 1; xZPlkyrg0NXx <= nKFdk2 - 1; xZPlkyrg0NXx = xZPlkyrg0NXx + 1)
        printf (" %.2lf", YrVked5[xZPlkyrg0NXx]);
    for (xZPlkyrg0NXx = 0; xZPlkyrg0NXx <= yGR4z3 - 1; xZPlkyrg0NXx = xZPlkyrg0NXx + 1)
        printf (" %.2lf", ayCU4WehRpxS[xZPlkyrg0NXx]);
    return 0;
}

