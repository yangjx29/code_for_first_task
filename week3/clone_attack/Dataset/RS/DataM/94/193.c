int main () {
    int e;
    int n;
    int sw3bPRJ = 0;
    int TPD8FYw [n], js [sw3bPRJ];
    scanf ("%d", &n);
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
    for (int cL5tgJRx = 0;
    n > cL5tgJRx; cL5tgJRx = cL5tgJRx + 1) {
        scanf ("%d", &TPD8FYw[cL5tgJRx]);
        if (!(1 != TPD8FYw[cL5tgJRx] % 2)) {
            js[sw3bPRJ] = TPD8FYw[cL5tgJRx];
            sw3bPRJ = sw3bPRJ + 1;
        };
    }
    for (int tpJ0n8si = 1;
    sw3bPRJ >= tpJ0n8si; tpJ0n8si = tpJ0n8si + 1) {
        int cL5tgJRx = 0;
        while (sw3bPRJ - tpJ0n8si > cL5tgJRx) {
            if (js[cL5tgJRx] > js[cL5tgJRx + 1]) {
                e = js[cL5tgJRx + 1];
                js[cL5tgJRx + 1] = js[cL5tgJRx];
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
                js[cL5tgJRx] = e;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cL5tgJRx = cL5tgJRx + 1;
        };
    }
    for (int cL5tgJRx = 0;
    cL5tgJRx < sw3bPRJ - 1; cL5tgJRx = cL5tgJRx + 1) {
        printf ("%d,", js[cL5tgJRx]);
    }
    printf ("%d", js[sw3bPRJ - 1]);
    return 0;
}

