int main () {
    char s1 [80] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char BKpeVIXFi [80];
    char qtxm5iIEA [80];
    int G8a7UX, dR4sVTJu, u4bvfxQGs8rV, j, FecfAw = 0, CT7aWvH = 0;
    scanf ("%d %s %d", &G8a7UX, BKpeVIXFi, &dR4sVTJu);
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
    {
        u4bvfxQGs8rV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == BKpeVIXFi[u4bvfxQGs8rV])) {
            if ('a' <= BKpeVIXFi[u4bvfxQGs8rV] && 'z' >= BKpeVIXFi[u4bvfxQGs8rV]) {
                BKpeVIXFi[u4bvfxQGs8rV] = BKpeVIXFi[u4bvfxQGs8rV] - 32;
            }
            for (j = 0; 36 > j; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (s1[j] == BKpeVIXFi[u4bvfxQGs8rV]) {
                    FecfAw = G8a7UX *FecfAw+j;
                };
            }
            u4bvfxQGs8rV = u4bvfxQGs8rV + 1;
        };
    }
    for (u4bvfxQGs8rV = 0;; u4bvfxQGs8rV = u4bvfxQGs8rV + 1) {
        qtxm5iIEA[u4bvfxQGs8rV] = s1[FecfAw % dR4sVTJu];
        FecfAw = FecfAw / dR4sVTJu;
        if (FecfAw == 0) {
            break;
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
        }
        CT7aWvH = CT7aWvH +1;
    }
    {
        u4bvfxQGs8rV = CT7aWvH -1;
        while (u4bvfxQGs8rV >= 0) {
            printf ("%c", qtxm5iIEA[u4bvfxQGs8rV]);
            u4bvfxQGs8rV = u4bvfxQGs8rV - 1;
        };
    }
    printf ("\0");
    return 0;
}

