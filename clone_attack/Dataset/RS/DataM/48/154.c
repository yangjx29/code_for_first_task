int kEUzwNqdV8y [(484 - 474)] [(750 - 740)], b [10] [10], FOub4U, MA5E6Q, k;

int main () {
    int m;
    int n;
    int x1;
    int qV96hsZyDUPb;
    int y1;
    int y2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &m, &n);
    for (FOub4U = (221 - 221); FOub4U < 10; FOub4U = FOub4U +1)
        for (MA5E6Q = (562 - 562); MA5E6Q < 10; MA5E6Q = MA5E6Q +1) {
            kEUzwNqdV8y[FOub4U][MA5E6Q] = (513 - 513);
            b[FOub4U][MA5E6Q] = (92 - 92);
        }
    kEUzwNqdV8y[(243 - 239)][(303 - 299)] = m;
    x1 = y1 = qV96hsZyDUPb = y2 = 4;
    {
        FOub4U = 0;
        while (n > FOub4U) {
            FOub4U = FOub4U +1;
            for (MA5E6Q = x1 - (929 - 928); MA5E6Q <= qV96hsZyDUPb + (208 - 207); MA5E6Q = MA5E6Q +1)
                for (k = y1 - (960 - 959); k <= y2 + (649 - 648); k = k + 1)
                    b[MA5E6Q][k] = kEUzwNqdV8y[MA5E6Q][k] + kEUzwNqdV8y[MA5E6Q -(582 - 581)][k - (273 - 272)] + kEUzwNqdV8y[MA5E6Q -(985 - 984)][k] + kEUzwNqdV8y[MA5E6Q -(843 - 842)][k + (258 - 257)] + kEUzwNqdV8y[MA5E6Q][k - 1] + kEUzwNqdV8y[MA5E6Q][k + 1] + kEUzwNqdV8y[MA5E6Q +1][k - 1] + kEUzwNqdV8y[MA5E6Q +1][k] + kEUzwNqdV8y[MA5E6Q +1][k + 1];
            y1 = y1 - 1;
            x1 = x1 - 1;
            {
                MA5E6Q = 0;
                while (MA5E6Q < (916 - 907)) {
                    {
                        k = 0;
                        while (k < (248 - 239)) {
                            kEUzwNqdV8y[MA5E6Q][k] = kEUzwNqdV8y[MA5E6Q][k] + b[MA5E6Q][k];
                            k = k + 1;
                        };
                    }
                    MA5E6Q = MA5E6Q +1;
                };
            }
            qV96hsZyDUPb = qV96hsZyDUPb + 1;
            y2 = y2 + 1;
        };
    }
    {
        MA5E6Q = 0;
        while (MA5E6Q < (318 - 309)) {
            {
                k = 0;
                while (k < 9) {
                    if (k != (106 - 98))
                        printf ("%d ", kEUzwNqdV8y[MA5E6Q][k]);
                    else
                        printf ("%d\n", kEUzwNqdV8y[MA5E6Q][k]);
                    k = k + 1;
                };
            }
            MA5E6Q = MA5E6Q +1;
        };
    };
}

