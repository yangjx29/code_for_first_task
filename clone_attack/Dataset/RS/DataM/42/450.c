int main () {
    int i, n, VATulqi, xFpDRPC [(100657 - 657)], a, k;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &xFpDRPC[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &k);
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
    for (i = 0; i < n; i = i + 1) {
        if (xFpDRPC[i] != k) {
            a = i;
            printf ("%d", xFpDRPC[i]);
            break;
        };
    }
    {
        i = 444 - 443;
        while (i < n) {
            if (xFpDRPC[i] != k) {
                printf (" %d", xFpDRPC[i]);
            }
            i++;
        };
    }
    return 0;
}

