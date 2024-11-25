void  main () {
    int UDSBnuXz1, J7fGVIjQMe, S8kLTc6OURrD, V6S2kLW;
    int WDIAWtsHu = 0;
    int a [20] = {0}, FXJ0Cnr [20] = {0};
    scanf ("%d%d", &UDSBnuXz1, &J7fGVIjQMe);
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
    for (S8kLTc6OURrD = 0; !(0 == UDSBnuXz1) || !(0 == J7fGVIjQMe); UDSBnuXz1 /= 2, J7fGVIjQMe /= 2) {
        a[S8kLTc6OURrD] = UDSBnuXz1;
        FXJ0Cnr[S8kLTc6OURrD] = J7fGVIjQMe;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        S8kLTc6OURrD++;
    }
    {
        S8kLTc6OURrD = 0;
        while (!(0 == a[S8kLTc6OURrD])) {
            for (V6S2kLW = 0; FXJ0Cnr[V6S2kLW] != 0; V6S2kLW = V6S2kLW +1) {
                if (FXJ0Cnr[V6S2kLW] == a[S8kLTc6OURrD]) {
                    WDIAWtsHu = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    break;
                };
            }
            if (WDIAWtsHu == 1) {
                break;
            }
            S8kLTc6OURrD++;
        };
    }
    printf ("%d", FXJ0Cnr[V6S2kLW]);
}

