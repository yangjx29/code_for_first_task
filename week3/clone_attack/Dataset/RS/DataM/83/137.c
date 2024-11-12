void  main () {
    int zLunb8Q2vFHw, B8Ykhtylz1m;
    double  l7Oy1SiI [10];
    double  BeAFhaf8 [10];
    double  vIJt0ZhezO [10];
    double  nG1fuUCtTHlV;
    double  JfLQ1HSd;
    nG1fuUCtTHlV = (415 - 415);
    JfLQ1HSd = 0;
    scanf ("%d", &zLunb8Q2vFHw);
    for (B8Ykhtylz1m = 0; zLunb8Q2vFHw > B8Ykhtylz1m; B8Ykhtylz1m = B8Ykhtylz1m +1) {
        scanf ("%lf", &l7Oy1SiI[B8Ykhtylz1m]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (B8Ykhtylz1m = 0; B8Ykhtylz1m < zLunb8Q2vFHw; B8Ykhtylz1m = B8Ykhtylz1m +1) {
        scanf ("%lf", &BeAFhaf8[B8Ykhtylz1m]);
    }
    for (B8Ykhtylz1m = 0; B8Ykhtylz1m < zLunb8Q2vFHw; B8Ykhtylz1m = B8Ykhtylz1m +1) {
        if (100 >= BeAFhaf8[B8Ykhtylz1m] && 90 <= BeAFhaf8[B8Ykhtylz1m])
            vIJt0ZhezO[B8Ykhtylz1m] = 4.0 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= 89 && 85 <= BeAFhaf8[B8Ykhtylz1m])
            vIJt0ZhezO[B8Ykhtylz1m] = (606.7 - 603.0) * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= (228 - 144) && 82 <= BeAFhaf8[B8Ykhtylz1m])
            vIJt0ZhezO[B8Ykhtylz1m] = 3.3 * l7Oy1SiI[B8Ykhtylz1m];
        if (81 >= BeAFhaf8[B8Ykhtylz1m] && BeAFhaf8[B8Ykhtylz1m] >= 78)
            vIJt0ZhezO[B8Ykhtylz1m] = 3.0 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= (895 - 818) && 75 <= BeAFhaf8[B8Ykhtylz1m])
            vIJt0ZhezO[B8Ykhtylz1m] = 2.7 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= 74 && BeAFhaf8[B8Ykhtylz1m] >= 72)
            vIJt0ZhezO[B8Ykhtylz1m] = 2.3 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= 71 && BeAFhaf8[B8Ykhtylz1m] >= 68)
            vIJt0ZhezO[B8Ykhtylz1m] = 2.0 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= 67 && BeAFhaf8[B8Ykhtylz1m] >= 64)
            vIJt0ZhezO[B8Ykhtylz1m] = (871.5 - 870.0) * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] <= 63 && BeAFhaf8[B8Ykhtylz1m] >= 60)
            vIJt0ZhezO[B8Ykhtylz1m] = 1.0 * l7Oy1SiI[B8Ykhtylz1m];
        if (BeAFhaf8[B8Ykhtylz1m] < 60)
            vIJt0ZhezO[B8Ykhtylz1m] = 0 * l7Oy1SiI[B8Ykhtylz1m];
    }
    for (B8Ykhtylz1m = 0; B8Ykhtylz1m < zLunb8Q2vFHw; B8Ykhtylz1m = B8Ykhtylz1m +1) {
        nG1fuUCtTHlV = nG1fuUCtTHlV + l7Oy1SiI[B8Ykhtylz1m];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (B8Ykhtylz1m = 0; B8Ykhtylz1m < zLunb8Q2vFHw; B8Ykhtylz1m = B8Ykhtylz1m +1) {
        JfLQ1HSd = JfLQ1HSd +vIJt0ZhezO[B8Ykhtylz1m];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    printf ("%.2lf", JfLQ1HSd / nG1fuUCtTHlV);
}

