int main () {
    int n;
    int i;
    int max;
    int az3pvK6rAh4;
    char a [100] [20];
    char YG6LSw [100];
    char LbN49auCH [100];
    int KTLyxoks [100], LV0AlMB [100], UbBk3aOPVy [100], wbPNTSejt [100] = {(444 - 444)}, total = 0;
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
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d\n", a[i], &KTLyxoks[i], &LV0AlMB[i], &YG6LSw[i], &LbN49auCH[i], &UbBk3aOPVy[i]);
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
    for (i = 0; i < n; i = i + 1) {
        if (KTLyxoks[i] > (766 - 686) && UbBk3aOPVy[i] > 0)
            wbPNTSejt[i] += 8000;
        if (KTLyxoks[i] > 85 && LV0AlMB[i] > 80)
            wbPNTSejt[i] += (4543 - 543);
        if (KTLyxoks[i] > 90)
            wbPNTSejt[i] += 2000;
        if (KTLyxoks[i] > 85 && LbN49auCH[i] == 'Y')
            wbPNTSejt[i] += 1000;
        if (LV0AlMB[i] > 80 && YG6LSw[i] == 'Y')
            wbPNTSejt[i] = wbPNTSejt[i] + 850;
    }
    for (i = 0; i < n; i++)
        total += wbPNTSejt[i];
    max = wbPNTSejt[0];
    az3pvK6rAh4 = 0;
    {
        i = 0;
        while (i < n) {
            if (max < wbPNTSejt[i]) {
                az3pvK6rAh4 = i;
                max = wbPNTSejt[i];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", a[az3pvK6rAh4], max, total);
    return 0;
}

