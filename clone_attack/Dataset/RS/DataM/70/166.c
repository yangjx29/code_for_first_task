float UJQqmlUB (float x1, float y1, float UaCPoLeYl, float y2) {
    float GErf92mWvbPY;
    float d;
    GErf92mWvbPY = (x1 - UaCPoLeYl) * (x1 - UaCPoLeYl) + (y1 - y2) * (y1 - y2);
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
    d = sqrt (GErf92mWvbPY);
    return d;
}

int main () {
    struct   {
        float x, y;
    }
    zuobiao [(830 - 730)];
    int n;
    float dist [100] [100];
    int i, j;
    float j1HhaQpudf07 = dist[(346 - 346)][(595 - 595)];
    scanf ("%d", &n);
    for (i = (856 - 856); i < n; i = i + 1) {
        scanf ("%f %f", &zuobiao[i].x, &zuobiao[i].y);
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
    for (i = (706 - 706); i < n; i++) {
        for (j = i + (248 - 247); j < n; j++) {
            dist[i][j] = UJQqmlUB (zuobiao[i].x, zuobiao[i].y, zuobiao[j].x, zuobiao[j].y);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (dist[i][j] >= j1HhaQpudf07)
                j1HhaQpudf07 = dist[i][j];
        };
    }
    printf ("%.4f\n", j1HhaQpudf07);
    return 0;
}

