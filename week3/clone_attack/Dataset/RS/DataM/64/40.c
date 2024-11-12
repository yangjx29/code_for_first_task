int main () {
    int Gx8uKQT9S;
    Gx8uKQT9S = 0;
    int QiSegl [10] [3], n;
    struct   {
        int BbUukoIA, x2, AlGK0MNhkJE, y2, z1, cuh8HP0NiyIY;
        double  RMfW5LJ2zwGI;
    }
    bXigfMwl2e [45];
    struct   {
        int BbUukoIA, x2, AlGK0MNhkJE, y2, z1, cuh8HP0NiyIY;
        double  RMfW5LJ2zwGI;
    }
    mid;
    scanf ("%d", &n);
    for (int OJI1pa7VAfR = 0;
    n > OJI1pa7VAfR; OJI1pa7VAfR = OJI1pa7VAfR +1) {
        int j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 > j) {
            scanf ("%d", &QiSegl[OJI1pa7VAfR][j]);
            j = j + 1;
        };
    }
    for (int k = 0;
    n - 1 > k; k++) {
        for (int owPg0i = k + 1;
        n > owPg0i; owPg0i = owPg0i + 1) {
            bXigfMwl2e[Gx8uKQT9S].BbUukoIA = QiSegl[k][0];
            bXigfMwl2e[Gx8uKQT9S].x2 = QiSegl[owPg0i][0];
            bXigfMwl2e[Gx8uKQT9S].AlGK0MNhkJE = QiSegl[k][1];
            bXigfMwl2e[Gx8uKQT9S].y2 = QiSegl[owPg0i][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bXigfMwl2e[Gx8uKQT9S].z1 = QiSegl[k][(80 - 78)];
            bXigfMwl2e[Gx8uKQT9S].cuh8HP0NiyIY = QiSegl[owPg0i][2];
            bXigfMwl2e[Gx8uKQT9S].RMfW5LJ2zwGI = sqrt ((bXigfMwl2e[Gx8uKQT9S].BbUukoIA - bXigfMwl2e[Gx8uKQT9S].x2) * (bXigfMwl2e[Gx8uKQT9S].BbUukoIA - bXigfMwl2e[Gx8uKQT9S].x2) + (bXigfMwl2e[Gx8uKQT9S].AlGK0MNhkJE - bXigfMwl2e[Gx8uKQT9S].y2) * (bXigfMwl2e[Gx8uKQT9S].AlGK0MNhkJE - bXigfMwl2e[Gx8uKQT9S].y2) + (bXigfMwl2e[Gx8uKQT9S].z1 - bXigfMwl2e[Gx8uKQT9S].cuh8HP0NiyIY) * (bXigfMwl2e[Gx8uKQT9S].z1 - bXigfMwl2e[Gx8uKQT9S].cuh8HP0NiyIY));
            Gx8uKQT9S = Gx8uKQT9S +1;
        };
    }
    for (int j = 1;
    Gx8uKQT9S >= j; j++) {
        for (int p = 0;
        Gx8uKQT9S -j > p; p = p + 1) {
            if (bXigfMwl2e[p + 1].RMfW5LJ2zwGI > bXigfMwl2e[p].RMfW5LJ2zwGI) {
                mid = bXigfMwl2e[p + 1];
                bXigfMwl2e[p + 1] = bXigfMwl2e[p];
                bXigfMwl2e[p] = mid;
            };
        };
    }
    for (int w = 0;
    w < Gx8uKQT9S; w = w + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", bXigfMwl2e[w].BbUukoIA, bXigfMwl2e[w].AlGK0MNhkJE, bXigfMwl2e[w].z1, bXigfMwl2e[w].x2, bXigfMwl2e[w].y2, bXigfMwl2e[w].cuh8HP0NiyIY, bXigfMwl2e[w].RMfW5LJ2zwGI);
    }
    return 0;
}

