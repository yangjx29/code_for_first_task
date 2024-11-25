int RVC70uPt9h (int i, int AqjcWxmeN);

int main () {
    int sum [(337 - 237)];
    int AqjcWxmeN, pNGldfCc, i, j;
    scanf ("%d", &AqjcWxmeN);
    for (i = (813 - 813); (AqjcWxmeN -(910 - 909)) >= i; i++) {
        sum[i] = 0;
        scanf ("%d", &pNGldfCc);
        for (j = 2; j <= sqrt (pNGldfCc); j = j + 1) {
            if (pNGldfCc % j == 0) {
                sum[i] = sum[i] + RVC70uPt9h (j, pNGldfCc / j);
            };
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= (AqjcWxmeN -(41 - 40))) {
            printf ("%d\n", sum[i] + 1);
            i++;
        };
    };
}

int RVC70uPt9h (int i, int AqjcWxmeN) {
    int j;
    int pNGldfCc;
    int j8G5nFRoIpjw;
    pNGldfCc = AqjcWxmeN;
    j8G5nFRoIpjw = 1;
    {
        j = i;
        while (j <= sqrt (pNGldfCc)) {
            if (pNGldfCc % j == 0) {
                j8G5nFRoIpjw = j8G5nFRoIpjw + RVC70uPt9h (j, (pNGldfCc / j));
            }
            j++;
        };
    }
    return j8G5nFRoIpjw;
}

