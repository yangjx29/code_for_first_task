struct   Student {
    char CT4ChoL0 [26];
    int yuinO1h5;
};
int main () {
    int bH4GaRuAlbJg, VVXDqQU4, y9Y074Dd6RMq, l, oyOxDZcpKg;
    int FvN782ErZ [26] = {0};
    struct   Student BZHOckmsn [999];
    char OZAIioR, yKcAUZg;
    scanf ("%d", &bH4GaRuAlbJg);
    for (VVXDqQU4 = 0; bH4GaRuAlbJg > VVXDqQU4; VVXDqQU4 = VVXDqQU4 +1) {
        scanf ("%d %s", &BZHOckmsn[VVXDqQU4].yuinO1h5, BZHOckmsn[VVXDqQU4].CT4ChoL0);
    }
    {
        OZAIioR = 'A';
        y9Y074Dd6RMq = 0;
        while ('Z' >= OZAIioR) {
            {
                VVXDqQU4 = 0;
                while (bH4GaRuAlbJg > VVXDqQU4) {
                    for (l = 0; 26 > l; l = l + 1)
                        if (!(OZAIioR != BZHOckmsn[VVXDqQU4].CT4ChoL0[l]))
                            FvN782ErZ[y9Y074Dd6RMq]++;
                    VVXDqQU4 = VVXDqQU4 +1;
                }
            }
            y9Y074Dd6RMq = y9Y074Dd6RMq + 1;
            OZAIioR = OZAIioR +1;
        }
    }
    for (OZAIioR = 'A', y9Y074Dd6RMq = 0, oyOxDZcpKg = 0; 'Z' >= OZAIioR; OZAIioR++, y9Y074Dd6RMq = y9Y074Dd6RMq + 1)
        if (FvN782ErZ[y9Y074Dd6RMq] > oyOxDZcpKg) {
            yKcAUZg = OZAIioR;
            oyOxDZcpKg = FvN782ErZ[y9Y074Dd6RMq];
        }
    printf ("%c\n%d", yKcAUZg, oyOxDZcpKg);
    {
        VVXDqQU4 = 0;
        while (VVXDqQU4 < bH4GaRuAlbJg) {
            for (l = 0; l < 26; l = l + 1)
                if (BZHOckmsn[VVXDqQU4].CT4ChoL0[l] == yKcAUZg)
                    printf ("\n%d", BZHOckmsn[VVXDqQU4].yuinO1h5);
            VVXDqQU4++;
        }
    }
    return 0;
}

