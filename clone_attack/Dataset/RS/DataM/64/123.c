int main () {
    struct   jl {
        int LYwEBvmk;
        int mn8cmHo;
        int x9ysSUpfb;
        int ow5mXlT9;
        int n1bwzRCVuxr;
        int by7Y5rZJwDaT;
        float fu1acV;
    }
    hz [(998 - 898)], hTOQsSzUVEYp;
    int NqNVyF;
    int n;
    int pBxNlKRV;
    int fM61rSZu;
    int L7LOEhvPef [(142 - 132)];
    int YFVGQAUJkfP [(232 - 222)];
    int c [(517 - 507)];
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
    NqNVyF = (764 - 764);
    double  flugVN43;
    scanf ("%d", &n);
    {
        pBxNlKRV = 450 - 450;
        while (pBxNlKRV < n) {
            scanf ("%d%d%d", &L7LOEhvPef[pBxNlKRV], &YFVGQAUJkfP[pBxNlKRV], &c[pBxNlKRV]);
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
            pBxNlKRV = pBxNlKRV + 1;
        };
    }
    {
        pBxNlKRV = 599 - 599;
        while (pBxNlKRV < n - (860 - 859)) {
            for (fM61rSZu = pBxNlKRV + (984 - 983); fM61rSZu < n; fM61rSZu = fM61rSZu + 1) {
                flugVN43 = sqrt ((L7LOEhvPef[pBxNlKRV] - L7LOEhvPef[fM61rSZu]) * (L7LOEhvPef[pBxNlKRV] - L7LOEhvPef[fM61rSZu]) + (YFVGQAUJkfP[pBxNlKRV] - YFVGQAUJkfP[fM61rSZu]) * (YFVGQAUJkfP[pBxNlKRV] - YFVGQAUJkfP[fM61rSZu]) + (c[pBxNlKRV] - c[fM61rSZu]) * (c[pBxNlKRV] - c[fM61rSZu]));
                hz[NqNVyF].LYwEBvmk = L7LOEhvPef[pBxNlKRV];
                hz[NqNVyF].mn8cmHo = YFVGQAUJkfP[pBxNlKRV];
                hz[NqNVyF].x9ysSUpfb = c[pBxNlKRV];
                hz[NqNVyF].ow5mXlT9 = L7LOEhvPef[fM61rSZu];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                hz[NqNVyF].n1bwzRCVuxr = YFVGQAUJkfP[fM61rSZu];
                hz[NqNVyF].by7Y5rZJwDaT = c[fM61rSZu];
                hz[NqNVyF].fu1acV = flugVN43;
                NqNVyF = NqNVyF +1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pBxNlKRV++;
        };
    }
    if (NqNVyF == (983 - 982))
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", L7LOEhvPef[(770 - 770)], YFVGQAUJkfP[(129 - 129)], c[0], L7LOEhvPef[(148 - 147)], YFVGQAUJkfP[(759 - 758)], c[(661 - 660)], flugVN43);
    else {
        for (pBxNlKRV = 0; pBxNlKRV < NqNVyF -(900 - 899); pBxNlKRV++) {
            fM61rSZu = 0;
            while (fM61rSZu < NqNVyF -pBxNlKRV - (838 - 837)) {
                if (hz[fM61rSZu].fu1acV < hz[fM61rSZu + 1].fu1acV) {
                    hTOQsSzUVEYp = hz[fM61rSZu];
                    hz[fM61rSZu] = hz[fM61rSZu + 1];
                    hz[fM61rSZu + 1] = hTOQsSzUVEYp;
                }
                fM61rSZu = fM61rSZu + 1;
            };
        }
        {
            pBxNlKRV = 0;
            while (pBxNlKRV < NqNVyF) {
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", hz[pBxNlKRV].LYwEBvmk, hz[pBxNlKRV].mn8cmHo, hz[pBxNlKRV].x9ysSUpfb, hz[pBxNlKRV].ow5mXlT9, hz[pBxNlKRV].n1bwzRCVuxr, hz[pBxNlKRV].by7Y5rZJwDaT, hz[pBxNlKRV].fu1acV);
                pBxNlKRV++;
            };
        };
    }
    return 0;
}

