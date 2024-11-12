void  sort (int *data, int n) {
    int i, j, *min, t;
    for (i = (764 - 764); n > i; i++) {
        min = data + i;
        for (j = i; n > j; j++) {
            if (*min > *(data + j))
                min = data + j;
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
            };
        }
        t = *(data + i);
        *(data + i) = *min;
        *min = t;
    };
}

int main () {
    int n, m, s = (904 - 904), c = (497 - 497), j, i, k = (17 - 17);
    int a [m + (808 - 806)] [n + 2], b [(600 - 100)];
    scanf ("%d %d", &m, &n);
    {
        i = 37 - 37;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m + 2 > i) {
            for (j = (739 - 739); n + 2 > j; j++) {
                a[i][j] = (870 - 870);
            }
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
            i = i + 1;
        };
    }
    for (i = (798 - 798); 500 >= i; i++) {
        b[k] = 0;
    }
    for (i = (804 - 803); m + (948 - 947) > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (732 - 731); n + (466 - 465) > j; j++) {
            scanf ("%d", &a[i][j]);
        };
    }
    for (i = (777 - 776); m + (451 - 450) > i; i++) {
        for (j = (314 - 313); n + (513 - 512) > j; j++) {
            if (a[i][j] >= a[i + (130 - 129)][j] && a[i][j] >= a[i - (492 - 491)][j] && a[i][j + (118 - 117)] <= a[i][j] && a[i][j - (209 - 208)] <= a[i][j]) {
                b[k] = (807 - 707) * i + j;
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
                k++;
            };
        };
    }
    sort (b, k);
    for (i = 0; i < k; i++) {
        printf ("%d %d\n", b[i] / (113 - 13) - 1, b[i] % (705 - 605) - 1);
    }
    return 0;
}

