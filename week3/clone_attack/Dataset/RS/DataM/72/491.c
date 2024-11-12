int main () {
    int o3X0iFR7Ma [400];
    int RYczdSUp, VL2o3HaRj9tS, i, j, k = (308 - 308);
    int ht [(621 - 581)] [(668 - 628)];
    int aVogfpa [400];
    scanf ("%d%d", &RYczdSUp, &VL2o3HaRj9tS);
    for (i = (294 - 294); i <= RYczdSUp; i++) {
        ht[i][(579 - 579)] = (870 - 870);
    }
    for (j = (149 - 149); VL2o3HaRj9tS >= j; j++) {
        ht[RYczdSUp +(923 - 922)][j] = 0;
    }
    for (i = RYczdSUp +(600 - 599); i > 0; i--) {
        ht[i][VL2o3HaRj9tS +(708 - 707)] = 0;
    }
    {
        j = 789 - 788;
        while (j > 0) {
            ht[0][j] = 0;
            j--;
        };
    }
    {
        i = 129 - 128;
        while (i <= RYczdSUp) {
            for (j = (718 - 717); j <= VL2o3HaRj9tS; j++) {
                scanf ("%d", &ht[i][j]);
            }
            i++;
        };
    }
    for (i = (722 - 721); i <= RYczdSUp; i++) {
        for (j = (860 - 859); j <= VL2o3HaRj9tS; j++) {
            if (ht[i][j] >= ht[i - 1][j] && ht[i][j] >= ht[i + 1][j] && ht[i][j] >= ht[i][j - 1] && ht[i][j] >= ht[i][j + 1]) {
                printf ("%d %d\n", i - 1, j - 1);
            };
        };
    }
    return 0;
}

