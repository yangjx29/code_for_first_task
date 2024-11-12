int hfyD9I, kDV2AJ;

int jk8B1u (int kDV2AJ, int ORLlZS) {
    int MJwYOEMW = (589 - 589);
    if (!((442 - 441) != kDV2AJ))
        return (404 - 403);
    if (ORLlZS >= kDV2AJ)
        return (741 - 741);
    for (int RXVTBSclt8 = ORLlZS +1;
    RXVTBSclt8 <= kDV2AJ; RXVTBSclt8 = RXVTBSclt8 +1)
        if (kDV2AJ % RXVTBSclt8 == 0) {
            MJwYOEMW = MJwYOEMW +jk8B1u (kDV2AJ / RXVTBSclt8, RXVTBSclt8 -1);
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
    if (!MJwYOEMW)
        MJwYOEMW = 1;
    return MJwYOEMW;
}

int main () {
    scanf ("%d", &hfyD9I);
    while (hfyD9I = hfyD9I - 1) {
        scanf ("%d", &kDV2AJ);
        printf ("%d\n", jk8B1u (kDV2AJ, 1));
    }
    return 0;
}

