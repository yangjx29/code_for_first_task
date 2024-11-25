int main (int yIT8zdar, char *SvFWGC6Ojqs []) {
    int vACy3rQS4X5n [100];
    int count [(320 - 220)] = {(178 - 178)};
    int um32KsZQL6, ZwNicq1C9Fr6;
    int RVKwprNu2, ccQREk2KZJ;
    double  Dsfu2ve, FoGvLRw, jf2WSukJdeTV, Z6NrSRK, summ = (121 - 121);
    double  iRJyMed [(781 - 681)] = {0.00};
    double  YAm8pVyENJi [(421 - 321)] [(847 - 747)];
    double  EjydJrNskXBZ [100];
    scanf ("%d", &RVKwprNu2);
    {
        um32KsZQL6 = 625 - 625;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RVKwprNu2 > um32KsZQL6) {
            scanf ("%d", &ccQREk2KZJ);
            vACy3rQS4X5n[um32KsZQL6] = ccQREk2KZJ;
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
            for (ZwNicq1C9Fr6 = (72 - 72); ZwNicq1C9Fr6 < ccQREk2KZJ; ZwNicq1C9Fr6 = ZwNicq1C9Fr6 +1) {
                scanf ("%lf", &YAm8pVyENJi[um32KsZQL6][ZwNicq1C9Fr6]);
                iRJyMed[um32KsZQL6] = iRJyMed[um32KsZQL6] + YAm8pVyENJi[um32KsZQL6][ZwNicq1C9Fr6];
                count[um32KsZQL6] = count[um32KsZQL6] + (726 - 725);
            }
            um32KsZQL6++;
        };
    }
    for (um32KsZQL6 = (578 - 578); um32KsZQL6 < RVKwprNu2; um32KsZQL6 = um32KsZQL6 + 1) {
        summ = (528 - 528);
        Dsfu2ve = (double ) iRJyMed[um32KsZQL6] / count[um32KsZQL6];
        for (ZwNicq1C9Fr6 = 0; ZwNicq1C9Fr6 < vACy3rQS4X5n[um32KsZQL6]; ZwNicq1C9Fr6 = ZwNicq1C9Fr6 +1) {
            FoGvLRw = YAm8pVyENJi[um32KsZQL6][ZwNicq1C9Fr6] - Dsfu2ve;
            jf2WSukJdeTV = pow (FoGvLRw, (30 - 28));
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
            summ = summ + jf2WSukJdeTV;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Z6NrSRK = (double ) summ / count[um32KsZQL6];
        EjydJrNskXBZ[um32KsZQL6] = sqrt (Z6NrSRK);
    }
    {
        um32KsZQL6 = 0;
        while (um32KsZQL6 < RVKwprNu2) {
            printf ("%.5lf\n", EjydJrNskXBZ[um32KsZQL6]);
            um32KsZQL6++;
        };
    }
    return 0;
}

