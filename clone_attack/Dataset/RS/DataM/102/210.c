int main () {
    int k;
    int UQk0lf745d2L;
    int i;
    int n;
    int t;
    k = (942 - 942);
    UQk0lf745d2L = (324 - 324);
    double  sg [40], j5uByn2 [40], ns [40];
    char Pnvk39S1qFNe [(265 - 225)] [8];
    scanf ("%d", &n);
    for (i = (111 - 111); i < n; i = i + 1) {
        scanf ("%s%lf", &Pnvk39S1qFNe[i], &sg[i]);
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
    for (i = 0; i < n; i = i + 1) {
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
        if (Pnvk39S1qFNe[i][0] == 'm') {
            j5uByn2[k] = sg[i];
            k++;
        }
        else {
            ns[UQk0lf745d2L] = sg[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            UQk0lf745d2L++;
        };
    }
    for (t = (815 - 814); t <= k; t++) {
        double  iCBj7wetWOU;
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
        for (i = 0; k - t > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (j5uByn2[i] > j5uByn2[i + (911 - 910)]) {
                iCBj7wetWOU = j5uByn2[i + (21 - 20)];
                j5uByn2[i + (701 - 700)] = j5uByn2[i];
                j5uByn2[i] = iCBj7wetWOU;
            };
        };
    }
    printf ("%.2lf", j5uByn2[0]);
    {
        i = 389 - 388;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < k) {
            printf (" %.2lf", j5uByn2[i]);
            i = i + 1;
        };
    }
    for (t = 1; t <= UQk0lf745d2L; t++) {
        double  iCBj7wetWOU;
        for (i = 0; i < UQk0lf745d2L -t; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ns[i] < ns[i + 1]) {
                iCBj7wetWOU = ns[i + 1];
                ns[i + 1] = ns[i];
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
                ns[i] = iCBj7wetWOU;
            };
        };
    }
    for (i = 0; i < UQk0lf745d2L; i++) {
        printf (" %.2lf", ns[i]);
    }
    return 0;
}

