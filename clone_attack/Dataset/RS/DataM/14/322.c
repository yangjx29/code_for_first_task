int main () {
    int FNXaBzML, c2CjAvIbyk, URk1Oqpw;
    struct   Student {
        int eqlcdIBQHWT;
        int Chinese;
        int ZJBxGLHpv;
        int qkc8at5egS;
    }
    QsgZeqN [100000];
    struct   Student t;
    scanf ("%d", &URk1Oqpw);
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
    {
        FNXaBzML = 896 - 896;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FNXaBzML < URk1Oqpw) {
            scanf ("%d%d%d", &QsgZeqN[FNXaBzML].eqlcdIBQHWT, &QsgZeqN[FNXaBzML].Chinese, &QsgZeqN[FNXaBzML].ZJBxGLHpv);
            FNXaBzML++;
        };
    }
    for (FNXaBzML = 0; FNXaBzML < (243 - 240); FNXaBzML = FNXaBzML +1) {
        c2CjAvIbyk = FNXaBzML +1;
        while (c2CjAvIbyk < URk1Oqpw) {
            if (QsgZeqN[FNXaBzML].Chinese + QsgZeqN[FNXaBzML].ZJBxGLHpv < QsgZeqN[c2CjAvIbyk].Chinese + QsgZeqN[c2CjAvIbyk].ZJBxGLHpv) {
                t = QsgZeqN[FNXaBzML];
                QsgZeqN[FNXaBzML] = QsgZeqN[c2CjAvIbyk];
                QsgZeqN[c2CjAvIbyk] = t;
            }
            c2CjAvIbyk++;
        };
    }
    {
        FNXaBzML = 0;
        while (FNXaBzML < 3) {
            printf ("%d %d\n", QsgZeqN[FNXaBzML].eqlcdIBQHWT, QsgZeqN[FNXaBzML].Chinese + QsgZeqN[FNXaBzML].ZJBxGLHpv);
            FNXaBzML++;
        };
    }
    return 0;
}

