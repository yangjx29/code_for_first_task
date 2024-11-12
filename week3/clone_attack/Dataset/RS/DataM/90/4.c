int work (int m, int n) {
    int zFhDIAZwg5;
    if (n == 1)
        return 1;
    zFhDIAZwg5 = work (m, n - 1);
    if (m >= n)
        zFhDIAZwg5 = zFhDIAZwg5 + work (m - n, n);
    return zFhDIAZwg5;
}

int main () {
    int qV6pSPWhyb, m, n;
    for (scanf ("%d", &qV6pSPWhyb); qV6pSPWhyb > 0; qV6pSPWhyb--) {
        scanf ("%d%d", &m, &n);
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
        printf ("%d\n", work (m, n));
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

