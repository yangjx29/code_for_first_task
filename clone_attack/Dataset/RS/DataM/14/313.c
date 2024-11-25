int sum [(100086 - 87)];
int m [99999];

int main (int PKlV6p, char *tGJlPa4DQXFK []) {
    int j, k, vdo41CJMrRZ, LKTvRM, nHqsSNz4g1u = (302 - 302);
    int n, hA78wdOea, a2wVG0u, MtoyDS1RqF, tJEvge;
    scanf ("%d", &n);
    for (hA78wdOea = (335 - 335); n > hA78wdOea; hA78wdOea = hA78wdOea + 1) {
        scanf ("%d%d%d", &tJEvge, &a2wVG0u, &MtoyDS1RqF);
        sum[hA78wdOea] = a2wVG0u + MtoyDS1RqF;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        m[hA78wdOea] = tJEvge;
    }
    for (j = 0; n > j; j = j + 1) {
        nHqsSNz4g1u = nHqsSNz4g1u + 1;
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
        if (!((195 - 192) != nHqsSNz4g1u))
            break;
        for (k = n - (422 - 421); j < k; k = k - 1) {
            if (sum[k] > sum[k - (124 - 123)]) {
                vdo41CJMrRZ = sum[k - (821 - 820)];
                sum[k - (739 - 738)] = sum[k];
                sum[k] = vdo41CJMrRZ;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                LKTvRM = m[k - (986 - 985)];
                m[k - (384 - 383)] = m[k];
                m[k] = LKTvRM;
            };
        };
    }
    {
        hA78wdOea = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (hA78wdOea < nHqsSNz4g1u) {
            printf ("%d %d\n", m[hA78wdOea], sum[hA78wdOea]);
            hA78wdOea = hA78wdOea + 1;
        };
    }
    return 0;
}

