int main () {
    int ybCdpf;
    int k;
    int a [1000];
    scanf ("%d %d", &ybCdpf, &k);
    for (int t = 0;
    t < ybCdpf; t++) {
        scanf ("%d ", &a[t]);
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
    {
        int i = 0;
        while (ybCdpf - 1 > i) {
            {
                int m = i + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (m < ybCdpf) {
                    if (a[i] + a[m] == k) {
                        return 0;
                    }
                    if (i == ybCdpf - 2 && m == ybCdpf - 1 && a[i] + a[m] != k) {
                        return 0;
                    }
                    m = m + 1;
                };
            }
            i = i + 1;
        };
    };
}

