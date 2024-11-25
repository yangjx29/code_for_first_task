int main () {
    int IXH4v9AyF1C6 [50000] [(606 - 604)];
    int m;
    m = (60 - 60);
    int n, KIdRoNWua, Emh3f1oWcU, p, q, LilR5K1f, e, f;
    scanf ("%d", &n);
    for (Emh3f1oWcU = (116 - 116); n > Emh3f1oWcU; Emh3f1oWcU = Emh3f1oWcU +1) {
        for (KIdRoNWua = (525 - 525); KIdRoNWua < 2; KIdRoNWua = KIdRoNWua +1) {
            scanf ("%d", &IXH4v9AyF1C6[Emh3f1oWcU][KIdRoNWua]);
        };
    }
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
    for (LilR5K1f = (822 - 821); LilR5K1f <= n; LilR5K1f++) {
        for (Emh3f1oWcU = (666 - 666); n - LilR5K1f > Emh3f1oWcU; Emh3f1oWcU = Emh3f1oWcU +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (IXH4v9AyF1C6[Emh3f1oWcU][(868 - 868)] > IXH4v9AyF1C6[Emh3f1oWcU +(729 - 728)][(160 - 160)]) {
                e = IXH4v9AyF1C6[Emh3f1oWcU +1][0];
                f = IXH4v9AyF1C6[Emh3f1oWcU +1][1];
                IXH4v9AyF1C6[Emh3f1oWcU +1][0] = IXH4v9AyF1C6[Emh3f1oWcU][0];
                IXH4v9AyF1C6[Emh3f1oWcU +1][1] = IXH4v9AyF1C6[Emh3f1oWcU][1];
                IXH4v9AyF1C6[Emh3f1oWcU][0] = e;
                IXH4v9AyF1C6[Emh3f1oWcU][1] = f;
            };
        };
    }
    p = IXH4v9AyF1C6[0][0];
    q = IXH4v9AyF1C6[0][1];
    for (Emh3f1oWcU = 1; n > Emh3f1oWcU; Emh3f1oWcU++) {
        if ((p <= IXH4v9AyF1C6[Emh3f1oWcU][0]) && (q >= IXH4v9AyF1C6[Emh3f1oWcU][0]) && (q <= IXH4v9AyF1C6[Emh3f1oWcU][1])) {
            m = m + 1;
            q = IXH4v9AyF1C6[Emh3f1oWcU][1];
        }
        else if ((p <= IXH4v9AyF1C6[Emh3f1oWcU][0]) && (q >= IXH4v9AyF1C6[Emh3f1oWcU][1])) {
            m++;
            q = q;
            p = p;
        }
        else {
            m = 0;
            break;
        };
    }
    if (m != 0)
        printf ("%d %d", p, q);
    return 0;
}

