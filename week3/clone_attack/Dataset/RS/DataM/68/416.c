int main () {
    int d8FteHO, i, k, F5IqZ1QU8b4 = 0, YicLBECN1 [99999], y [99999], ukfJFNzQG2P, h;
    scanf ("%d", &d8FteHO);
    for (i = 6; d8FteHO >= i; i = i + 1, i = i + 1) {
        for (k = 3; i > k; k = k + 1) {
            for (ukfJFNzQG2P = 2; ukfJFNzQG2P <= sqrt (k); ukfJFNzQG2P = ukfJFNzQG2P + 1) {
                if (!(0 != k % ukfJFNzQG2P))
                    break;
            }
            if (sqrt (k) < ukfJFNzQG2P) {
                for (h = 2; h <= sqrt (i - k); h = h + 1) {
                    if ((i - k) % h == 0)
                        break;
                }
                if (h > sqrt (i - k)) {
                    YicLBECN1[F5IqZ1QU8b4] = k;
                    y[F5IqZ1QU8b4] = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    F5IqZ1QU8b4 = F5IqZ1QU8b4 +1;
                    break;
                };
            };
        };
    }
    for (ukfJFNzQG2P = 0; ukfJFNzQG2P < F5IqZ1QU8b4; ukfJFNzQG2P = ukfJFNzQG2P + 1)
        printf ("%d=%d+%d\n", y[ukfJFNzQG2P], YicLBECN1[ukfJFNzQG2P], y[ukfJFNzQG2P] - YicLBECN1[ukfJFNzQG2P]);
    return 0;
}

