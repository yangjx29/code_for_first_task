int main () {
    int a [100];
    int s9Dpm1HRaW, G53WpOMPd, IFWMOsrLPbo, LOhIptLM, m, n, OmFGhW, qCYJhNMwR, bHDbtkR5Z, HHPYqGM3kWx, temp;
    LOhIptLM = G53WpOMPd -1;
    G53WpOMPd = (922 - 921);
    scanf ("%d", &n);
    {
        s9Dpm1HRaW = 1;
        while (s9Dpm1HRaW <= n) {
            s9Dpm1HRaW = s9Dpm1HRaW + 1;
            scanf ("%d", &IFWMOsrLPbo);
            if (!(1 != IFWMOsrLPbo % 2)) {
                a[G53WpOMPd] = IFWMOsrLPbo;
                G53WpOMPd = G53WpOMPd +1;
            };
        };
    }
    {
        s9Dpm1HRaW = 1;
        while (LOhIptLM >= s9Dpm1HRaW) {
            for (G53WpOMPd = s9Dpm1HRaW; G53WpOMPd <= LOhIptLM; G53WpOMPd++) {
                if (a[s9Dpm1HRaW] >= a[G53WpOMPd]) {
                    temp = a[s9Dpm1HRaW];
                    a[s9Dpm1HRaW] = a[G53WpOMPd];
                    a[G53WpOMPd] = temp;
                };
            }
            s9Dpm1HRaW = s9Dpm1HRaW + 1;
        };
    }
    printf ("%d", a[1]);
    {
        s9Dpm1HRaW = 2;
        while (s9Dpm1HRaW <= LOhIptLM) {
            printf (",%d", a[s9Dpm1HRaW]);
            s9Dpm1HRaW++;
        };
    }
    return 0;
}

