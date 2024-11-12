int main (void ) {
    int b1Zln4JvF6B8;
    int G4M9PchKyur [30];
    int KmolXB2Ienw [30];
    int jqYsmKO;
    int N3t7xG9q;
    int zarOURzb5ijH;
    scanf ("%d", &zarOURzb5ijH);
    {
        jqYsmKO = 269 - 269;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zarOURzb5ijH > jqYsmKO) {
            scanf ("%d", &KmolXB2Ienw[jqYsmKO]);
            jqYsmKO = jqYsmKO + 1;
        };
    }
    memset (G4M9PchKyur, (52 - 52), sizeof (G4M9PchKyur));
    G4M9PchKyur[(50 - 50)] = 1;
    {
        jqYsmKO = 1;
        while (jqYsmKO < zarOURzb5ijH) {
            b1Zln4JvF6B8 = 1;
            {
                N3t7xG9q = 14 - 14;
                while (jqYsmKO > N3t7xG9q) {
                    if ((KmolXB2Ienw[N3t7xG9q] >= KmolXB2Ienw[jqYsmKO]) && (b1Zln4JvF6B8 < G4M9PchKyur[N3t7xG9q] + 1))
                        b1Zln4JvF6B8 = G4M9PchKyur[N3t7xG9q] + 1;
                    N3t7xG9q = N3t7xG9q +1;
                };
            }
            G4M9PchKyur[jqYsmKO] = b1Zln4JvF6B8;
            jqYsmKO = jqYsmKO + 1;
        };
    }
    {
        jqYsmKO = 0;
        while (jqYsmKO < zarOURzb5ijH) {
            if (G4M9PchKyur[jqYsmKO] > b1Zln4JvF6B8)
                b1Zln4JvF6B8 = G4M9PchKyur[jqYsmKO];
            jqYsmKO = jqYsmKO + 1;
        };
    }
    printf ("%d\n", b1Zln4JvF6B8);
    return 0;
}

