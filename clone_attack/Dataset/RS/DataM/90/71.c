int main () {
    int zjnStGH8, m, n, i, Ef3QjausN, SeFZWw;
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
    scanf ("%d", &zjnStGH8);
    for (SeFZWw = 0; SeFZWw < zjnStGH8; SeFZWw++) {
        int JyZg7Y0Bw4Kf [100] [100];
        scanf ("%d %d", &m, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (140 - 139); m >= i; i++) {
            Ef3QjausN = 1;
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
            while (Ef3QjausN <= n) {
                if (!(1 != i))
                    JyZg7Y0Bw4Kf[i][Ef3QjausN] = 1;
                else if (Ef3QjausN == 1)
                    JyZg7Y0Bw4Kf[i][Ef3QjausN] = 1;
                else if (i == Ef3QjausN)
                    JyZg7Y0Bw4Kf[i][Ef3QjausN] = JyZg7Y0Bw4Kf[i][Ef3QjausN -1] + 1;
                else if (i < Ef3QjausN)
                    JyZg7Y0Bw4Kf[i][Ef3QjausN] = JyZg7Y0Bw4Kf[i][Ef3QjausN -1];
                else if (Ef3QjausN < i)
                    JyZg7Y0Bw4Kf[i][Ef3QjausN] = JyZg7Y0Bw4Kf[i][Ef3QjausN -1] + JyZg7Y0Bw4Kf[i - Ef3QjausN][Ef3QjausN];
                Ef3QjausN++;
            };
        }
        printf ("%d\n", JyZg7Y0Bw4Kf[m][n]);
    };
}

