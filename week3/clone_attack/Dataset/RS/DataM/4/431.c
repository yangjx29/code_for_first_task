int main () {
    int TluWa2FJNxiU;
    int j;
    int ARsOuJWmF1D;
    int y8p1jbu7axK;
    int sz [(183 - 82)] [101];
    int a;
    scanf ("%d%d", &ARsOuJWmF1D, &y8p1jbu7axK);
    for (TluWa2FJNxiU = (471 - 471); TluWa2FJNxiU < ARsOuJWmF1D; TluWa2FJNxiU = TluWa2FJNxiU +1) {
        j = 0;
        while (y8p1jbu7axK > j) {
            scanf ("%d", &(sz[TluWa2FJNxiU][j]));
            j = j + 1;
        };
    }
    printf ("%d", sz[0][0]);
    for (TluWa2FJNxiU = 1; y8p1jbu7axK > TluWa2FJNxiU; TluWa2FJNxiU = TluWa2FJNxiU +1) {
        a = TluWa2FJNxiU;
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < ARsOuJWmF1D &&j <= TluWa2FJNxiU) {
                printf ("\n%d", sz[j][a]);
                j = j + 1;
                a = a - 1;
            };
        };
    }
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j < ARsOuJWmF1D) {
            a = j;
            j = j + 1;
            for (TluWa2FJNxiU = y8p1jbu7axK - 1; a < ARsOuJWmF1D &&TluWa2FJNxiU >= 0; TluWa2FJNxiU = TluWa2FJNxiU -1) {
                printf ("\n%d", sz[a][TluWa2FJNxiU]);
                a = a + 1;
            };
        };
    }
    return 0;
}

