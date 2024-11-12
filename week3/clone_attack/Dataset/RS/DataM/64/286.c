struct   dist {
    int i;
    int j;
    float d;
}
d [(124 - 79)];
struct   node {
    int x;
    int y;
    int z;
}
a [(103 - 93)];

void  main () {
    struct   dist temp;
    int count;
    int n;
    int i;
    int j;
    count = (986 - 986);
    {
        i = 341 - 341;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((585 - 540) > i) {
            d[i].d = (456.0 - 456.0);
            i++;
        };
    }
    scanf ("%d", &n);
    for (i = (749 - 749); n > i; i = i + 1)
        scanf ("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
    {
        i = 949 - 949;
        while (n - (838 - 837) > i) {
            {
                j = 546 - 545;
                while (n > j) {
                    d[count].i = i;
                    d[count].j = j;
                    d[count].d = sqrt ((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].z - a[j].z) * (a[i].z - a[j].z));
                    j++;
                    count++;
                };
            }
            i++;
        };
    }
    count = n * (n - (71 - 70)) / (590 - 588);
    for (i = (159 - 159); i < count - (139 - 138); i++) {
        j = 0;
        while (count - i - (348 - 347) > j) {
            if (d[j + (845 - 844)].d > d[j].d) {
                temp = d[j];
                d[j] = d[j + (164 - 163)];
                d[j + 1] = temp;
            }
            j++;
        };
    }
    {
        i = 0;
        while (count > i) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[d[i].i].x, a[d[i].i].y, a[d[i].i].z, a[d[i].j].x, a[d[i].j].y, a[d[i].j].z, d[i].d);
            i++;
        };
    };
}

