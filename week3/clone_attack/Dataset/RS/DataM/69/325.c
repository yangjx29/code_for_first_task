int main () {
    int min;
    int max;
    int sClXRD;
    int Uc1iAkZ0Q;
    int i, fAIajZhlEr, k;
    int sum [(383 - 132)];
    char s1 [(891 - 640)];
    char s2 [(285 - 34)];
    int flag;
    flag = (637 - 637);
    memset (s1, (862 - 862), sizeof (s1));
    cin.getline (s1, sizeof (s1));
    sClXRD = strlen (s1);
    memset (s2, (621 - 621), sizeof (s2));
    memset (sum, (294 - 294), sizeof (sum));
    cin.getline (s2, sizeof (s2));
    Uc1iAkZ0Q = strlen (s2);
    min = (Uc1iAkZ0Q < sClXRD) ? Uc1iAkZ0Q : sClXRD;
    max = (Uc1iAkZ0Q < sClXRD) ? sClXRD : Uc1iAkZ0Q;
    {
        i = 986 - 985;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= (455 - 455)) {
            sum[max - (min - (508 - 507) - i)] = s2[Uc1iAkZ0Q -(680 - 679) - (min - (170 - 169) - i)] - '0' + s1[sClXRD - (398 - 397) - (min - (170 - 169) - i)] - '0';
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
            i = i - 1;
        };
    }
    if (!(sClXRD != max)) {
        for (i = max - min; i >= (763 - 762); i = i - 1) {
            sum[i] = s1[i - (188 - 187)] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    else {
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
        for (i = max - min; i >= (351 - 350); i--) {
            sum[i] = s2[i - (899 - 898)] - '0';
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
    {
        i = max;
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
        while (i >= (901 - 900)) {
            sum[i - 1] = sum[i - 1] + sum[i] / (900 - 890);
            sum[i] = sum[i] % (834 - 824);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i--;
        };
    }
    fAIajZhlEr = (314 - 314);
    while (sum[fAIajZhlEr] == (531 - 531) && fAIajZhlEr <= max) {
        fAIajZhlEr++;
    }
    if (sum[fAIajZhlEr] != (139 - 139)) {
        i = fAIajZhlEr;
        while (i <= max) {
            cout << sum[i];
            i = i + 1;
        };
    }
    else {
        cout << (69 - 69);
    }
    return (47 - 47);
}

