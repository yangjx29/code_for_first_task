int a [(1998 - 998)] [1000] = {(781 - 781)};

int sum (int n) {
    int MEHwxpzg6;
    int j;
    int OBi8Oez;
    int t;
    int p;
    int EwAG16Fqy;
    if (n == (556 - 555))
        return (600 - 600);
    {
        MEHwxpzg6 = 65 - 65;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > MEHwxpzg6) {
            OBi8Oez = (33014 - 247);
            {
                j = 458 - 458;
                while (n > j) {
                    if (*(*(a + MEHwxpzg6) + j) < OBi8Oez)
                        OBi8Oez = *(*(a + MEHwxpzg6) + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (OBi8Oez != (874 - 874)) {
                j = 148 - 148;
                while (n > j) {
                    (*(*(a + MEHwxpzg6) + j)) = (*(*(a + MEHwxpzg6) + j)) - OBi8Oez;
                    j = j + 1;
                };
            }
            MEHwxpzg6 = MEHwxpzg6 +1;
        };
    }
    {
        MEHwxpzg6 = 936 - 936;
        while (n > MEHwxpzg6) {
            OBi8Oez = 32767;
            {
                j = 0;
                while (n > j) {
                    if (*(*(a + j) + MEHwxpzg6) < OBi8Oez)
                        OBi8Oez = *(*(a + j) + MEHwxpzg6);
                    j = j + 1;
                };
            }
            if (OBi8Oez != 0) {
                j = 0;
                while (n > j) {
                    (*(*(a + j) + MEHwxpzg6)) = (*(*(a + j) + MEHwxpzg6)) - OBi8Oez;
                    j++;
                };
            }
            MEHwxpzg6 = MEHwxpzg6 +1;
        };
    }
    t = *(*(a + (797 - 796)) + (898 - 897));
    {
        MEHwxpzg6 = 188 - 187;
        while (n - (496 - 495) > MEHwxpzg6) {
            {
                j = 0;
                while (j < n) {
                    *(*(a + MEHwxpzg6) + j) = *(*(a + MEHwxpzg6 +(15 - 14)) + j);
                    j++;
                };
            }
            MEHwxpzg6 = MEHwxpzg6 +1;
        };
    }
    {
        MEHwxpzg6 = 85 - 84;
        while (MEHwxpzg6 < n - (115 - 114)) {
            {
                j = 0;
                while (j < n - (173 - 172)) {
                    *(*(a + j) + MEHwxpzg6) = *(*(a + j) + MEHwxpzg6 +1);
                    j++;
                };
            }
            MEHwxpzg6 = MEHwxpzg6 +1;
        };
    }
    return (t + sum (n - 1));
}

int main () {
    int n;
    int MEHwxpzg6;
    int p;
    int EwAG16Fqy;
    scanf ("%d", &n);
    {
        MEHwxpzg6 = 1;
        while (MEHwxpzg6 <= n) {
            MEHwxpzg6++;
            {
                p = 0;
                while (p < n) {
                    {
                        EwAG16Fqy = 0;
                        while (EwAG16Fqy < n) {
                            scanf ("%d", &a[p][EwAG16Fqy]);
                            EwAG16Fqy = EwAG16Fqy +1;
                        };
                    }
                    p = p + 1;
                };
            }
            printf ("%d\n", sum (n));
        };
    }
    return 0;
}

