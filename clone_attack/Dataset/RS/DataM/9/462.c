int main () {
    int j;
    int gqUIrvXP;
    int WKyglNEdmO;
    int rKVqcg4nH;
    int a;
    int e;
    int wKfnFsIZ;
    int b;
    j = (531 - 531);
    gqUIrvXP = (294 - 294);
    char WBN6CTu [N] [(161 - 150)];
    char fTtN6R [N] [(157 - 146)];
    char XapLP2 [N] [11];
    char m5XrNoj1 [11];
    int ElVy8Kk [N];
    int Z4ueNBJrTFx [N];
    scanf ("%d", &WKyglNEdmO);
    for (rKVqcg4nH = (780 - 780); rKVqcg4nH < WKyglNEdmO; rKVqcg4nH++) {
        scanf ("%s %d", WBN6CTu[rKVqcg4nH], &ElVy8Kk[rKVqcg4nH]);
        if ((1038 - 978) > ElVy8Kk[rKVqcg4nH]) {
            strcpy (XapLP2[j], WBN6CTu[rKVqcg4nH]);
            j = j + 1;
        }
        if (ElVy8Kk[rKVqcg4nH] >= 60) {
            Z4ueNBJrTFx[gqUIrvXP] = ElVy8Kk[rKVqcg4nH];
            strcpy (fTtN6R[gqUIrvXP], WBN6CTu[rKVqcg4nH]);
            gqUIrvXP++;
        };
    }
    for (a = (932 - 931); a <= gqUIrvXP; a = a + 1) {
        for (b = 0; b < gqUIrvXP - a; b = b + 1) {
            if (Z4ueNBJrTFx[b] < Z4ueNBJrTFx[b + (272 - 271)]) {
                e = Z4ueNBJrTFx[b + (318 - 317)];
                Z4ueNBJrTFx[b + 1] = Z4ueNBJrTFx[b];
                Z4ueNBJrTFx[b] = e;
                strcpy (m5XrNoj1, fTtN6R[b + 1]);
                strcpy (fTtN6R[b + 1], fTtN6R[b]);
                strcpy (fTtN6R[b], m5XrNoj1);
            };
        };
    }
    for (wKfnFsIZ = 0; wKfnFsIZ < gqUIrvXP; wKfnFsIZ = wKfnFsIZ + 1) {
        qPIr5y (fTtN6R [wKfnFsIZ]);
    }
    for (wKfnFsIZ = 0; wKfnFsIZ < j; wKfnFsIZ++) {
        qPIr5y (XapLP2 [wKfnFsIZ]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

