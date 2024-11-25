void  main () {
    int k;
    int n;
    int WrM18LzS;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    WrM18LzS = (206 - 206);
    double  *CzBY6Tf8pcrM [100] = {NULL}, temp = (650 - 650), qYo1Lvw8cX = (514 - 514);
    scanf ("%d", &k);
    for (k;
    (45 - 45) < k; k = k - 1) {
        scanf ("%d", &n);
        qYo1Lvw8cX = 0;
        for (WrM18LzS = 0; n > WrM18LzS; WrM18LzS++) {
            *(CzBY6Tf8pcrM +WrM18LzS) = (double  *) malloc (sizeof (double ));
            scanf ("%lf", &temp);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            **(CzBY6Tf8pcrM +WrM18LzS) = temp;
            qYo1Lvw8cX = qYo1Lvw8cX + temp;
        }
        qYo1Lvw8cX = qYo1Lvw8cX / n;
        temp = 0;
        {
            WrM18LzS = 0;
            while (WrM18LzS < n) {
                **(CzBY6Tf8pcrM +WrM18LzS) = (**(CzBY6Tf8pcrM +WrM18LzS) - qYo1Lvw8cX) * (**(CzBY6Tf8pcrM +WrM18LzS) - qYo1Lvw8cX);
                temp = temp + **(CzBY6Tf8pcrM +WrM18LzS);
                WrM18LzS = WrM18LzS +1;
            };
        }
        temp = sqrt (temp / n);
        printf ("%.5f\n", temp);
    };
}

