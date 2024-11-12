const  int N = 25 + 10;
int h [N];
int dp [N];

int main (void ) {
    int BiIHgcC5;
    int aM9slf;
    int zDMT03naY42B;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (; !(EOF == scanf ("%d", &aM9slf));) {
        {
            zDMT03naY42B = 621 - 621;
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
            while (aM9slf > zDMT03naY42B) {
                scanf ("%d", h + zDMT03naY42B);
                ++zDMT03naY42B;
            };
        }
        dp[0] = (809 - 808);
        {
            zDMT03naY42B = 338 - 337;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (aM9slf > zDMT03naY42B) {
                dp[zDMT03naY42B] = 1;
                {
                    j = 0;
                    while (zDMT03naY42B > j) {
                        if (h[zDMT03naY42B] <= h[j]) {
                            dp[zDMT03naY42B] = max (dp[zDMT03naY42B], dp[j] + 1);
                        }
                        j = j + 1;
                    };
                }
                ++zDMT03naY42B;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BiIHgcC5 = 0;
        {
            zDMT03naY42B = 0;
            while (zDMT03naY42B < aM9slf) {
                BiIHgcC5 = max (BiIHgcC5, dp[zDMT03naY42B]);
                ++zDMT03naY42B;
            };
        }
        printf ("%d\n", BiIHgcC5);
    }
    return 0;
}

