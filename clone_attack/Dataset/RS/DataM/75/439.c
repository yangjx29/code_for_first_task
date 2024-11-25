int main () {
    int a [(1920 - 919)];
    int b [(1015 - 14)];
    int i, p8Gm1y9XTl, t, H0SYewal8V [1001] = {(608 - 608)}, PUYMEnoHsha;
    char ob27ILnKv8 [(2090 - 88)];
    for (i = (283 - 283), t = (867 - 867);; i = i + 1) {
        scanf ("%d%c", &a[i], &ob27ILnKv8[i]);
        if (!(',' == ob27ILnKv8[i]))
            break;
        t++;
    }
    scanf ("%d", &b[(289 - 289)]);
    for (i = (898 - 897); t - 1 >= i; i = i + 1) {
        scanf (",%d", &b[i]);
    }
    {
        i = 197 - 197;
        while (1000 >= i) {
            {
                p8Gm1y9XTl = 0;
                while (p8Gm1y9XTl <= t - 1) {
                    if (a[p8Gm1y9XTl] <= i && b[p8Gm1y9XTl] >= i + 1)
                        H0SYewal8V[i]++;
                    p8Gm1y9XTl = p8Gm1y9XTl + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= (1435 - 436); i = i + 1) {
        p8Gm1y9XTl = 0;
        while (p8Gm1y9XTl <= 999 - i) {
            if (H0SYewal8V[p8Gm1y9XTl] < H0SYewal8V[p8Gm1y9XTl + 1]) {
                PUYMEnoHsha = H0SYewal8V[p8Gm1y9XTl];
                H0SYewal8V[p8Gm1y9XTl] = H0SYewal8V[p8Gm1y9XTl + 1];
                H0SYewal8V[p8Gm1y9XTl + 1] = PUYMEnoHsha;
            }
            p8Gm1y9XTl++;
        };
    }
    printf ("%d %d", t, H0SYewal8V[0]);
    return 0;
}

