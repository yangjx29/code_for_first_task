int main () {
    int McsYPp9Ka3w [5] [5];
    int h3o5wIv [5];
    int HXZYDOCMU, qlQPTzA1, FKzNjY5ZSkHi, uY9FviOxRK, lCfIgYjysK;
    {
        FKzNjY5ZSkHi = 0;
        while (5 > FKzNjY5ZSkHi) {
            {
                uY9FviOxRK = 0;
                while (5 > uY9FviOxRK) {
                    scanf ("%d", &McsYPp9Ka3w[FKzNjY5ZSkHi][uY9FviOxRK]);
                    uY9FviOxRK++;
                }
            }
            FKzNjY5ZSkHi++;
        }
    }
    scanf ("%d%d", &HXZYDOCMU, &qlQPTzA1);
    if (HXZYDOCMU >= 0 && 4 >= HXZYDOCMU &&0 <= qlQPTzA1 && qlQPTzA1 <= 4) {
        lCfIgYjysK = 1;
    }
    else {
        lCfIgYjysK = 0;
    }
    if (lCfIgYjysK == 1) {
        {
            FKzNjY5ZSkHi = 0;
            while (FKzNjY5ZSkHi < 5) {
                h3o5wIv[FKzNjY5ZSkHi] = McsYPp9Ka3w[HXZYDOCMU][FKzNjY5ZSkHi];
                McsYPp9Ka3w[HXZYDOCMU][FKzNjY5ZSkHi] = McsYPp9Ka3w[qlQPTzA1][FKzNjY5ZSkHi];
                McsYPp9Ka3w[qlQPTzA1][FKzNjY5ZSkHi] = h3o5wIv[FKzNjY5ZSkHi];
                FKzNjY5ZSkHi = FKzNjY5ZSkHi +1;
            }
        }
        {
            FKzNjY5ZSkHi = 0;
            while (FKzNjY5ZSkHi < 5) {
                {
                    uY9FviOxRK = 0;
                    while (uY9FviOxRK < 4) {
                        printf ("%d ", McsYPp9Ka3w[FKzNjY5ZSkHi][uY9FviOxRK]);
                        uY9FviOxRK = uY9FviOxRK + 1;
                    }
                }
                printf ("%d\n", McsYPp9Ka3w[FKzNjY5ZSkHi][4]);
                FKzNjY5ZSkHi++;
            }
        }
    }
    if (lCfIgYjysK == 0)
        ;
    return 0;
}

