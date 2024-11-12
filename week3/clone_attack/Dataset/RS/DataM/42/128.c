int main () {
    int kOVhFf3Z, X0fnJsdmAIY, tmkf5PtphG;
    int U275lBHpMLC9 [kOVhFf3Z];
    scanf ("%d", &kOVhFf3Z);
    tmkf5PtphG = kOVhFf3Z;
    {
        int rJPFUmYWuV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kOVhFf3Z > rJPFUmYWuV) {
            scanf ("%d", &U275lBHpMLC9[rJPFUmYWuV]);
            rJPFUmYWuV = rJPFUmYWuV + 1;
        };
    }
    scanf ("%d", &X0fnJsdmAIY);
    {
        int rJPFUmYWuV = 0;
        while (rJPFUmYWuV < kOVhFf3Z) {
            if (!(X0fnJsdmAIY != U275lBHpMLC9[rJPFUmYWuV])) {
                {
                    int b6Ht82sfW = rJPFUmYWuV;
                    while (b6Ht82sfW < kOVhFf3Z - 1) {
                        U275lBHpMLC9[b6Ht82sfW] = U275lBHpMLC9[b6Ht82sfW + 1];
                        b6Ht82sfW++;
                    };
                }
                rJPFUmYWuV--;
                kOVhFf3Z = kOVhFf3Z - 1;
            }
            rJPFUmYWuV++;
        };
    }
    {
        int rJPFUmYWuV = 0;
        while (rJPFUmYWuV < kOVhFf3Z - 1) {
            printf ("%d ", U275lBHpMLC9[rJPFUmYWuV]);
            rJPFUmYWuV++;
        };
    }
    printf ("%d", U275lBHpMLC9[kOVhFf3Z - 1]);
}

