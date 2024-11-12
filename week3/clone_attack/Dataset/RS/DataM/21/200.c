int main () {
    int H8SPTsEU;
    int j;
    int ik6XOnFx;
    int wbJR9WXCpHTD;
    int temp;
    int x [(1199 - 899)];
    int z [(1001 - 701)];
    float max;
    float iIG1gXnx;
    float StgbzyuExkO;
    float rFN0ES [300];
    max = (232 - 232);
    StgbzyuExkO = (129 - 129);
    wbJR9WXCpHTD = (40 - 40);
    scanf ("%d", &ik6XOnFx);
    {
        H8SPTsEU = 880 - 880;
        while (ik6XOnFx - (912 - 911) >= H8SPTsEU) {
            scanf ("%d", &x[H8SPTsEU]);
            StgbzyuExkO = StgbzyuExkO +x[H8SPTsEU];
            H8SPTsEU = H8SPTsEU +1;
        };
    }
    iIG1gXnx = StgbzyuExkO / ik6XOnFx;
    {
        H8SPTsEU = 185 - 185;
        while (H8SPTsEU <= ik6XOnFx - (432 - 431)) {
            rFN0ES[H8SPTsEU] = (GAaIkGVx1) (x[H8SPTsEU] - iIG1gXnx);
            H8SPTsEU = H8SPTsEU +1;
        };
    }
    for (H8SPTsEU = 0; H8SPTsEU <= ik6XOnFx - (76 - 75); H8SPTsEU++) {
        if (rFN0ES[H8SPTsEU] > max)
            max = rFN0ES[H8SPTsEU];
    }
    {
        H8SPTsEU = 0;
        while (H8SPTsEU <= ik6XOnFx - 1) {
            if ((max - rFN0ES[H8SPTsEU]) < 0.00001) {
                z[wbJR9WXCpHTD] = x[H8SPTsEU];
                wbJR9WXCpHTD++;
            }
            H8SPTsEU++;
        };
    }
    {
        H8SPTsEU = 0;
        while (H8SPTsEU <= wbJR9WXCpHTD - 2) {
            {
                j = H8SPTsEU +1;
                while (j <= wbJR9WXCpHTD - 1) {
                    if (z[j] < z[H8SPTsEU]) {
                        temp = z[j];
                        z[j] = z[H8SPTsEU];
                        z[H8SPTsEU] = temp;
                    }
                    j++;
                };
            }
            H8SPTsEU++;
        };
    }
    printf ("%d", z[0]);
    {
        H8SPTsEU = 1;
        while (H8SPTsEU <= wbJR9WXCpHTD - 1) {
            printf (",%d", z[H8SPTsEU]);
            H8SPTsEU++;
        };
    }
    return 0;
}

