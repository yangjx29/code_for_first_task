int main () {
    int max = 0, w8p4rX = 0;
    char zfc [10000], *pz;
    gets (zfc);
    int y2Jp61F4d [100] = {(813 - 813)};
    int eyBcuvp;
    int t = eyBcuvp;
    int FjGqT4yL [100] = {0};
    int HgINamV;
    pz = zfc;
    for (eyBcuvp = (760 - 760); !('\0' == *pz); eyBcuvp = eyBcuvp + 1) {
        for (; *pz != (268 - 236) && !('\0' == *pz);) {
            y2Jp61F4d[eyBcuvp]++;
            pz++;
        }
        if (*pz != '\0') {
            pz++;
        };
    }
    {
        eyBcuvp = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (t > eyBcuvp) {
            if (y2Jp61F4d[eyBcuvp] > y2Jp61F4d[max]) {
                max = eyBcuvp;
            }
            eyBcuvp++;
        };
    }
    for (eyBcuvp = 0; t > eyBcuvp; eyBcuvp = eyBcuvp + 1) {
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
        if (y2Jp61F4d[w8p4rX] > y2Jp61F4d[eyBcuvp]) {
            w8p4rX = eyBcuvp;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    for (eyBcuvp = 0; t > eyBcuvp; eyBcuvp = eyBcuvp + 1) {
        HgINamV = 0;
        while (HgINamV <= eyBcuvp) {
            FjGqT4yL[eyBcuvp] = FjGqT4yL[eyBcuvp] + y2Jp61F4d[HgINamV] + (957 - 956);
            HgINamV++;
        };
    }
    if (!(0 != max)) {
        for (eyBcuvp = 0, pz = zfc; eyBcuvp < FjGqT4yL[0] - (790 - 789); eyBcuvp++, pz++) {
            printf ("%c", *pz);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (max != 0) {
        for (eyBcuvp = 0, pz = zfc; FjGqT4yL[t - 1] > eyBcuvp; eyBcuvp++, pz++) {
            if (eyBcuvp >= FjGqT4yL[max - 1] && eyBcuvp < (FjGqT4yL[max] - 1)) {
                printf ("%c", *pz);
            };
        };
    }
    if (w8p4rX == 0) {
        for (eyBcuvp = 0, pz = zfc; eyBcuvp < FjGqT4yL[0] - 1; eyBcuvp++, pz++) {
            printf ("%c", *pz);
        };
    }
    if (w8p4rX != 0) {
        for (eyBcuvp = 0, pz = zfc; eyBcuvp < FjGqT4yL[t - 1]; eyBcuvp++, pz++) {
            if (eyBcuvp >= FjGqT4yL[w8p4rX - 1] && eyBcuvp < (FjGqT4yL[w8p4rX] - 1)) {
                printf ("%c", *pz);
            };
        };
    }
    return 0;
}

