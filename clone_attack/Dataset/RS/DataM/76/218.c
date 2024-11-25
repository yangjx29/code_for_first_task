int main () {
    int WCZLYmp, vecEuBV, ewP2IiWNoeu, tedwFNpPlc9X, Bzqe536G7HN, H8ORrpAf, Om8XATS2;
    int bnduHh5 [(1314 - 14)] [(889 - 887)];
    Bzqe536G7HN = (649 - 649);
    scanf ("%d", &WCZLYmp);
    {
        ewP2IiWNoeu = 114 - 114;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WCZLYmp > ewP2IiWNoeu) {
            scanf ("%d %d", &bnduHh5[ewP2IiWNoeu][(583 - 582)], &bnduHh5[ewP2IiWNoeu][(840 - 838)]);
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
            ewP2IiWNoeu = ewP2IiWNoeu + 1;
        };
    }
    for (ewP2IiWNoeu = (161 - 161); WCZLYmp > ewP2IiWNoeu; ewP2IiWNoeu = ewP2IiWNoeu + 1)
        for (vecEuBV = ewP2IiWNoeu + 1; WCZLYmp > vecEuBV; vecEuBV = vecEuBV + 1)
            if (bnduHh5[vecEuBV][1] < bnduHh5[ewP2IiWNoeu][1]) {
                H8ORrpAf = bnduHh5[ewP2IiWNoeu][1];
                bnduHh5[ewP2IiWNoeu][1] = bnduHh5[vecEuBV][1];
                bnduHh5[vecEuBV][1] = H8ORrpAf;
                H8ORrpAf = bnduHh5[ewP2IiWNoeu][2];
                bnduHh5[ewP2IiWNoeu][2] = bnduHh5[vecEuBV][2];
                bnduHh5[vecEuBV][2] = H8ORrpAf;
            }
    Om8XATS2 = bnduHh5[0][2];
    for (ewP2IiWNoeu = 0; WCZLYmp -1 > ewP2IiWNoeu; ewP2IiWNoeu++)
        if (bnduHh5[ewP2IiWNoeu + 1][1] > Om8XATS2) {
            exit (0);
        }
        else {
            if (Om8XATS2 < bnduHh5[ewP2IiWNoeu + 1][2])
                Om8XATS2 = bnduHh5[ewP2IiWNoeu + 1][2];
        }
    printf ("%d %d", bnduHh5[0][1], Om8XATS2);
    return 0;
}

