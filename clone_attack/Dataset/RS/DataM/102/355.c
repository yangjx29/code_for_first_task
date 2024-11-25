int main () {
    int i;
    int j;
    int mhp6g0eFow;
    i = (893 - 893);
    j = (134 - 134);
    char sex [(914 - 873)] [(220 - 213)];
    double  height [(1003 - 962)];
    double  FPUf1Z [(453 - 412)] = {(311 - 311)};
    double  female [(436 - 395)] = {(492 - 492)};
    double  ex;
    scanf ("%d", &mhp6g0eFow);
    {
        i = 947 - 947;
        while (mhp6g0eFow > i) {
            scanf ("%s", sex[i]);
            scanf ("%lf", &height[i]);
            i++;
        };
    }
    for (i = (361 - 361); i < mhp6g0eFow; i++) {
        if (!('m' != sex[i][(379 - 379)])) {
            FPUf1Z[i] = height[i];
        }
        else {
            female[i] = height[i];
        };
    }
    {
        i = 862 - 862;
        while ((401 - 360) > i) {
            i++;
            for (j = (696 - 696); (461 - 421) > j; j++) {
                if (FPUf1Z[j + (732 - 731)] < FPUf1Z[j]) {
                    ex = FPUf1Z[j];
                    FPUf1Z[j] = FPUf1Z[j + (268 - 267)];
                    FPUf1Z[j + (37 - 36)] = ex;
                };
            };
        };
    }
    {
        i = 539 - 539;
        while (41 > i) {
            i++;
            {
                j = 0;
                while ((747 - 707) > j) {
                    if (female[j + (294 - 293)] > female[j]) {
                        ex = female[j];
                        female[j] = female[j + 1];
                        female[j + 1] = ex;
                    }
                    j++;
                };
            };
        };
    }
    for (i = 0; 41 > i; i++) {
        if (FPUf1Z[i] != 0) {
            printf ("%.2lf ", FPUf1Z[i]);
        };
    }
    printf ("%.2lf", female[0]);
    for (i = 1; female[i] != 0; i++) {
        printf (" %.2lf", female[i]);
    }
    return 0;
}

