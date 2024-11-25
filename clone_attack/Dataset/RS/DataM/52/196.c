int TN7Fx8jSPeJ [(187 - 82)];

int main () {
    int HlhZ5PWI;
    int gBQ38Y7;
    int Lv1Zot5ikqRF;
    int BFNvn7edmpI;
    int eXPbyhkw;
    scanf ("%d%d", &HlhZ5PWI, &BFNvn7edmpI);
    {
        gBQ38Y7 = 60 - 59;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HlhZ5PWI >= gBQ38Y7) {
            scanf ("%d", &TN7Fx8jSPeJ[gBQ38Y7]);
            gBQ38Y7 = gBQ38Y7 + 1;
        };
    }
    for (gBQ38Y7 = BFNvn7edmpI; gBQ38Y7 >= 1; gBQ38Y7 = gBQ38Y7 - 1) {
        eXPbyhkw = TN7Fx8jSPeJ[HlhZ5PWI -gBQ38Y7 + 1];
        for (Lv1Zot5ikqRF = HlhZ5PWI -gBQ38Y7 + 1; Lv1Zot5ikqRF >= BFNvn7edmpI -gBQ38Y7 + 2; Lv1Zot5ikqRF = Lv1Zot5ikqRF -1)
            TN7Fx8jSPeJ[Lv1Zot5ikqRF] = TN7Fx8jSPeJ[Lv1Zot5ikqRF -1];
        TN7Fx8jSPeJ[BFNvn7edmpI -gBQ38Y7 + 1] = eXPbyhkw;
    }
    for (gBQ38Y7 = 1; gBQ38Y7 < HlhZ5PWI; gBQ38Y7 = gBQ38Y7 + 1)
        printf ("%d ", TN7Fx8jSPeJ[gBQ38Y7]);
    printf ("%d", TN7Fx8jSPeJ[HlhZ5PWI]);
    return 0;
}

