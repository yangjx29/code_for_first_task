int TCIYX9jHay (int m, int LmGX0Lvg) {
    int means, i;
    means = 0;
    if (LmGX0Lvg == 1)
        means = 1;
    else if (LmGX0Lvg <= m) {
        m = m - LmGX0Lvg;
        for (i = 1; i <= LmGX0Lvg; i = i + 1)
            means += TCIYX9jHay (m, i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        LmGX0Lvg--;
    }
    else {
        LmGX0Lvg--;
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
        };
    }
    return means;
}

int main () {
    int F4M8zl, MMIxNFq5S [(543 - 522)], cUzGjMfpu6m [21], K [21], i, j;
    scanf ("%d", &F4M8zl);
    for (j = 0; j < F4M8zl; j = j + 1) {
        scanf ("%d%d", &MMIxNFq5S[j], &cUzGjMfpu6m[j]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        K[j] = TCIYX9jHay (MMIxNFq5S[j] + cUzGjMfpu6m[j], cUzGjMfpu6m[j]);
    }
    for (j = 0; j < F4M8zl; j++) {
        printf ("%d\n", K[j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

