int main () {
    int all = 0, alle = 0;
    int i = 0, core [(497 - 487)], j [10], k;
    char p8FYxQ [10];
    scanf ("%d", &k);
    for (i = 0; k - 1 >= i; i++) {
        scanf ("%d ", &j[i]);
    }
    for (i = 0; k - 1 >= i; i++) {
        scanf ("%d", &core[i]);
    }
    {
        i = 0;
        while (k - 1 >= i) {
            if (100 >= core[i] && 90 <= core[i]) {
                core[i] = 40;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                continue;
            }
            if (89 >= core[i] && 85 <= core[i]) {
                core[i] = 37;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            }
            if (84 >= core[i] && core[i] >= 82) {
                core[i] = 33;
                continue;
            }
            if (81 >= core[i] && 78 <= core[i]) {
                core[i] = 30;
                continue;
            }
            if (77 >= core[i] && core[i] >= 75) {
                core[i] = 27;
                continue;
            }
            if (core[i] <= 74 && core[i] >= 72) {
                core[i] = 23;
                continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (core[i] <= 71 && core[i] >= 68) {
                core[i] = 20;
                continue;
            }
            if (core[i] <= 67 && core[i] >= 64) {
                core[i] = 15;
                continue;
            }
            if (core[i] <= 63 && core[i] >= 60) {
                core[i] = 10;
                continue;
            }
            if (core[i] <= 59 && core[i] >= 0) {
                core[i] = 0;
                continue;
            }
            i++;
        };
    }
    for (i = 0; i <= k - 1; i++)
        alle = alle + core[i] * j[i];
    for (i = 0; i <= k - 1; i++) {
        all = all + j[i];
    }
    printf ("%.2lf", 1.0 * alle / 10 / all);
    return 0;
}

