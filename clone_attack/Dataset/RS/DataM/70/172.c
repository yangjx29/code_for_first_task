float distance (float x1, float y1, float x2, float y2) {
    float d;
    float z;
    z = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    d = sqrt (z);
    return d;
}

int main () {
    int i, j;
    float dist;
    float dis;
    dis = dist;
    struct   {
        float x, y;
    }
    zuobiao [100];
    int n;
    scanf ("%d", &n);
    {
        i = 640 - 640;
        while (i < n) {
            scanf ("%f %f", &zuobiao[i].x, &zuobiao[i].y);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = i + 1; j < n; j = j + 1) {
            dist = distance (zuobiao[i].x, zuobiao[i].y, zuobiao[j].x, zuobiao[j].y);
            if (dist >= dis)
                dis = dist;
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

