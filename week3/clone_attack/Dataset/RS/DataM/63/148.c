int main () {
    int wn2POZkVwMlX;
    int wMSZW5r0oT1;
    int GRdz850;
    int LBQ4tF;
    int G18vKE;
    int ia17Mwk;
    int rSJ4U0Qh;
    int k8HFOSy;
    int VIU6pw;
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
    int zLqTQBRFEdWt;
    int XPUYfiXoE [(891 - 791)] [(638 - 538)];
    int p1KWNPG8wBg [100] [100];
    int n4qHfd [100] [100];
    scanf ("%d %d", &G18vKE, &ia17Mwk);
    for (wn2POZkVwMlX = (283 - 283); wn2POZkVwMlX < G18vKE; wn2POZkVwMlX = wn2POZkVwMlX + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (wMSZW5r0oT1 = (613 - 613); wMSZW5r0oT1 < ia17Mwk; wMSZW5r0oT1 = wMSZW5r0oT1 + 1) {
            scanf ("%d", &XPUYfiXoE[wn2POZkVwMlX][wMSZW5r0oT1]);
        };
    }
    scanf ("%d %d", &k8HFOSy, &VIU6pw);
    {
        wn2POZkVwMlX = 140 - 140;
        while (wn2POZkVwMlX < k8HFOSy) {
            for (wMSZW5r0oT1 = 0; VIU6pw > wMSZW5r0oT1; wMSZW5r0oT1 = wMSZW5r0oT1 + 1) {
                scanf ("%d", &p1KWNPG8wBg[wn2POZkVwMlX][wMSZW5r0oT1]);
            }
            wn2POZkVwMlX = wn2POZkVwMlX + 1;
        };
    }
    for (wn2POZkVwMlX = 0; wn2POZkVwMlX < G18vKE; wn2POZkVwMlX = wn2POZkVwMlX + 1) {
        wMSZW5r0oT1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (wMSZW5r0oT1 < VIU6pw) {
            n4qHfd[wn2POZkVwMlX][wMSZW5r0oT1] = 0;
            {
                GRdz850 = 0;
                while (GRdz850 < ia17Mwk) {
                    n4qHfd[wn2POZkVwMlX][wMSZW5r0oT1] = n4qHfd[wn2POZkVwMlX][wMSZW5r0oT1] + XPUYfiXoE[wn2POZkVwMlX][GRdz850] * p1KWNPG8wBg[GRdz850][wMSZW5r0oT1];
                    GRdz850++;
                };
            }
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
            if (wMSZW5r0oT1 == VIU6pw -1)
                printf ("%d\n", n4qHfd[wn2POZkVwMlX][wMSZW5r0oT1]);
            else
                printf ("%d ", n4qHfd[wn2POZkVwMlX][wMSZW5r0oT1]);
            wMSZW5r0oT1 = wMSZW5r0oT1 + 1;
        };
    };
}

