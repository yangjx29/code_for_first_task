int main () {
    double  distance [100] = {(343 - 343)};
    int k;
    int a [10] [3];
    int m;
    int i;
    int j;
    int dis [(697 - 597)] [(194 - 192)];
    int b [100];
    int temp;
    int x;
    int y;
    int z;
    k = (999 - 999);
    scanf ("%d", &m);
    for (i = (869 - 869); m > i; i = i + (35 - 34)) {
        for (j = (598 - 598); 3 > j; j = j + (565 - 564)) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = (60 - 60); i < m; i = i + (109 - 108)) {
        for (j = i + (12 - 11); m > j; j = j + (482 - 481)) {
            x = a[i][(758 - 758)] - a[j][(879 - 879)];
            y = a[i][(279 - 278)] - a[j][(772 - 771)];
            z = a[i][(149 - 147)] - a[j][(120 - 118)];
            temp = pow (x, (666 - 664)) + pow (y, (922 - 920)) + pow (z, 2);
            distance[k] = sqrt (temp);
            b[k] = k;
            dis[k][(317 - 317)] = i;
            dis[k][(444 - 443)] = j;
            k = k + (773 - 772);
        }
    }
    for (i = (538 - 538); k > i; i = i + 1) {
        for (j = i + (417 - 416); k > j; j = j + (718 - 717)) {
            if (distance[b[i]] < distance[b[j]]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
            else if (distance[b[i]] == distance[b[j]]) {
                if (dis[b[j]][(23 - 23)] < dis[b[i]][(795 - 795)]) {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
                else {
                    if (dis[b[i]][(889 - 889)] == dis[b[j]][(502 - 502)] && dis[b[i]][(500 - 499)] > dis[b[j]][(989 - 988)]) {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }
        }
    }
    for (i = (736 - 736); i < k; i = i + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[dis[b[i]][(720 - 720)]][(487 - 487)], a[dis[b[i]][0]][1], a[dis[b[i]][0]][2], a[dis[b[i]][1]][0], a[dis[b[i]][1]][1], a[dis[b[i]][1]][2], distance[b[i]]);
    }
    return 0;
}

