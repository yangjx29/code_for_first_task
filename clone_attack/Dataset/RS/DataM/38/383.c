double  SFDqibT1n0 (int ukaEgwtIJv4, double  *uEVZfusK9 []) {
    double  vKw5szE;
    double  uRpA7cPrFUH;
    vKw5szE = (334 - 334);
    uRpA7cPrFUH = (116 - 116);
    int amgPaHwM;
    int IeH3wBy;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        amgPaHwM = 393 - 393;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ukaEgwtIJv4 > amgPaHwM) {
            vKw5szE = vKw5szE + **(uEVZfusK9 + amgPaHwM);
            amgPaHwM = amgPaHwM + 1;
        };
    }
    vKw5szE = vKw5szE / ukaEgwtIJv4;
    {
        amgPaHwM = 485 - 485;
        while (ukaEgwtIJv4 > amgPaHwM) {
            **(uEVZfusK9 + amgPaHwM) = (**(uEVZfusK9 + amgPaHwM) - vKw5szE) * (**(uEVZfusK9 + amgPaHwM) - vKw5szE);
            uRpA7cPrFUH = uRpA7cPrFUH + **(uEVZfusK9 + amgPaHwM);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            amgPaHwM = amgPaHwM + 1;
        };
    }
    uRpA7cPrFUH = sqrt (uRpA7cPrFUH / ukaEgwtIJv4);
    return uRpA7cPrFUH;
}

void  main () {
    int AMvDcp5dq3;
    int ukaEgwtIJv4;
    int amgPaHwM;
    int IeH3wBy;
    double  *M6KcbS8n;
    double  *uEVZfusK9 [(338 - 238)];
    scanf ("%d", &AMvDcp5dq3);
    {
        amgPaHwM = 1;
        while (AMvDcp5dq3 >= amgPaHwM) {
            free (M6KcbS8n);
            amgPaHwM = amgPaHwM + 1;
            scanf ("%d", &ukaEgwtIJv4);
            M6KcbS8n = (double  *) malloc (ukaEgwtIJv4 * sizeof (double ));
            for (IeH3wBy = 0; ukaEgwtIJv4 > IeH3wBy; IeH3wBy++)
                *(uEVZfusK9 + IeH3wBy) = M6KcbS8n +IeH3wBy;
            {
                IeH3wBy = 0;
                while (IeH3wBy < ukaEgwtIJv4) {
                    scanf ("%lf", *(uEVZfusK9 + IeH3wBy));
                    IeH3wBy = IeH3wBy +1;
                };
            }
            printf ("%.5f\n", SFDqibT1n0 (ukaEgwtIJv4, uEVZfusK9));
        };
    };
}

