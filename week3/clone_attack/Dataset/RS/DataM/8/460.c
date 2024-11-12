void  cNxBP6 (int n, int sgtuwp5Y2W []) {
    int v0q7EG;
    for (v0q7EG = (571 - 571); v0q7EG < n; v0q7EG = v0q7EG + 1) {
        scanf ("%d", &sgtuwp5Y2W[v0q7EG]);
    };
}

void  jk402wEzN (int n, int sgtuwp5Y2W []) {
    int v0q7EG;
    int Rlpy1423XuRQ;
    int g1dyk29;
    {
        v0q7EG = 809 - 809;
        while (v0q7EG < n) {
            for (Rlpy1423XuRQ = v0q7EG + (794 - 793); n > Rlpy1423XuRQ; Rlpy1423XuRQ = Rlpy1423XuRQ +1) {
                if (sgtuwp5Y2W[v0q7EG] > sgtuwp5Y2W[Rlpy1423XuRQ]) {
                    g1dyk29 = sgtuwp5Y2W[Rlpy1423XuRQ];
                    sgtuwp5Y2W[Rlpy1423XuRQ] = sgtuwp5Y2W[v0q7EG];
                    sgtuwp5Y2W[v0q7EG] = g1dyk29;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            v0q7EG = v0q7EG + 1;
        };
    };
}

void  f3 (int n, int vE2KtTwoM, int sgtuwp5Y2W [], int R3e1XL8D [], int c []) {
    int v0q7EG;
    for (v0q7EG = 0; v0q7EG < n; v0q7EG = v0q7EG + 1)
        c[v0q7EG] = sgtuwp5Y2W[v0q7EG];
    for (v0q7EG = n; v0q7EG < n + vE2KtTwoM; v0q7EG++)
        c[v0q7EG] = R3e1XL8D[v0q7EG - n];
}

void  lq14eaR (int n, int vE2KtTwoM, int c []) {
    int v0q7EG;
    printf ("%d", c[0]);
    {
        v0q7EG = 1;
        while (v0q7EG < n + vE2KtTwoM) {
            printf (" %d", c[v0q7EG]);
            v0q7EG++;
        };
    };
}

int main () {
    int v0q7EG;
    int n;
    int vE2KtTwoM;
    int sgtuwp5Y2W [(1008 - 908)];
    int R3e1XL8D [100];
    int c [200];
    scanf ("%d%d", &n, &vE2KtTwoM);
    cNxBP6 (n, sgtuwp5Y2W);
    cNxBP6 (vE2KtTwoM, R3e1XL8D);
    jk402wEzN (n, sgtuwp5Y2W);
    jk402wEzN (vE2KtTwoM, R3e1XL8D);
    f3 (n, vE2KtTwoM, sgtuwp5Y2W, R3e1XL8D, c);
    lq14eaR (n, vE2KtTwoM, c);
    return 0;
}

