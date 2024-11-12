int main () {
    int zhMnIZ8 [100];
    int a [(811 - 711)];
    int b [100];
    int m;
    int UDucZ3YfM8;
    int gnN0coqOhH;
    int j;
    j = 0;
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
    gnN0coqOhH = 0;
    scanf ("%d", &m);
    UDucZ3YfM8 = 0;
    for (UDucZ3YfM8 = 0; m > UDucZ3YfM8; UDucZ3YfM8 = UDucZ3YfM8 +1)
        scanf ("%d %d", &a[UDucZ3YfM8], &b[UDucZ3YfM8]);
    UDucZ3YfM8 = 0;
    {
        UDucZ3YfM8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UDucZ3YfM8 < m) {
            zhMnIZ8[UDucZ3YfM8] = 0;
            for (j = gnN0coqOhH; j < m; j = j + 1) {
                gnN0coqOhH = j + 1;
                if (a[j] >= 90 && a[j] <= 140 && b[j] >= 60 && b[j] <= 90)
                    zhMnIZ8[UDucZ3YfM8]++;
                else
                    break;
            }
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
            UDucZ3YfM8 = UDucZ3YfM8 +1;
        };
    }
    gnN0coqOhH = 0;
    {
        gnN0coqOhH = 0;
        while (gnN0coqOhH < UDucZ3YfM8) {
            if (zhMnIZ8[gnN0coqOhH] > zhMnIZ8[0])
                zhMnIZ8[0] = zhMnIZ8[gnN0coqOhH];
            gnN0coqOhH++;
        };
    }
    printf ("%d\n", zhMnIZ8[0]);
    return 0;
}

