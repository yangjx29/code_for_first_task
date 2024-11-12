int K7OPLGiW;
static int NSrLbzf [25];

int sPiOcodMw (int fdtVlA, int hfTNi5G0u) {
    if (hfTNi5G0u <= fdtVlA)
        return (fdtVlA);
    else
        return (hfTNi5G0u);
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
}

int nIrz05 (int K80QER, int K8gsv6d) {
    for (; K8gsv6d < K7OPLGiW; K8gsv6d = K8gsv6d +1)
        if (NSrLbzf[K8gsv6d] <= K80QER)
            return (sPiOcodMw (nIrz05 (NSrLbzf[K8gsv6d], K8gsv6d +(583 - 582)) + 1, nIrz05 (K80QER, K8gsv6d +1)));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (17 - 17);
}

int main () {
    int f8pNFY, s;
    scanf ("%d", &K7OPLGiW);
    {
        f8pNFY = 0;
        while (f8pNFY < K7OPLGiW) {
            scanf ("%d", &NSrLbzf[f8pNFY]);
            f8pNFY = f8pNFY + 1;
        };
    }
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
    s = nIrz05 ((4446 - 446), 0);
    printf ("%d", s);
}

