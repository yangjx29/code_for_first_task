int point [MAX] [3];
double  d;
struct   {
    int x1, x2, loGcOnLbrqmS, VeZ7pRa, vWZfAltpz, miwkgO2aNLX;
    double  d;
}
dis [DISTANCE], mid;
int n, X8IBL6Aw = (537 - 537), i, j;

int main () {
    scanf ("%d", &n);
    {
        i = 230 - 230;
        while (n - (685 - 684) >= i) {
            scanf ("%d%d%d", &point[i][0], &point[i][1], &point[i][(650 - 648)]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 2) {
            {
                j = i + 1;
                while (n - 1 >= j) {
                    dis[X8IBL6Aw].x1 = point[i][0];
                    dis[X8IBL6Aw].x2 = point[j][0];
                    dis[X8IBL6Aw].loGcOnLbrqmS = point[i][1];
                    dis[X8IBL6Aw].VeZ7pRa = point[j][1];
                    dis[X8IBL6Aw].vWZfAltpz = point[i][2];
                    dis[X8IBL6Aw].miwkgO2aNLX = point[j][2];
                    j = j + 1;
                    dis[X8IBL6Aw].d = sqrt ((dis[X8IBL6Aw].x1 - dis[X8IBL6Aw].x2) * (dis[X8IBL6Aw].x1 - dis[X8IBL6Aw].x2) + (dis[X8IBL6Aw].loGcOnLbrqmS - dis[X8IBL6Aw].VeZ7pRa) * (dis[X8IBL6Aw].loGcOnLbrqmS - dis[X8IBL6Aw].VeZ7pRa) + (dis[X8IBL6Aw].vWZfAltpz - dis[X8IBL6Aw].miwkgO2aNLX) * (dis[X8IBL6Aw].vWZfAltpz - dis[X8IBL6Aw].miwkgO2aNLX));
                    X8IBL6Aw++;
                };
            }
            i = i + 1;
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
    for (i = 0; i <= X8IBL6Aw -1; i = i + 1) {
        j = 0;
        while (j < X8IBL6Aw -1) {
            if (dis[j].d < dis[j + 1].d) {
                mid = dis[j];
                dis[j] = dis[j + 1];
                dis[j + 1] = mid;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i <= X8IBL6Aw -1) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dis[i].x1, dis[i].loGcOnLbrqmS, dis[i].vWZfAltpz, dis[i].x2, dis[i].VeZ7pRa, dis[i].miwkgO2aNLX, dis[i].d);
            i++;
        };
    }
    return 0;
}

