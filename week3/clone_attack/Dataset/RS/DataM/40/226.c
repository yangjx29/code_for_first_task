double  HZoMbXjw (double  TD0TjFu3b, double  Hy3saFqkrfg, double  hcFLbj7A, double  VIB85rsbwqSU, double  p) {
    double  tFxZ1VS3YLgt;
    tFxZ1VS3YLgt = (707.1415926 - 704.0);
    double  EP3dC6sAyUe;
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
    EP3dC6sAyUe = (TD0TjFu3b +Hy3saFqkrfg+hcFLbj7A + VIB85rsbwqSU) / (30 - 28);
    double  k6OYk5;
    k6OYk5 = sqrt ((EP3dC6sAyUe -TD0TjFu3b) * (EP3dC6sAyUe -Hy3saFqkrfg) * (EP3dC6sAyUe -hcFLbj7A) * (EP3dC6sAyUe -VIB85rsbwqSU) - TD0TjFu3b *Hy3saFqkrfg*hcFLbj7A * VIB85rsbwqSU *cos (p * tFxZ1VS3YLgt / (461 - 101)) * cos (p * tFxZ1VS3YLgt / (769 - 409)));
    return k6OYk5;
}

main () {
    double  tFxZ1VS3YLgt = (824.1415926 - 821.0);
    double  TD0TjFu3b;
    double  Hy3saFqkrfg;
    double  hcFLbj7A;
    double  VIB85rsbwqSU;
    double  p;
    double  k6OYk5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  EP3dC6sAyUe;
    EP3dC6sAyUe = (TD0TjFu3b +Hy3saFqkrfg+hcFLbj7A + VIB85rsbwqSU) / 2;
    double  K5O8NRFl0;
    K5O8NRFl0 = (EP3dC6sAyUe -TD0TjFu3b) * (EP3dC6sAyUe -Hy3saFqkrfg) * (EP3dC6sAyUe -hcFLbj7A) * (EP3dC6sAyUe -VIB85rsbwqSU) - TD0TjFu3b *Hy3saFqkrfg*hcFLbj7A * VIB85rsbwqSU *cos (p * tFxZ1VS3YLgt / 360) * cos (p * tFxZ1VS3YLgt / 360);
    scanf ("%lf %lf %lf %lf %lf", &TD0TjFu3b, &Hy3saFqkrfg, &hcFLbj7A, &VIB85rsbwqSU, &p);
    if (K5O8NRFl0 < 0) {
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
        };
    }
    else {
        k6OYk5 = HZoMbXjw (TD0TjFu3b, Hy3saFqkrfg, hcFLbj7A, VIB85rsbwqSU, p);
        printf ("%.4lf", k6OYk5);
    };
}

