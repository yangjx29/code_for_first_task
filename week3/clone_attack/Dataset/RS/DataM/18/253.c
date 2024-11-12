int main () {
    int sPXaOmNq9I, a [100] [100], LAHEKk, j, t, k, XXfgqHSA, cfyxuROvS4Jg, sum;
    cin >> sPXaOmNq9I;
    for (t = (904 - 904); t < sPXaOmNq9I; t = t + 1) {
        sum = (674 - 674);
        for (LAHEKk = (593 - 593); sPXaOmNq9I > LAHEKk; LAHEKk = LAHEKk +1) {
            for (j = (193 - 193); j < sPXaOmNq9I; j = j + 1) {
                cin >> a[LAHEKk][j];
            };
        }
        XXfgqHSA = sPXaOmNq9I;
        for (k = 0; sPXaOmNq9I - (916 - 915) > k; k++) {
            for (LAHEKk = 0; XXfgqHSA > LAHEKk; LAHEKk = LAHEKk +1) {
                cfyxuROvS4Jg = a[LAHEKk][0];
                {
                    j = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (XXfgqHSA > j) {
                        if (a[LAHEKk][j] < cfyxuROvS4Jg)
                            cfyxuROvS4Jg = a[LAHEKk][j];
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
                        j = j + 1;
                    };
                }
                for (j = 0; j < XXfgqHSA; j = j + 1) {
                    a[LAHEKk][j] = a[LAHEKk][j] - cfyxuROvS4Jg;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            for (j = 0; j < XXfgqHSA; j = j + 1) {
                cfyxuROvS4Jg = a[0][j];
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
                for (LAHEKk = 1; LAHEKk < XXfgqHSA; LAHEKk++) {
                    if (a[LAHEKk][j] < cfyxuROvS4Jg)
                        cfyxuROvS4Jg = a[LAHEKk][j];
                }
                for (LAHEKk = 0; LAHEKk < XXfgqHSA; LAHEKk++) {
                    a[LAHEKk][j] = a[LAHEKk][j] - cfyxuROvS4Jg;
                };
            }
            sum = sum + a[1][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (LAHEKk = (80 - 78); LAHEKk < XXfgqHSA; LAHEKk++) {
                for (j = 0; j < XXfgqHSA; j++) {
                    a[LAHEKk -1][j] = a[LAHEKk][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            for (j = 2; j < XXfgqHSA; j++) {
                for (LAHEKk = 0; LAHEKk < XXfgqHSA; LAHEKk++) {
                    a[LAHEKk][j - 1] = a[LAHEKk][j];
                };
            }
            XXfgqHSA--;
        }
        cout << sum << endl;
    }
    return 0;
}

