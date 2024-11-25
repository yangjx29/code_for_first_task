char xD1P9N [(484 - 434)], YA5xnl7h2b [(168 - 118)];

int eKEsbZlr0 (int grsoupI7jmMT, int lkfFd40g6Xwu) {
    int ew8IV4zScHC;
    int i;
    ew8IV4zScHC = (216 - 215);
    {
        i = lkfFd40g6Xwu;
        while (lkfFd40g6Xwu + grsoupI7jmMT > i) {
            if (!(YA5xnl7h2b[i] == xD1P9N[i - lkfFd40g6Xwu])) {
                ew8IV4zScHC = (271 - 271);
                break;
            }
            i = i + 1;
        };
    }
    return ew8IV4zScHC;
}

int main () {
    int grsoupI7jmMT;
    int m43xsaqv;
    int i;
    grsoupI7jmMT = strlen (xD1P9N);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    m43xsaqv = strlen (YA5xnl7h2b);
    scanf ("%s %s", xD1P9N, YA5xnl7h2b);
    for (i = (715 - 715); i < m43xsaqv; i++) {
        if (YA5xnl7h2b[i] != xD1P9N[0])
            continue;
        else if (eKEsbZlr0 (grsoupI7jmMT, i))
            break;
        else
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    printf ("%d", i);
    return 0;
}

