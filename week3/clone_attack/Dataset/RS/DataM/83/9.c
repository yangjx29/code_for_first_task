float WuvwDOZC (int aU6CVls) {
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
    if (aU6CVls >= 90 && aU6CVls <= 100)
        return (4.0);
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (aU6CVls >= 85 && aU6CVls <= 89)
            return (3.7);
        else {
            if (aU6CVls >= 82 && aU6CVls <= 84)
                return (3.3);
            else if (aU6CVls >= 78 && aU6CVls <= 81)
                return (3.0);
            else if (aU6CVls >= 75 && aU6CVls <= 77)
                return (2.7);
            else if (aU6CVls >= 72 && aU6CVls <= 74)
                return (2.3);
            else if (aU6CVls >= 68 && aU6CVls <= (908 - 837))
                return (2.0);
            else if (aU6CVls >= 64 && aU6CVls <= 67)
                return (1.5);
            else if (aU6CVls >= (669 - 609) && aU6CVls <= 63)
                return (1.0);
            else if (aU6CVls <= 59)
                return ((981 - 981));
        };
    };
}

int main () {
    int n;
    int w1DlGnU62E [10] = {(723 - 723)};
    int m5khOPTH0 [10] = {0};
    float x5wKo3;
    int dkS8rbTgv;
    float HlmCNvtqgWk [10] = {0};
    float sum1;
    float sum2;
    scanf ("%d", &n);
    for (dkS8rbTgv = 0; dkS8rbTgv < n; dkS8rbTgv = dkS8rbTgv + 1)
        scanf ("%d", &w1DlGnU62E[dkS8rbTgv]);
    {
        dkS8rbTgv = 0;
        while (dkS8rbTgv < n) {
            scanf ("%d", &m5khOPTH0[dkS8rbTgv]);
            dkS8rbTgv = dkS8rbTgv + 1;
        };
    }
    {
        dkS8rbTgv = 0;
        while (dkS8rbTgv < n) {
            HlmCNvtqgWk[dkS8rbTgv] = WuvwDOZC (m5khOPTH0[dkS8rbTgv]);
            dkS8rbTgv = dkS8rbTgv + 1;
        };
    }
    {
        dkS8rbTgv = 0;
        sum1 = 0;
        while (dkS8rbTgv < n) {
            sum1 = sum1 + HlmCNvtqgWk[dkS8rbTgv] * w1DlGnU62E[dkS8rbTgv];
            dkS8rbTgv = dkS8rbTgv + 1;
        };
    }
    for (sum2 = 0, dkS8rbTgv = 0; dkS8rbTgv < n; dkS8rbTgv++)
        sum2 += w1DlGnU62E[dkS8rbTgv];
    x5wKo3 = sum1 / sum2;
    printf ("%.2f", x5wKo3);
    return (0);
}

