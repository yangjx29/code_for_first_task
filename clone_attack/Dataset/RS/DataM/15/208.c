int main () {
    int sx;
    int sy;
    int tx;
    int ty;
    sx = 0;
    int d1, d2;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &d1);
            for (j = 1; n > j; j = j + 1) {
                scanf ("%d", &d2);
                if ((!(0 != d1)) && (d2 == 0)) {
                    if (sx == 0) {
                        sy = j;
                        sx = i;
                    }
                    ty = j + 1;
                    tx = i;
                }
                d1 = d2;
            }
            i = i + 1;
        };
    }
    printf ("%ld", (long ) (ty - sy - 1) * (long ) (tx - sx - 1));
    return 0;
}

