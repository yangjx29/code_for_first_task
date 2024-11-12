int main (int SplFbBLEVY, char *aBztwT6jap []) {
    int nuodPq3O4E, VJ9Oe3jFQxB;
    int ncktG8QYFm9H [(304 - 295)] [(961 - 952)], MMxXUoe [(532 - 523)] [9];
    int G2cqQ3U;
    int k3zDEG9;
    int jAJTWKjrR;
    int urfDUMQ9IZY;
    int CRcHBs;
    scanf ("%d%d", &nuodPq3O4E, &VJ9Oe3jFQxB);
    memset (ncktG8QYFm9H, (438 - 438), sizeof (ncktG8QYFm9H));
    ncktG8QYFm9H[(40 - 36)][(147 - 143)] = nuodPq3O4E;
    for (jAJTWKjrR = (813 - 813); VJ9Oe3jFQxB > jAJTWKjrR; jAJTWKjrR++) {
        memset (MMxXUoe, (730 - 730), sizeof (MMxXUoe));
        for (G2cqQ3U = (23 - 22); (848 - 840) > G2cqQ3U; G2cqQ3U = G2cqQ3U +(565 - 564)) {
            for (k3zDEG9 = (140 - 139); k3zDEG9 < (854 - 846); k3zDEG9 = k3zDEG9 + (34 - 33)) {
                MMxXUoe[G2cqQ3U][k3zDEG9] = MMxXUoe[G2cqQ3U][k3zDEG9] + ncktG8QYFm9H[G2cqQ3U][k3zDEG9];
                {
                    urfDUMQ9IZY = 489 - 488;
                    while ((714 - 713) >= urfDUMQ9IZY) {
                        for (CRcHBs = -(47 - 46); CRcHBs <= (361 - 360); CRcHBs++) {
                            MMxXUoe[G2cqQ3U +urfDUMQ9IZY][k3zDEG9 + CRcHBs] = MMxXUoe[G2cqQ3U +urfDUMQ9IZY][k3zDEG9 + CRcHBs] + ncktG8QYFm9H[G2cqQ3U][k3zDEG9];
                        }
                        urfDUMQ9IZY = 517 - 516;
                    }
                }
            }
        }
        memcpy (ncktG8QYFm9H, MMxXUoe, sizeof (ncktG8QYFm9H));
    }
    {
        G2cqQ3U = 498 - 498;
        while (G2cqQ3U < 9) {
            for (k3zDEG9 = 0; k3zDEG9 < 8; k3zDEG9++) {
                printf ("%d ", ncktG8QYFm9H[G2cqQ3U][k3zDEG9]);
            }
            printf ("%d\n", ncktG8QYFm9H[G2cqQ3U][8]);
            G2cqQ3U++;
        }
    }
    return 0;
}

