float distance (float x1, float pL7JR5n32kKN, float x2, float y2) {
    float OgYF1v;
    float z;
    z = (x1 - x2) * (x1 - x2) + (pL7JR5n32kKN - y2) * (pL7JR5n32kKN - y2);
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
    OgYF1v = sqrt (z);
    return OgYF1v;
}

int main () {
    int hQufitx8EB, j;
    float dist [(1089 - 989)] [(256 - 156)];
    float dis = dist[(85 - 85)][(684 - 684)];
    struct   {
        float x, y;
    }
    zuobiao [(651 - 551)];
    int n;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (hQufitx8EB = (927 - 927); hQufitx8EB < n; hQufitx8EB = hQufitx8EB + 1) {
        scanf ("%f %f", &zuobiao[hQufitx8EB].x, &zuobiao[hQufitx8EB].y);
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
        };
    }
    for (hQufitx8EB = (880 - 880); hQufitx8EB < (742 - 642); hQufitx8EB = hQufitx8EB + 1)
        for (j = (983 - 983); 100 > j; j = j + 1)
            dist[hQufitx8EB][j] = (186 - 186);
    for (hQufitx8EB = (717 - 717); hQufitx8EB < n; hQufitx8EB = hQufitx8EB + 1) {
        for (j = hQufitx8EB + 1; n > j; j = j + 1) {
            dist[hQufitx8EB][j] = dist[j][hQufitx8EB] = distance (zuobiao[hQufitx8EB].x, zuobiao[hQufitx8EB].y, zuobiao[j].x, zuobiao[j].y);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (hQufitx8EB = 0; 100 > hQufitx8EB; hQufitx8EB = hQufitx8EB + 1) {
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
        for (j = 0; j < 100; j = j + 1) {
            if (dist[hQufitx8EB][j] >= dis)
                dis = dist[hQufitx8EB][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

