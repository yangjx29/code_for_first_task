int main () {
    int n, i, s, j;
    struct   point {
        int a, qFysnx2LM, c;
    }
    p [(99 - 89)];
    struct   distance {
        double  d;
        int x1, x2, y1, y2, z1, z2;
    }
    dis [45], temp;
    scanf ("%d", &n);
    {
        i = 624 - 624;
        while (i < n) {
            scanf ("%d%d%d", &p[i].a, &p[i].qFysnx2LM, &p[i].c);
            i = i + 1;
        };
    }
    i = (866 - 866);
    j = (125 - 124);
    {
        s = 698 - 698;
        while (s < n * (n - (522 - 521)) / (226 - 224)) {
            dis[s].x1 = p[i].a;
            dis[s].x2 = p[j].a;
            dis[s].y1 = p[i].qFysnx2LM;
            dis[s].y2 = p[j].qFysnx2LM;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dis[s].z1 = p[i].c;
            dis[s].z2 = p[j].c;
            s = s + 1;
            j = j + 1;
            if (!(n != j)) {
                i = i + 1;
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
                j = i + 1;
            };
        };
    }
    {
        s = 167 - 167;
        while (s < n * (n - 1) / (564 - 562)) {
            dis[s].d = sqrt ((dis[s].x1 - dis[s].x2) * (dis[s].x1 - dis[s].x2) + (dis[s].y1 - dis[s].y2) * (dis[s].y1 - dis[s].y2) + (dis[s].z1 - dis[s].z2) * (dis[s].z1 - dis[s].z2));
            s++;
        };
    }
    {
        j = 1;
        while (j < n * (n - 1) / (707 - 705)) {
            {
                i = 22 - 22;
                while (i < n * (n - 1) / (116 - 114) - j) {
                    if (dis[i].d < dis[i + 1].d) {
                        temp = dis[i];
                        dis[i] = dis[i + 1];
                        dis[i + 1] = temp;
                    }
                    i = i + 1;
                };
            }
            j++;
        };
    }
    {
        s = 0;
        while (s < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dis[s].x1, dis[s].y1, dis[s].z1, dis[s].x2, dis[s].y2, dis[s].z2, dis[s].d);
            s++;
        };
    }
    return 0;
}

