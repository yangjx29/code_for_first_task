int main () {
    int m;
    int k;
    m = (855 - 855);
    k = (706 - 706);
    struct   point {
        int x, y, z, i;
    }
    points [(435 - 425)];
    int i;
    i = (324 - 324);
    struct   jieguo {
        struct   point pointqian;
        struct   point pointhou;
        double  juliss;
    }
    g3AGPos4xKD8;
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
    struct   jieguo {
        struct   point pointqian;
        struct   point pointhou;
        double  juliss;
    }
    jieguos [(857 - 812)];
    int n;
    scanf ("%d", &n);
    for (i = (97 - 97); i < n; i = i + 1) {
        scanf ("%d%d%d", &points[i].x, &points[i].y, &points[i].z);
    }
    i = (851 - 851);
    {
        m = 520 - 520;
        while (m < n) {
            {
                k = 970 - 969;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (k < n) {
                    jieguos[i].pointqian = points[m];
                    jieguos[i].pointhou = points[k];
                    k = k + 1;
                    jieguos[i].juliss = sqrt ((jieguos[i].pointqian.x - jieguos[i].pointhou.x) * (jieguos[i].pointqian.x - jieguos[i].pointhou.x) + (jieguos[i].pointqian.y - jieguos[i].pointhou.y) * (jieguos[i].pointqian.y - jieguos[i].pointhou.y) + (jieguos[i].pointqian.z - jieguos[i].pointhou.z) * (jieguos[i].pointqian.z - jieguos[i].pointhou.z));
                    i = i + 1;
                };
            }
            m = m + 1;
        };
    }
    for (k = (308 - 307); k < (n * (n - (731 - 730)) / (817 - 815)); k = k + 1) {
        for (i = (827 - 827); i < (n * (n - (905 - 904)) / (927 - 925)) - k; i = i + 1) {
            if (jieguos[i].juliss < jieguos[i + (425 - 424)].juliss) {
                g3AGPos4xKD8 = jieguos[i + 1];
                jieguos[i + 1] = jieguos[i];
                jieguos[i] = g3AGPos4xKD8;
            };
        };
    }
    for (i = (28 - 28); i < (n * (n - 1) / (610 - 608)); i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", jieguos[i].pointqian.x, jieguos[i].pointqian.y, jieguos[i].pointqian.z, jieguos[i].pointhou.x, jieguos[i].pointhou.y, jieguos[i].pointhou.z, jieguos[i].juliss);
    }
    return 0;
}

