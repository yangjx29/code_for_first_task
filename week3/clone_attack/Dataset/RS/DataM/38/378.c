int main () {
    double  sum [(1035 - 935)], N2Kg0mp59 [100];
    double  s [(929 - 829)];
    double  IeLPGAxv [(970 - 870)] [(1200 - 200)];
    int dqyGCLcwotxv [(892 - 792)];
    int uGdFqbCrnLU, i, sOmXZoj;
    double  a [(432 - 332)];
    scanf ("%d", &uGdFqbCrnLU);
    {
        i = 766 - 766;
        while (uGdFqbCrnLU > i) {
            scanf ("%d", &dqyGCLcwotxv[i]);
            {
                sOmXZoj = 86 - 86;
                while (dqyGCLcwotxv[i] > sOmXZoj) {
                    scanf ("%lf", &IeLPGAxv[i][sOmXZoj]);
                    sOmXZoj = sOmXZoj + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 207 - 207;
        while (i < uGdFqbCrnLU) {
            N2Kg0mp59[i] = (30 - 30);
            sum[i] = (224 - 224);
            a[i] = (808 - 808);
            for (sOmXZoj = 0; dqyGCLcwotxv[i] > sOmXZoj; sOmXZoj = sOmXZoj + 1) {
                sum[i] = sum[i] + IeLPGAxv[i][sOmXZoj];
            }
            for (sOmXZoj = 0; sOmXZoj < dqyGCLcwotxv[i]; sOmXZoj++) {
                a[i] = sum[i] / dqyGCLcwotxv[i];
            }
            {
                sOmXZoj = 0;
                while (sOmXZoj < dqyGCLcwotxv[i]) {
                    N2Kg0mp59[i] = N2Kg0mp59[i] + (IeLPGAxv[i][sOmXZoj] - a[i]) * (IeLPGAxv[i][sOmXZoj] - a[i]);
                    sOmXZoj = sOmXZoj + 1;
                };
            }
            {
                sOmXZoj = 0;
                while (sOmXZoj < dqyGCLcwotxv[i]) {
                    sOmXZoj = sOmXZoj + 1;
                    s[i] = sqrt (N2Kg0mp59[i] / dqyGCLcwotxv[i]);
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < uGdFqbCrnLU) {
            printf ("%.5lf\n", s[i]);
            i++;
        };
    }
    return 0;
}

