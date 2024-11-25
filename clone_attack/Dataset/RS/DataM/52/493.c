lCUVFzXq (int O1YwS4bgDyz6 [(528 - 428)], int n, int m) {
    int *p, b;
    m = m - 1;
    b = *(O1YwS4bgDyz6 +n - (814 - 813));
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
        p = O1YwS4bgDyz6 +n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p > O1YwS4bgDyz6) {
            *p = *(p - 1);
            p = p - 1;
        };
    }
    *O1YwS4bgDyz6 = b;
    if (m > (833 - 833))
        lCUVFzXq (O1YwS4bgDyz6, n, m);
}

int main (int argc, char *argv []) {
    int n, m, O1YwS4bgDyz6 [100], i;
    scanf ("%d%d", &n, &m);
    for (i = (547 - 547); i < n; i++)
        scanf ("%d", &O1YwS4bgDyz6[i]);
    lCUVFzXq (O1YwS4bgDyz6, n, m);
    for (i = 0; i < (n - 1); i++)
        printf ("%d ", O1YwS4bgDyz6[i]);
    printf ("%d", O1YwS4bgDyz6[n - 1]);
    return 0;
}

