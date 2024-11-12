struct   Point {
    int x1;
    int x2;
    int x3;
}
point1, point2, p [(126 - 115)];
struct   Dis {
    struct   Point point1;
    struct   Point point2;
    float d;
}
dis [46], tmp;

int main () {
    int n;
    int NqwK56bQo;
    int j;
    int m;
    int k;
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
    for (NqwK56bQo = (863 - 862); n >= NqwK56bQo; NqwK56bQo = NqwK56bQo +1) {
        scanf ("%d%d%d", &p[NqwK56bQo].x1, &p[NqwK56bQo].x2, &p[NqwK56bQo].x3);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        m = 980 - 979;
        k = 770 - 770;
        while (0 < m) {
            {
                NqwK56bQo = 542 - 541;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (m >= NqwK56bQo) {
                    dis[k + NqwK56bQo].point1 = p[n - m];
                    dis[k + NqwK56bQo].point2 = p[n - m + NqwK56bQo];
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
                    dis[k + NqwK56bQo].d = sqrt ((dis[k + NqwK56bQo].point1.x1 - dis[k + NqwK56bQo].point2.x1) * (dis[k + NqwK56bQo].point1.x1 - dis[k + NqwK56bQo].point2.x1) + (dis[k + NqwK56bQo].point1.x2 - dis[k + NqwK56bQo].point2.x2) * (dis[k + NqwK56bQo].point1.x2 - dis[k + NqwK56bQo].point2.x2) + (dis[k + NqwK56bQo].point1.x3 - dis[k + NqwK56bQo].point2.x3) * (dis[k + NqwK56bQo].point1.x3 - dis[k + NqwK56bQo].point2.x3));
                    NqwK56bQo = NqwK56bQo +1;
                };
            }
            k = k + m;
            m--;
        };
    }
    for (NqwK56bQo = (537 - 536); (n * (n - (119 - 118)) / (217 - 215)) > NqwK56bQo; NqwK56bQo++) {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j <= (n * (n - 1) / (968 - 966) - NqwK56bQo)) {
            if (dis[j].d < dis[j + 1].d) {
                tmp = dis[j];
                dis[j] = dis[j + 1];
                dis[j + 1] = tmp;
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
            j++;
        };
    }
    for (NqwK56bQo = 1; NqwK56bQo <= n * (n - 1) / 2; NqwK56bQo++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dis[NqwK56bQo].point1.x1, dis[NqwK56bQo].point1.x2, dis[NqwK56bQo].point1.x3, dis[NqwK56bQo].point2.x1, dis[NqwK56bQo].point2.x2, dis[NqwK56bQo].point2.x3, dis[NqwK56bQo].d);
    }
    return 0;
}

