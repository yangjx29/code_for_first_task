int xOvKHiB [100] [100];
int rzdXPWQMqv [100] = {0};
int saIQAyN [100] = {0};
int d2VfWit = 0;

void  zK0aBlguNw (int P1UIDBk6x) {
    memset (rzdXPWQMqv, 0, sizeof (rzdXPWQMqv));
    {
        int u71ieLAMd = 0;
        while (P1UIDBk6x > u71ieLAMd) {
            rzdXPWQMqv[u71ieLAMd] = xOvKHiB[u71ieLAMd][0];
            {
                int PZ8I1LFoW2P4 = 1;
                while (P1UIDBk6x > PZ8I1LFoW2P4) {
                    if (xOvKHiB[u71ieLAMd][PZ8I1LFoW2P4] < rzdXPWQMqv[u71ieLAMd])
                        rzdXPWQMqv[u71ieLAMd] = xOvKHiB[u71ieLAMd][PZ8I1LFoW2P4];
                    PZ8I1LFoW2P4++;
                };
            }
            u71ieLAMd++;
        };
    }
    {
        int u71ieLAMd = 0;
        while (P1UIDBk6x > u71ieLAMd) {
            {
                int visrzpdZjJ0 = 0;
                while (visrzpdZjJ0 < P1UIDBk6x) {
                    xOvKHiB[u71ieLAMd][visrzpdZjJ0] -= rzdXPWQMqv[u71ieLAMd];
                    visrzpdZjJ0++;
                };
            }
            u71ieLAMd++;
        };
    };
}

void  pUN4krXYcfQ (int P1UIDBk6x) {
    memset (saIQAyN, 0, sizeof (saIQAyN));
    {
        int u71ieLAMd = 0;
        while (P1UIDBk6x > u71ieLAMd) {
            saIQAyN[u71ieLAMd] = xOvKHiB[0][u71ieLAMd];
            {
                int PZ8I1LFoW2P4 = 1;
                while (P1UIDBk6x > PZ8I1LFoW2P4) {
                    if (saIQAyN[u71ieLAMd] > xOvKHiB[PZ8I1LFoW2P4][u71ieLAMd])
                        saIQAyN[u71ieLAMd] = xOvKHiB[PZ8I1LFoW2P4][u71ieLAMd];
                    PZ8I1LFoW2P4++;
                };
            }
            u71ieLAMd++;
        };
    }
    for (int u71ieLAMd = 0;
    u71ieLAMd < P1UIDBk6x; u71ieLAMd++)
        for (int visrzpdZjJ0 = 0;
        P1UIDBk6x > visrzpdZjJ0; visrzpdZjJ0++)
            xOvKHiB[visrzpdZjJ0][u71ieLAMd] -= saIQAyN[u71ieLAMd];
}

int XCpdRg3Ubw (int P1UIDBk6x) {
    int PZ8I1LFoW2P4 = 0;
    zK0aBlguNw (P1UIDBk6x);
    pUN4krXYcfQ (P1UIDBk6x);
    PZ8I1LFoW2P4 = xOvKHiB[1][1];
    if (P1UIDBk6x == 2)
        return PZ8I1LFoW2P4;
    for (int u71ieLAMd = 1;
    P1UIDBk6x -1 > u71ieLAMd; u71ieLAMd++) {
        xOvKHiB[0][u71ieLAMd] = xOvKHiB[0][u71ieLAMd + 1];
        xOvKHiB[u71ieLAMd][0] = xOvKHiB[u71ieLAMd + 1][0];
        for (int visrzpdZjJ0 = 1;
        P1UIDBk6x -1 > visrzpdZjJ0; visrzpdZjJ0++)
            xOvKHiB[u71ieLAMd][visrzpdZjJ0] = xOvKHiB[u71ieLAMd + 1][visrzpdZjJ0 + 1];
    }
    return PZ8I1LFoW2P4 +XCpdRg3Ubw(P1UIDBk6x -1);
}

int main () {
    scanf ("%d", &d2VfWit);
    {
        int visrzpdZjJ0 = 0;
        while (visrzpdZjJ0 < d2VfWit) {
            {
                int u71ieLAMd = 0;
                while (u71ieLAMd < d2VfWit) {
                    for (int visrzpdZjJ0 = 0;
                    visrzpdZjJ0 < d2VfWit; visrzpdZjJ0++)
                        scanf ("%d", &xOvKHiB[u71ieLAMd][visrzpdZjJ0]);
                    u71ieLAMd++;
                };
            }
            visrzpdZjJ0++;
            printf ("%d\n", XCpdRg3Ubw (d2VfWit));
        };
    }
    return 0;
}

