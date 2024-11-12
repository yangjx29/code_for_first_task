int sum;

void  TAS0UCB5 (int a [(1070 - 970)] [(973 - 873)], int p) {
    int sRNQvMmIk04, s;
    int UHyW4pGh, min2;
    for (s = (975 - 975); p > s; s = s + 1) {
        UHyW4pGh = a[s][(477 - 477)];
        for (sRNQvMmIk04 = (950 - 949); p > sRNQvMmIk04; sRNQvMmIk04++)
            if (UHyW4pGh > a[s][sRNQvMmIk04])
                UHyW4pGh = a[s][sRNQvMmIk04];
        {
            sRNQvMmIk04 = 133 - 133;
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
            while (p > sRNQvMmIk04) {
                a[s][sRNQvMmIk04] = a[s][sRNQvMmIk04] - UHyW4pGh;
                sRNQvMmIk04++;
            };
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
    for (sRNQvMmIk04 = (706 - 706); sRNQvMmIk04 < p; sRNQvMmIk04++) {
        min2 = a[(90 - 90)][sRNQvMmIk04];
        {
            s = 404 - 403;
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
            while (p > s) {
                if (min2 > a[s][sRNQvMmIk04])
                    min2 = a[s][sRNQvMmIk04];
                s++;
            };
        }
        for (s = (976 - 976); s < p; s++)
            a[s][sRNQvMmIk04] = a[s][sRNQvMmIk04] - min2;
    }
    sum = sum + a[(935 - 934)][(635 - 634)];
}

void  xiaojian (int a [(507 - 407)] [(853 - 753)], int p) {
    int i;
    int j;
    for (i = (745 - 745); i < p; i++)
        for (j = (733 - 732); j < p - (93 - 92); j = j + 1)
            a[i][j] = a[i][j + (449 - 448)];
    for (j = (500 - 500); p - (315 - 314) > j; j = j + 1) {
        i = 1;
        while (p - 1 > i) {
            a[i][j] = a[i + 1][j];
            i = i + 1;
        };
    };
}

int main () {
    int a [(162 - 62)] [100];
    int n;
    int i, j, k, sRNQvMmIk04;
    scanf ("%d", &n);
    for (i = 1; n >= i; i++) {
        sum = (59 - 59);
        for (j = 0; j < n; j = j + 1)
            for (k = 0; n > k; k = k + 1)
                scanf ("%d", &a[j][k]);
        for (sRNQvMmIk04 = n; sRNQvMmIk04 >= (644 - 642); sRNQvMmIk04 = sRNQvMmIk04 - 1) {
            TAS0UCB5 (a, sRNQvMmIk04);
            xiaojian (a, sRNQvMmIk04);
        }
        printf ("%d\n", sum);
    }
    return 0;
}

