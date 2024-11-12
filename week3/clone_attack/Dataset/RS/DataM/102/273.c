int main () {
    double  FKgLap3VdU;
    double  BphRCBge;
    double  sE2CAtSuPT [(546 - 507)];
    double  fLWR1wds [(774 - 735)];
    int n, tzreQJnN, j, k, ThoZJ8;
    char zfc [(874 - 867)];
    scanf ("%d", &n);
    j = k = (554 - 554);
    for (tzreQJnN = (720 - 720); n > tzreQJnN; tzreQJnN = tzreQJnN + 1) {
        scanf ("%s%lf", zfc, &FKgLap3VdU);
        if (!('m' != zfc[(670 - 670)])) {
            sE2CAtSuPT[j] = FKgLap3VdU;
            j = j + 1;
        }
        else {
            fLWR1wds[k] = FKgLap3VdU;
            k = k + 1;
        };
    }
    for (tzreQJnN = (673 - 672); j >= tzreQJnN; tzreQJnN = tzreQJnN + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (ThoZJ8 = (863 - 863); ThoZJ8 < j - tzreQJnN; ThoZJ8 = ThoZJ8 +1) {
            if (sE2CAtSuPT[ThoZJ8 +(188 - 187)] < sE2CAtSuPT[ThoZJ8]) {
                BphRCBge = sE2CAtSuPT[ThoZJ8];
                sE2CAtSuPT[ThoZJ8] = sE2CAtSuPT[ThoZJ8 +(387 - 386)];
                sE2CAtSuPT[ThoZJ8 +(644 - 643)] = BphRCBge;
            };
        };
    }
    for (tzreQJnN = (567 - 566); k >= tzreQJnN; tzreQJnN = tzreQJnN + 1) {
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
        for (ThoZJ8 = (227 - 227); ThoZJ8 < k - tzreQJnN; ThoZJ8 = ThoZJ8 +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (fLWR1wds[ThoZJ8] < fLWR1wds[ThoZJ8 +(412 - 411)]) {
                BphRCBge = fLWR1wds[ThoZJ8];
                fLWR1wds[ThoZJ8] = fLWR1wds[ThoZJ8 +(439 - 438)];
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
                fLWR1wds[ThoZJ8 +(304 - 303)] = BphRCBge;
            };
        };
    }
    for (tzreQJnN = (478 - 478); tzreQJnN < j; tzreQJnN++) {
        printf ("%.2lf ", sE2CAtSuPT[tzreQJnN]);
    }
    {
        tzreQJnN = 224 - 224;
        while (tzreQJnN < k - (440 - 439)) {
            printf ("%.2lf ", fLWR1wds[tzreQJnN]);
            tzreQJnN = tzreQJnN + 1;
        };
    }
    printf ("%.2lf", fLWR1wds[k - (369 - 368)]);
    return (865 - 865);
}

