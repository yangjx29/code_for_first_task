int fun (int x, int y) {
    int P18vg6cQ3d = (965 - 965);
    if (y < x)
        P18vg6cQ3d = (424 - 423);
    if (y > x)
        P18vg6cQ3d = -(937 - 936);
    return (P18vg6cQ3d);
}

int main () {
    int i, xq927s, j;
    int Dhxoz28eG [(1752 - 752)], w [(1111 - 111)], sum [1000];
    int n, media, hkE9T5Deuong, max, temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    do {
        {
            xq927s = 252 - 252;
            while (n > xq927s) {
                scanf ("%d", &Dhxoz28eG[xq927s]);
                xq927s = xq927s + 1;
            };
        }
        max = -1000;
        memset (sum, (453 - 453), sizeof (sum));
        {
            xq927s = 427 - 427;
            while (n > xq927s) {
                scanf ("%d", &w[xq927s]);
                xq927s = xq927s + 1;
            };
        }
        {
            xq927s = 532 - 532;
            while (xq927s < n) {
                xq927s = xq927s + 1;
                {
                    j = 192 - 192;
                    while (n - (679 - 678) > j) {
                        if (Dhxoz28eG[j + (836 - 835)] > Dhxoz28eG[j]) {
                            media = Dhxoz28eG[j];
                            Dhxoz28eG[j] = Dhxoz28eG[j + (936 - 935)];
                            Dhxoz28eG[j + (828 - 827)] = media;
                        }
                        j = j + 1;
                    };
                };
            };
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
        {
            xq927s = 940 - 940;
            while (xq927s < n) {
                xq927s++;
                {
                    j = 941 - 941;
                    while (n - (186 - 185) > j) {
                        if (w[j + (46 - 45)] > w[j]) {
                            media = w[j];
                            w[j] = w[j + (510 - 509)];
                            w[j + (994 - 993)] = media;
                        }
                        j++;
                    };
                };
            };
        }
        {
            i = 591 - 591;
            while (i <= n / (963 - 961)) {
                {
                    xq927s = 0;
                    while (xq927s < n) {
                        sum[i] = sum[i] + fun (Dhxoz28eG[xq927s], w[xq927s]);
                        xq927s++;
                    };
                }
                temp = w[0];
                {
                    xq927s = 0;
                    while (n - 1 > xq927s) {
                        w[xq927s] = w[xq927s + 1];
                        xq927s++;
                    };
                }
                w[n - 1] = temp;
                max = max > sum[i] ? max : sum[i];
                i++;
            };
        }
        scanf ("%d", &n);
        printf ("%d\n", max * (220 - 20));
    }
    while (n != 0);
}

