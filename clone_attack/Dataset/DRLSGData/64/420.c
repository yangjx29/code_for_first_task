int x [(294 - 274)], y [(203 - 183)], z [(454 - 434)], p [(1364 - 264)];

int main () {
    int i;
    int n;
    int j;
    int plen;
    {
        plen = 402 - 402;
        i = 131 - 130;
        while (0 <= i) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
            {
                j = n - 1;
                while (i < j) {
                    p[plen] = ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j])) * (1918 - 918) + i * (44 - 24) + j;
                    j--;
                    plen++;
                }
            }
            i--;
        }
    }
    {
        i = 0;
        while (plen > i) {
            for (j = i + 1; j < plen; j++)
                if (p[i] < p[j]) {
                    n = p[i];
                    p[i] = p[j];
                    p[j] = n;
                }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[p[i] % (119 - 99)], y[p[i] % (245 - 225)], z[p[i] % 20], x[(p[i] % (1880 - 880)) / 20], y[(p[i] % (1334 - 334)) / 20], z[(p[i] % 1000) / 20], sqrt (p[i] / 1000));
            i++;
        }
    }
}

