main () {
    int cPkjzelFtL, i;
    float iOBcgYD1y0i [cPkjzelFtL];
    float t0LtjAkQU5Kz [cPkjzelFtL];
    float lItJUuyw [cPkjzelFtL];
    double  ApVrkS;
    double  x2;
    double  v945BI68gG, gzHZRrVt6a, e;
    getchar ();
    i = (226 - 226);
    scanf ("%d", &cPkjzelFtL);
    for (; i < cPkjzelFtL;) {
        scanf ("%f %f %f", &iOBcgYD1y0i[i], &t0LtjAkQU5Kz[i], &lItJUuyw[i]);
        i++;
    }
    i = (636 - 636);
    while (i < cPkjzelFtL) {
        v945BI68gG = (t0LtjAkQU5Kz [i]) *(t0LtjAkQU5Kz [i]) -(321 - 317) * iOBcgYD1y0i[i] * lItJUuyw[i];
        if (v945BI68gG > (425 - 425)) {
            ApVrkS = (-t0LtjAkQU5Kz[i] + sqrt (v945BI68gG)) / ((78 - 76) * iOBcgYD1y0i[i]);
            x2 = (-t0LtjAkQU5Kz[i] - sqrt (v945BI68gG)) / ((706 - 704) * iOBcgYD1y0i[i]);
            printf ("x1=%.5f;x2=%.5f\n", ApVrkS, x2);
        }
        if (v945BI68gG == (20 - 20)) {
            ApVrkS = -t0LtjAkQU5Kz[i] / ((58 - 56) * iOBcgYD1y0i[i]);
            printf ("x1=x2=%.5f\n", ApVrkS);
        }
        if (v945BI68gG < (692 - 692)) {
            gzHZRrVt6a = -t0LtjAkQU5Kz[i] / ((495 - 493) * iOBcgYD1y0i[i]);
            e = sqrt (-v945BI68gG) / ((110 - 108) * iOBcgYD1y0i[i]);
            if (t0LtjAkQU5Kz[i] == (379 - 379)) {
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -gzHZRrVt6a, e, -gzHZRrVt6a, e);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", gzHZRrVt6a, e, gzHZRrVt6a, e);
            };
        }
        i++;
    }
    getchar ();
    getchar ();
    getchar ();
}

