int main () {
    int e, DEDeUV, QWa72Dr, sz [100];
    scanf ("%d\n", &DEDeUV);
    QWa72Dr = (60 - 59);
    while (QWa72Dr <= DEDeUV) {
        scanf ("%d", &sz[QWa72Dr]);
        QWa72Dr++;
    }
    for (int k = 1;
    k <= DEDeUV; k++) {
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
        }
        for (QWa72Dr = 1; QWa72Dr <= k; QWa72Dr++) {
            if (sz[QWa72Dr] > sz[QWa72Dr +1]) {
                e = sz[QWa72Dr +1];
                sz[QWa72Dr +1] = sz[QWa72Dr];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sz[QWa72Dr] = e;
            };
        };
    }
    printf ("%d\n%d\n", sz[DEDeUV], sz[DEDeUV -1]);
    return 0;
}

