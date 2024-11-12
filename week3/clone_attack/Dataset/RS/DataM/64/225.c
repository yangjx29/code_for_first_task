int main () {
    int e;
    int tRGX7KBdq;
    int i;
    int QkywQ4IG1HA;
    int sa [(394 - 383)];
    int NfXgCYphDT [11];
    int y7wasozUY [11];
    int n;
    int FU2VYARsBWNb;
    int c;
    int s [51];
    int k;
    int y [51];
    int z [51];
    double  PYSKHvh [51];
    double  FTbv86PEOAI;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d%d%d", &sa[i], &NfXgCYphDT[i], &y7wasozUY[i]);
            i++;
        };
    }
    i = 0;
    {
        QkywQ4IG1HA = 0;
        while (QkywQ4IG1HA < n - 1) {
            for (k = QkywQ4IG1HA +1; k < n; k++) {
                s[i] = (sa[QkywQ4IG1HA] - sa[k]) * (sa[QkywQ4IG1HA] - sa[k]) + (NfXgCYphDT[QkywQ4IG1HA] - NfXgCYphDT[k]) * (NfXgCYphDT[QkywQ4IG1HA] - NfXgCYphDT[k]) + (y7wasozUY[QkywQ4IG1HA] - y7wasozUY[k]) * (y7wasozUY[QkywQ4IG1HA] - y7wasozUY[k]);
                PYSKHvh[i] = sqrt (s[i]);
                y[i] = QkywQ4IG1HA;
                z[i] = k;
                i++;
            }
            QkywQ4IG1HA++;
        };
    }
    {
        k = 1;
        while (k <= i) {
            for (QkywQ4IG1HA = 0; QkywQ4IG1HA < (i - k); QkywQ4IG1HA++) {
                if (PYSKHvh[QkywQ4IG1HA] < PYSKHvh[QkywQ4IG1HA +1]) {
                    FTbv86PEOAI = PYSKHvh[QkywQ4IG1HA];
                    PYSKHvh[QkywQ4IG1HA] = PYSKHvh[QkywQ4IG1HA +1];
                    e = y[QkywQ4IG1HA];
                    y[QkywQ4IG1HA] = y[QkywQ4IG1HA +1];
                    tRGX7KBdq = z[QkywQ4IG1HA];
                    z[QkywQ4IG1HA] = z[QkywQ4IG1HA +1];
                    z[QkywQ4IG1HA +1] = tRGX7KBdq;
                    y[QkywQ4IG1HA +1] = e;
                    PYSKHvh[QkywQ4IG1HA +1] = FTbv86PEOAI;
                };
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
            k = k + 1;
        };
    }
    {
        QkywQ4IG1HA = 0;
        while (QkywQ4IG1HA < i) {
            FU2VYARsBWNb = y[QkywQ4IG1HA];
            c = z[QkywQ4IG1HA];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sa[FU2VYARsBWNb], NfXgCYphDT[FU2VYARsBWNb], y7wasozUY[FU2VYARsBWNb], sa[c], NfXgCYphDT[c], y7wasozUY[c], PYSKHvh[QkywQ4IG1HA]);
            QkywQ4IG1HA++;
        };
    }
    return 0;
}

