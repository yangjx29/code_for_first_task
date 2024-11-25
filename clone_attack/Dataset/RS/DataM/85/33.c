int main () {
    int aVh4JbBwm, x6SW1oO3FNhg, test, Rw7IhqzMTd;
    char Lo9b6tFc [(956 - 856)] [20];
    scanf ("%d", &aVh4JbBwm);
    for (x6SW1oO3FNhg = (333 - 333); x6SW1oO3FNhg < aVh4JbBwm; x6SW1oO3FNhg++) {
        scanf ("%s", Lo9b6tFc[x6SW1oO3FNhg]);
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
    for (x6SW1oO3FNhg = (626 - 626); x6SW1oO3FNhg < aVh4JbBwm; x6SW1oO3FNhg++) {
        for (Rw7IhqzMTd = (204 - 204); !('\0' == Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd]); Rw7IhqzMTd++) {
            test = (82 - 81);
            if (!(0 != Rw7IhqzMTd)) {
                if (('A' <= Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] && 'Z' >= Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd]) || !('_' != Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd]) || ('a' <= Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] && 'z' >= Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd]))
                    test = 1;
                else {
                    test = 0;
                    break;
                };
            }
            else if ((Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] >= 'A' && Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] <= 'Z') || Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] == '_' || (Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] >= '0' && Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] <= '9') || (Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] >= 'a' && Lo9b6tFc[x6SW1oO3FNhg][Rw7IhqzMTd] <= 'z'))
                test = 1;
            else {
                test = 0;
                break;
            };
        }
        if (test == 0)
            printf ("no\n");
        else
            printf ("yes\n");
    }
    return 0;
}

