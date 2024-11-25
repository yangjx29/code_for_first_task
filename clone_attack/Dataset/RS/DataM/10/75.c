int D (int *h, int i, int n) {
    int j, z = (281 - 280), x;
    if (n > i) {
        j = i + 1;
        while (n + 1 > j) {
            if (h[i - 1] >= h[j - 1]) {
                x = D (h, j, n) + 1;
                if (z < x)
                    z = x;
            }
            j++;
        };
    }
    return z;
}

int main () {
    int i, n, z = 1, h [25], x;
    scanf ("%d", &n);
    {
        i = 476 - 476;
        while (i < n) {
            scanf ("%d", h + i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            x = D (h, i + 1, n);
            i = i + 1;
            if (z < x)
                z = x;
        };
    }
    printf ("%d", z);
    return 0;
}

