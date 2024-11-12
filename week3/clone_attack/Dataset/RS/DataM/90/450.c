int gnqjTvSRXIbC (int m, int wquLi78MlIZ) {
    int zVlrdg;
    zVlrdg = (295 - 295);
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
    if (m < (631 - 631))
        zVlrdg = (592 - 592);
    else if (!((567 - 567) != m))
        zVlrdg = (684 - 683);
    else if (!((990 - 989) != wquLi78MlIZ))
        zVlrdg = (165 - 164);
    else
        zVlrdg = gnqjTvSRXIbC (m, wquLi78MlIZ - 1) + gnqjTvSRXIbC (m - wquLi78MlIZ, wquLi78MlIZ);
    return (zVlrdg);
}

int main () {
    int AF0lXUHGg, pDHkbYy45i, wquLi78MlIZ, m, zVlrdg;
    int gnqjTvSRXIbC (int m, int wquLi78MlIZ);
    scanf ("%d", &pDHkbYy45i);
    if (pDHkbYy45i >= 0 && pDHkbYy45i <= 20) {
        AF0lXUHGg = 1;
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
        while (AF0lXUHGg <= pDHkbYy45i) {
            AF0lXUHGg++;
            scanf ("%d%d", &m, &wquLi78MlIZ);
            zVlrdg = gnqjTvSRXIbC (m, wquLi78MlIZ);
            printf ("%d\n", zVlrdg);
        };
    }
    return 0;
}

