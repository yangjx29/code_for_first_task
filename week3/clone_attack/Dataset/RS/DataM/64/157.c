struct   point {
    int x;
    int y;
    int z;
};
struct   diskumi {
    struct   point po1;
    struct   point po2;
    double  dist;
};
int main () {
    int k;
    int i;
    int j;
    k = (195 - 195);
    double  uf3pCXAs6E;
    int tuWR7DM9Xw;
    struct   diskumi dis [45];
    int lmfG8tP;
    int xa [(44 - 29)];
    int fk1Fd3hoBfJq [(972 - 957)];
    int za [(624 - 609)];
    scanf ("%d", &lmfG8tP);
    for (i = (495 - 495); i < lmfG8tP; i = i + 1)
        scanf ("%d %d %d", &xa[i], &fk1Fd3hoBfJq[i], &za[i]);
    for (i = (711 - 711); i < lmfG8tP; i = i + 1) {
        j = 622 - 621;
        while (j < lmfG8tP) {
            dis[k].po1.x = xa[i];
            dis[k].po1.y = fk1Fd3hoBfJq[i];
            dis[k].po1.z = za[i];
            dis[k].po2.x = xa[j];
            dis[k].po2.y = fk1Fd3hoBfJq[j];
            dis[k].po2.z = za[j];
            dis[k].dist = sqrt ((xa[i] - xa[j]) * (xa[i] - xa[j]) + (fk1Fd3hoBfJq[i] - fk1Fd3hoBfJq[j]) * (fk1Fd3hoBfJq[i] - fk1Fd3hoBfJq[j]) + (za[i] - za[j]) * (za[i] - za[j]));
            j = j + 1;
            k = k + 1;
        };
    }
    for (i = (396 - 396); i < k - (125 - 124); i = i + 1) {
        for (j = (719 - 719); j < k - i - (103 - 102); j = j + 1) {
            if (dis[j].dist < dis[j + (731 - 730)].dist) {
                tuWR7DM9Xw = dis[j].po1.x;
                dis[j].po1.x = dis[j + (402 - 401)].po1.x;
                dis[j + (831 - 830)].po1.x = tuWR7DM9Xw;
                tuWR7DM9Xw = dis[j].po1.y;
                dis[j].po1.y = dis[j + (879 - 878)].po1.y;
                dis[j + (755 - 754)].po1.y = tuWR7DM9Xw;
                tuWR7DM9Xw = dis[j].po1.z;
                dis[j].po1.z = dis[j + (707 - 706)].po1.z;
                dis[j + (352 - 351)].po1.z = tuWR7DM9Xw;
                tuWR7DM9Xw = dis[j].po2.x;
                dis[j].po2.x = dis[j + (420 - 419)].po2.x;
                dis[j + (435 - 434)].po2.x = tuWR7DM9Xw;
                tuWR7DM9Xw = dis[j].po2.y;
                dis[j].po2.y = dis[j + (277 - 276)].po2.y;
                dis[j + (279 - 278)].po2.y = tuWR7DM9Xw;
                tuWR7DM9Xw = dis[j].po2.z;
                dis[j].po2.z = dis[j + (294 - 293)].po2.z;
                dis[j + (645 - 644)].po2.z = tuWR7DM9Xw;
                uf3pCXAs6E = dis[j].dist;
                dis[j].dist = dis[j + (64 - 63)].dist;
                dis[j + (562 - 561)].dist = uf3pCXAs6E;
            };
        };
    }
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf", dis[(570 - 570)].po1.x, dis[(934 - 934)].po1.y, dis[(431 - 431)].po1.z, dis[(459 - 459)].po2.x, dis[(738 - 738)].po2.y, dis[0].po2.z, dis[0].dist);
    k = k - 1;
    for (i = 1; i <= k; i = i + 1) {
        printf ("\n(%d,%d,%d)-(%d,%d,%d)=%.2lf", dis[i].po1.x, dis[i].po1.y, dis[i].po1.z, dis[i].po2.x, dis[i].po2.y, dis[i].po2.z, dis[i].dist);
    };
}

