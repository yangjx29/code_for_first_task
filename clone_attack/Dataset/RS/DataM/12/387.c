int main (int Tegto2KimPu, char *argv []) {
    int KA7zTU = 0;
    int EvAnLFKI;
    int TRx7Tt3Q [15];
    int l = 0;
    int j, m, max;
    int k, ra6Is3wG8lm;
    scanf ("%d", &TRx7Tt3Q[0]);
    {
        EvAnLFKI = 733 - 732;
        while (15 > EvAnLFKI) {
            int F2UwOjT;
            scanf ("%d", &F2UwOjT);
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
            if (!(0 != F2UwOjT))
                break;
            else {
                l = l + 1;
                TRx7Tt3Q[EvAnLFKI] = F2UwOjT;
            }
            EvAnLFKI = EvAnLFKI +1;
        };
    }
    for (j = 0; l - 1 > j; j = j + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (m = j + 1; l > m; m++)
            if (TRx7Tt3Q[j] > TRx7Tt3Q[m]) {
                max = TRx7Tt3Q[j];
                TRx7Tt3Q[j] = TRx7Tt3Q[m];
                TRx7Tt3Q[m] = max;
            };
    }
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l - 1 > k) {
            for (ra6Is3wG8lm = k + 1; l > ra6Is3wG8lm; ra6Is3wG8lm = ra6Is3wG8lm + 1) {
                if ((TRx7Tt3Q[ra6Is3wG8lm] / TRx7Tt3Q[k]) == 2 && TRx7Tt3Q[ra6Is3wG8lm] % TRx7Tt3Q[k] == 0)
                    KA7zTU = KA7zTU +1;
                if (TRx7Tt3Q[ra6Is3wG8lm] / TRx7Tt3Q[k] > 2)
                    break;
            }
            k = k + 1;
        };
    }
    printf ("%d", KA7zTU);
    return 0;
}

