int main () {
    int btiHQL [20];
    int S0raSWe4 [20];
    int fei [20];
    int cJdVvwL2Pel1;
    int i;
    fei[0] = 1;
    fei[1] = 1;
    for (i = 2; 20 > i; i++) {
        fei[i] = fei[i - 1] + fei[i - 2];
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
    scanf ("%d", &cJdVvwL2Pel1);
    {
        i = 0;
        while (cJdVvwL2Pel1 > i) {
            scanf ("%d", &btiHQL[i]);
            S0raSWe4[i] = fei[btiHQL[i] - 1];
            i++;
        };
    }
    {
        i = 0;
        while (cJdVvwL2Pel1 > i) {
            printf ("%d\n", S0raSWe4[i]);
            i++;
        };
    }
    return 0;
}

