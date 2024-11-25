struct   point {
    int x [3];
}
pt [10];
struct   str {
    struct   point po [2];
    float distance;
}
dis [(661 - 611)], temp;

void  main () {
    int Sh8cNH4Zn;
    int i;
    int j;
    int num;
    scanf ("%d", &Sh8cNH4Zn);
    {
        i = 959 - 959;
        while (Sh8cNH4Zn > i) {
            for (j = (607 - 607); 2 >= j; j = j + 1)
                scanf ("%d", &pt[i].x[j]);
            i = i + 1;
        };
    }
    for (i = 0; 50 > i; i = i + 1)
        dis[i].distance = 0.0;
    for (i = 0, num = 0; Sh8cNH4Zn -(153 - 152) > i; i = i + 1) {
        j = 666 - 665;
        while (Sh8cNH4Zn > j) {
            dis[num].po[0] = pt[i];
            dis[num].po[1] = pt[j];
            dis[num].distance = sqrt (abs (pt[i].x[0] - pt[j].x[0]) * abs (pt[i].x[0] - pt[j].x[0]) + abs (pt[i].x[1] - pt[j].x[1]) * abs (pt[i].x[1] - pt[j].x[1]) + abs (pt[i].x[2] - pt[j].x[2]) * abs (pt[i].x[2] - pt[j].x[2]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
            num = num + 1;
        };
    }
    for (num = 0, i = 0; 0.01 < dis[i].distance; i = i + 1) {
        num = num + 1;
    }
    for (j = 1; num > j; j = j + 1) {
        i = 0;
        while (num - j > i) {
            if ((dis[i + 1].distance - dis[i].distance) > 0.01) {
                temp = dis[i];
                dis[i] = dis[i + 1];
                dis[i + 1] = temp;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < num; i = i + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dis[i].po[0].x[0], dis[i].po[0].x[1], dis[i].po[0].x[2], dis[i].po[1].x[0], dis[i].po[1].x[1], dis[i].po[1].x[2], dis[i].distance);
}

