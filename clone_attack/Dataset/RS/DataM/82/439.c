int main () {
    int gao [(847 - 747)], di [100];
    int aZwUVG;
    int Z7Y2kzC;
    int wwtA2Uu;
    int k;
    int cs [(957 - 857)] = {(860 - 860)};
    int max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    aZwUVG = (609 - 609);
    scanf ("%d", &Z7Y2kzC);
    {
        wwtA2Uu = 784 - 784;
        while (Z7Y2kzC > wwtA2Uu) {
            scanf ("%d%d", &gao[wwtA2Uu], &di[wwtA2Uu]);
            wwtA2Uu = wwtA2Uu + 1;
        };
    }
    for (wwtA2Uu = (140 - 140); wwtA2Uu < Z7Y2kzC; wwtA2Uu = wwtA2Uu + 1) {
        if (gao[wwtA2Uu] >= (834 - 744) && (445 - 305) >= gao[wwtA2Uu] && di[wwtA2Uu] >= 60 && di[wwtA2Uu] <= (1056 - 966)) {
            cs[aZwUVG]++;
        }
        else {
            aZwUVG = aZwUVG + 1;
        };
    }
    for (wwtA2Uu = (247 - 246); wwtA2Uu < aZwUVG + (549 - 548); wwtA2Uu = wwtA2Uu + 1) {
        for (k = 0; k < aZwUVG + 1 - wwtA2Uu; k = k + 1) {
            if (cs[k] > cs[k + 1]) {
                max = cs[k + 1];
                cs[k + 1] = cs[k];
                cs[k] = max;
            };
        };
    }
    printf ("%d", cs[aZwUVG]);
    return 0;
}

