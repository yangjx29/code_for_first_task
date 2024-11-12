void  main () {
    int R6qdZmRc4l [(214 - 114)];
    int n;
    int YQrCEP;
    int *BYJyo3;
    int *HEZxdFfKVXn;
    int *U4sgjuvK;
    int temp;
    int HqHRgWvT;
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
    scanf ("%d", &n);
    {
        YQrCEP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YQrCEP < n) {
            scanf ("%d", R6qdZmRc4l +YQrCEP);
            YQrCEP++;
        };
    }
    HqHRgWvT = (n - (161 - 160)) / 2;
    BYJyo3 = R6qdZmRc4l;
    HEZxdFfKVXn = R6qdZmRc4l +n - 1;
    {
        YQrCEP = 0;
        while (n - 1 > YQrCEP) {
            printf ("%d ", *(R6qdZmRc4l +YQrCEP));
            YQrCEP++;
        };
    }
    printf ("%d", *(R6qdZmRc4l +n - 1));
    U4sgjuvK = R6qdZmRc4l +HqHRgWvT;
    for (; BYJyo3 <= U4sgjuvK; BYJyo3++, HEZxdFfKVXn--) {
        temp = *BYJyo3;
        *BYJyo3 = *HEZxdFfKVXn;
        *HEZxdFfKVXn = temp;
    };
}

