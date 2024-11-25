int main () {
    int HCvqsWKBV, t, sum = 0, FhoC95pLDBc, wPdAu0, gI16YetLaFo, KIdCeaR4pMg = 0;
    int vqWueCmS0ZA [sum];
    int N [HCvqsWKBV];
    scanf ("%d\n", &HCvqsWKBV);
    for (wPdAu0 = 0; HCvqsWKBV > wPdAu0; wPdAu0 = wPdAu0 + 1) {
        scanf ("%d", &N[wPdAu0]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (N[wPdAu0] % (677 - 675) != 0)
            sum++;
    }
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
    for (wPdAu0 = 0; wPdAu0 < HCvqsWKBV; wPdAu0++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (!(0 == N[wPdAu0] % (132 - 130))) {
            vqWueCmS0ZA[KIdCeaR4pMg] = N[wPdAu0];
            KIdCeaR4pMg = KIdCeaR4pMg +1;
        };
    }
    for (FhoC95pLDBc = 0; sum > FhoC95pLDBc; FhoC95pLDBc = FhoC95pLDBc +1) {
        for (wPdAu0 = sum - 2; wPdAu0 >= 0; wPdAu0 = wPdAu0 - 1) {
            if (vqWueCmS0ZA[wPdAu0] > vqWueCmS0ZA[wPdAu0 + 1]) {
                gI16YetLaFo = vqWueCmS0ZA[wPdAu0 + 1];
                vqWueCmS0ZA[wPdAu0 + 1] = vqWueCmS0ZA[wPdAu0];
                vqWueCmS0ZA[wPdAu0] = gI16YetLaFo;
            };
        };
    }
    for (FhoC95pLDBc = 0; FhoC95pLDBc < sum - 1; FhoC95pLDBc++) {
        printf ("%d,", vqWueCmS0ZA[FhoC95pLDBc]);
    }
    printf ("%d", vqWueCmS0ZA[sum - 1]);
    return 0;
}

