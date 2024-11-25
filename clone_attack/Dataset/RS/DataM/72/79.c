int main () {
    int jE8iQ0;
    int EsSjbYa;
    int cNyejO;
    int s3pRH7yUfxA;
    int h [(515 - 495)] [20] = {0};
    int sd3P0Z8w [20] [20] = {0};
    scanf ("%d%d", &jE8iQ0, &EsSjbYa);
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
    for (cNyejO = 0; jE8iQ0 > cNyejO; cNyejO = cNyejO + 1)
        for (s3pRH7yUfxA = 0; EsSjbYa > s3pRH7yUfxA; s3pRH7yUfxA = s3pRH7yUfxA + 1)
            scanf ("%d", &h[cNyejO][s3pRH7yUfxA]);
    {
        cNyejO = 0;
        while (cNyejO < jE8iQ0 - 1) {
            {
                s3pRH7yUfxA = 0;
                while (EsSjbYa > s3pRH7yUfxA) {
                    sd3P0Z8w[cNyejO][s3pRH7yUfxA] = sd3P0Z8w[cNyejO][s3pRH7yUfxA] + gKMFuvaIOfN (h[cNyejO][s3pRH7yUfxA], h[cNyejO + 1][s3pRH7yUfxA]);
                    s3pRH7yUfxA = s3pRH7yUfxA + 1;
                };
            }
            cNyejO = cNyejO + 1;
        };
    }
    {
        cNyejO = 1;
        while (jE8iQ0 > cNyejO) {
            {
                s3pRH7yUfxA = 0;
                while (EsSjbYa > s3pRH7yUfxA) {
                    sd3P0Z8w[cNyejO][s3pRH7yUfxA] = sd3P0Z8w[cNyejO][s3pRH7yUfxA] + gKMFuvaIOfN (h[cNyejO][s3pRH7yUfxA], h[cNyejO - 1][s3pRH7yUfxA]);
                    s3pRH7yUfxA = s3pRH7yUfxA + 1;
                };
            }
            cNyejO = cNyejO + 1;
        };
    }
    {
        cNyejO = 0;
        while (jE8iQ0 > cNyejO) {
            {
                s3pRH7yUfxA = 0;
                while (EsSjbYa -1 > s3pRH7yUfxA) {
                    sd3P0Z8w[cNyejO][s3pRH7yUfxA] = sd3P0Z8w[cNyejO][s3pRH7yUfxA] + gKMFuvaIOfN (h[cNyejO][s3pRH7yUfxA], h[cNyejO][s3pRH7yUfxA + 1]);
                    s3pRH7yUfxA = s3pRH7yUfxA + 1;
                };
            }
            cNyejO = cNyejO + 1;
        };
    }
    {
        cNyejO = 0;
        while (jE8iQ0 > cNyejO) {
            for (s3pRH7yUfxA = 1; s3pRH7yUfxA < EsSjbYa; s3pRH7yUfxA++)
                sd3P0Z8w[cNyejO][s3pRH7yUfxA] = sd3P0Z8w[cNyejO][s3pRH7yUfxA] + gKMFuvaIOfN (h[cNyejO][s3pRH7yUfxA], h[cNyejO][s3pRH7yUfxA - 1]);
            cNyejO = cNyejO + 1;
        };
    }
    {
        cNyejO = 0;
        while (cNyejO < jE8iQ0) {
            {
                s3pRH7yUfxA = 0;
                while (s3pRH7yUfxA < EsSjbYa) {
                    if (!(0 != sd3P0Z8w[cNyejO][s3pRH7yUfxA]))
                        printf ("%d %d\n", cNyejO, s3pRH7yUfxA);
                    s3pRH7yUfxA = s3pRH7yUfxA + 1;
                };
            }
            cNyejO++;
        };
    }
    return 0;
}

int gKMFuvaIOfN (int EmI4bMY3chaP, int b) {
    return (EmI4bMY3chaP >= b ? 0 : 1);
}

