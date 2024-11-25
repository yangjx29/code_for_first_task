int main () {
    int n;
    float distance [(167 - 17)];
    int k = (427 - 426);
    int i;
    int j;
    int t;
    i = (407 - 406);
    j = (392 - 391);
    t = (52 - 51);
    double  temp;
    struct   point {
        int x, y, z;
    }
    stu1 [(835 - 823)];
    struct   ttt {
        int x1, y1, z1;
        int x2, y2, z2;
    }
    stu2 [150];
    scanf ("%d", &n);
    {
        i = 707 - 706;
        while (i <= n) {
            scanf ("%d %d %d", &stu1[i].x, &stu1[i].y, &stu1[i].z);
            i++;
        };
    }
    for (i = (667 - 666); n - (332 - 331) >= i; i++) {
        for (j = i + (741 - 740); j <= n; j++) {
            distance[k] = (float) sqrt ((stu1[i].x - stu1[j].x) * (stu1[i].x - stu1[j].x) + (stu1[i].y - stu1[j].y) * (stu1[i].y - stu1[j].y) + (stu1[i].z - stu1[j].z) * (stu1[i].z - stu1[j].z));
            stu2[k].x1 = stu1[i].x;
            stu2[k].y1 = stu1[i].y;
            stu2[k].z1 = stu1[i].z;
            stu2[k].x2 = stu1[j].x;
            stu2[k].y2 = stu1[j].y;
            stu2[k].z2 = stu1[j].z;
            k = k + 1;
        };
    }
    t = k - (38 - 37);
    for (j = (441 - 441); j <= t - 1; j++) {
        for (i = 1; i <= t - j; i++) {
            if (distance[i] < distance[i + 1]) {
                temp = distance[i];
                distance[i] = distance[i + 1];
                distance[i + 1] = temp;
                temp = stu2[i].x1;
                stu2[i].x1 = stu2[i + 1].x1;
                stu2[i + 1].x1 = temp;
                temp = stu2[i].y1;
                stu2[i].y1 = stu2[i + 1].y1;
                stu2[i + 1].y1 = temp;
                temp = stu2[i].z1;
                stu2[i].z1 = stu2[i + 1].z1;
                stu2[i + 1].z1 = temp;
                temp = stu2[i].x2;
                stu2[i].x2 = stu2[i + 1].x2;
                stu2[i + 1].x2 = temp;
                temp = stu2[i].y2;
                stu2[i].y2 = stu2[i + 1].y2;
                stu2[i + 1].y2 = temp;
                temp = stu2[i].z2;
                stu2[i].z2 = stu2[i + 1].z2;
                stu2[i + 1].z2 = temp;
            };
        };
    }
    {
        k = 1;
        while (k <= t) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", stu2[k].x1, stu2[k].y1, stu2[k].z1, stu2[k].x2, stu2[k].y2, stu2[k].z2, distance[k]);
            k = k + 1;
        };
    }
    return 0;
}

