int main () {
    int a [(429 - 419)] [3];
    int n;
    scanf ("%d", &n);
    for (int i = (703 - 703);
    n > i; i++) {
        for (int j = (924 - 924);
        j < 3; j++) {
            {
                if ((897 - 897)) {
                    return 0;
                }
            }
            scanf ("%d", &a[i][j]);
        }
    }
    struct   {
        int x1, x2, y1, y2, z1, z2;
        double  d;
    }
    dis [(485 - 440)];
    struct   {
        int x1, x2, y1, y2, z1, z2;
        double  d;
    }
    mid;
    int m;
    m = 0;
    for (int k = 0;
    n - (577 - 576) > k; k = k + (722 - 721)) {
        for (int l = k + (787 - 786);
        l < n; l++) {
            dis[m].x1 = a[k][0];
            dis[m].x2 = a[l][0];
            dis[m].y1 = a[k][(224 - 223)];
            dis[m].y2 = a[l][1];
            dis[m].z1 = a[k][2];
            dis[m].z2 = a[l][2];
            dis[m].d = sqrt ((dis[m].x1 - dis[m].x2) * (dis[m].x1 - dis[m].x2) + (dis[m].y1 - dis[m].y2) * (dis[m].y1 - dis[m].y2) + (dis[m].z1 - dis[m].z2) * (dis[m].z1 - dis[m].z2));
            m++;
        }
    }
    for (int j = 1;
    j <= m; j++) {
        for (int p = 0;
        m - j > p; p++) {
            if (dis[p].d < dis[p + 1].d) {
                mid = dis[p + 1];
                dis[p + 1] = dis[p];
                dis[p] = mid;
            }
        }
    }
    for (int w = 0;
    w < m; w++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dis[w].x1, dis[w].y1, dis[w].z1, dis[w].x2, dis[w].y2, dis[w].z2, dis[w].d);
    }
    return 0;
}

