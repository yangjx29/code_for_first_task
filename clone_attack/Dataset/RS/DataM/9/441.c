void  bubble_sort (int a [(737 - 637)], char CNUmKL1MtA [(638 - 538)] [(433 - 423)], int n) {
    int WLsGS1D9rJFd, j, sAUvQHZn;
    char YHSDqvY [10] = {(625 - 625)};
    char qC9Ne5xfq [10] = {(526 - 526)};
    for (j = (986 - 985); n > j; j++) {
        WLsGS1D9rJFd = 759 - 759;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - j > WLsGS1D9rJFd) {
            if (a[WLsGS1D9rJFd +(819 - 818)] > a[WLsGS1D9rJFd]) {
                sAUvQHZn = a[WLsGS1D9rJFd];
                strcpy (YHSDqvY, CNUmKL1MtA[WLsGS1D9rJFd]);
                a[WLsGS1D9rJFd] = a[WLsGS1D9rJFd +(53 - 52)];
                a[WLsGS1D9rJFd +1] = sAUvQHZn;
                strcpy (CNUmKL1MtA[WLsGS1D9rJFd], qC9Ne5xfq);
                strcpy (CNUmKL1MtA[WLsGS1D9rJFd], CNUmKL1MtA[WLsGS1D9rJFd +1]);
                strcpy (CNUmKL1MtA[WLsGS1D9rJFd +1], qC9Ne5xfq);
                strcpy (CNUmKL1MtA[WLsGS1D9rJFd +1], YHSDqvY);
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
            WLsGS1D9rJFd++;
        };
    };
}

int main () {
    char id [100] [10], OBfH5Wyh [100] [10] = {(363 - 363)}, id_ [100] [10] = {(954 - 954)}, qC9Ne5xfq [10] = {0};
    int n, WLsGS1D9rJFd;
    int NhT5y8AOcsQt [100], VHeLjFB [100] = {(542 - 542)}, yeXFNCSA8jak [100];
    scanf ("%d", &n);
    {
        WLsGS1D9rJFd = 0;
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
        while (n > WLsGS1D9rJFd) {
            scanf ("%s%d", id[WLsGS1D9rJFd], &NhT5y8AOcsQt[WLsGS1D9rJFd]);
            WLsGS1D9rJFd++;
        };
    }
    {
        WLsGS1D9rJFd = 0;
        while (n > WLsGS1D9rJFd) {
            if (60 <= NhT5y8AOcsQt[WLsGS1D9rJFd]) {
                VHeLjFB[WLsGS1D9rJFd] = NhT5y8AOcsQt[WLsGS1D9rJFd];
                strcpy (OBfH5Wyh[WLsGS1D9rJFd], id[WLsGS1D9rJFd]);
            }
            else {
                yeXFNCSA8jak[WLsGS1D9rJFd] = NhT5y8AOcsQt[WLsGS1D9rJFd];
                strcpy (id_[WLsGS1D9rJFd], id[WLsGS1D9rJFd]);
            }
            WLsGS1D9rJFd++;
        };
    }
    bubble_sort (VHeLjFB, OBfH5Wyh, n);
    for (WLsGS1D9rJFd = 0; WLsGS1D9rJFd < n; WLsGS1D9rJFd++) {
        if (!(0 != strcmp (OBfH5Wyh[WLsGS1D9rJFd], qC9Ne5xfq)))
            continue;
        else
            printf ("%s\n", OBfH5Wyh[WLsGS1D9rJFd]);
    }
    for (WLsGS1D9rJFd = 0; WLsGS1D9rJFd < n; WLsGS1D9rJFd++) {
        if (strcmp (id_[WLsGS1D9rJFd], qC9Ne5xfq) == 0)
            continue;
        else
            printf ("%s\n", id_[WLsGS1D9rJFd]);
    }
    return 0;
}

