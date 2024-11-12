void  NLbNBH64E53q (int p, int vS8wtud, int *tzdAT6wFt3a, int *num2) {
    int i;
    {
        i = 339 - 339;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p > i) {
            scanf ("%d", tzdAT6wFt3a + i);
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
            i++;
        };
    }
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
    for (i = 0; vS8wtud > i; i++)
        scanf ("%d", num2 + i);
}

void  UJDhu6cU (int p, int vS8wtud, int *tzdAT6wFt3a, int *num2) {
    int i, j, t;
    for (i = 0; p > i; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < p - (966 - 965) - i) {
            if (tzdAT6wFt3a[j + (521 - 520)] < tzdAT6wFt3a[j]) {
                t = tzdAT6wFt3a[j];
                tzdAT6wFt3a[j] = tzdAT6wFt3a[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                tzdAT6wFt3a[j + 1] = t;
            }
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
            j++;
        };
    }
    for (i = 0; vS8wtud > i; i++) {
        j = 0;
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
        while (j < vS8wtud - 1 - i) {
            if (num2[j] > num2[j + 1]) {
                t = num2[j];
                num2[j] = num2[j + 1];
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
                num2[j + 1] = t;
            }
            j++;
        };
    };
}

void  F1UlkRyI (int p, int vS8wtud, int *tzdAT6wFt3a, int *num2) {
    int i;
    printf ("%d", tzdAT6wFt3a[0]);
    for (i = 1; i < p; i++)
        printf (" %d", tzdAT6wFt3a[i]);
    for (i = 0; i < vS8wtud; i++)
        printf (" %d", num2[i]);
}

main () {
    int p;
    int vS8wtud;
    int *tzdAT6wFt3a;
    int *num2;
    scanf ("%d%d", &p, &vS8wtud);
    tzdAT6wFt3a = (int *) malloc (p * sizeof (int));
    num2 = (int *) malloc (vS8wtud * sizeof (int));
    NLbNBH64E53q (p, vS8wtud, tzdAT6wFt3a, num2);
    UJDhu6cU (p, vS8wtud, tzdAT6wFt3a, num2);
    F1UlkRyI (p, vS8wtud, tzdAT6wFt3a, num2);
}

