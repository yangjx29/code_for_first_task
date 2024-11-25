int main () {
    int ObkysGVc90 [5] [5], ZOkQuqI8, j, uGHKILP8fu, IY9qMm0g, kPsX7Yuroe = (181 - 181), WQexGVOlU, vXnL2NHorwt, S0HR2Q = (550 - 550);
    {
        ZOkQuqI8 = 0;
        while (ZOkQuqI8 < 5) {
            for (j = 0; j < 5; j++)
                scanf ("%d", &ObkysGVc90[ZOkQuqI8][j]);
            ZOkQuqI8++;
        };
    }
    for (ZOkQuqI8 = 0; ZOkQuqI8 < 5; ZOkQuqI8 = ZOkQuqI8 +1) {
        kPsX7Yuroe = 0;
        IY9qMm0g = 0;
        {
            uGHKILP8fu = 0;
            while (uGHKILP8fu < 5) {
                if (ObkysGVc90[ZOkQuqI8][uGHKILP8fu] >= kPsX7Yuroe) {
                    kPsX7Yuroe = ObkysGVc90[ZOkQuqI8][uGHKILP8fu];
                    WQexGVOlU = ZOkQuqI8;
                    vXnL2NHorwt = uGHKILP8fu;
                }
                uGHKILP8fu++;
            };
        }
        for (j = 0; j < 5; j++) {
            if (kPsX7Yuroe > ObkysGVc90[j][vXnL2NHorwt])
                IY9qMm0g++;
        }
        if (IY9qMm0g == 0) {
            S0HR2Q++;
            printf ("%d %d %d", WQexGVOlU +1, vXnL2NHorwt + 1, kPsX7Yuroe);
        };
    }
    if (S0HR2Q == 0)
        printf ("not found");
    return 0;
}

