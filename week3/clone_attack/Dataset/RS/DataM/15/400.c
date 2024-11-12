int main () {
    int n, BrUqTlvjg7p;
    int i, pkE1rl2S, x1, sXQVPKiIH8b, y1, nl7EwySNV;
    int ADyePodUSvq [100] [100] = {1};
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        for (pkE1rl2S = 1; n >= pkE1rl2S; pkE1rl2S = pkE1rl2S + 1) {
            scanf ("%d", &ADyePodUSvq[i][pkE1rl2S]);
        }
        printf ("\n");
    }
    for (i = 1; i <= n; i++) {
        for (pkE1rl2S = 1; pkE1rl2S <= n; pkE1rl2S = pkE1rl2S + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ADyePodUSvq[i][pkE1rl2S] == 0) {
                y1 = pkE1rl2S;
                x1 = i;
                break;
            };
        }
        if (pkE1rl2S != n + 1)
            break;
    }
    {
        i = n;
        while (i >= 1) {
            for (pkE1rl2S = n; pkE1rl2S >= 1; pkE1rl2S = pkE1rl2S - 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (ADyePodUSvq[i][pkE1rl2S] == 0) {
                    nl7EwySNV = pkE1rl2S;
                    sXQVPKiIH8b = i;
                    break;
                };
            }
            if (pkE1rl2S != 0)
                break;
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
            i = i - 1;
        };
    }
    BrUqTlvjg7p = (nl7EwySNV - y1 - 1) * (sXQVPKiIH8b - x1 - 1);
    printf ("%d\n", BrUqTlvjg7p);
    return 0;
}

