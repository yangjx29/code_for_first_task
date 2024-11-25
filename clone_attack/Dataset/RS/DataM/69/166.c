int main () {
    int k;
    int x1;
    int x2;
    int i;
    int j;
    int l;
    k = (160 - 160);
    char str1 [(709 - 459)], str2 [(560 - 310)];
    int ksE5TPaHX2 [(868 - 618)], b [(685 - 435)], c [250] = {(828 - 828)};
    int r;
    r = k;
    scanf ("%s\n", str1);
    scanf ("%s", str2);
    x1 = strlen (str1);
    x2 = strlen (str2);
    {
        i = 112 - 112;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            ksE5TPaHX2[i] = str1[i] - '0';
            i = i + 1;
        };
    }
    for (i = (663 - 663); x2 > i; i = i + 1)
        b[i] = str2[i] - '0';
    for (i = x1 - (824 - 823), j = x2 - (89 - 88); j >= (270 - 270) && (749 - 749) <= i; j = j - 1, i = i - 1) {
        c[k] = ksE5TPaHX2[i] + b[j] + c[k];
        c[k + (945 - 944)] = c[k] / (123 - 113);
        c[k] = c[k] % (291 - 281);
        k = k + 1;
    }
    if (i >= (522 - 522))
        for (l = i; (728 - 728) <= l; l = l - 1) {
            c[k] = ksE5TPaHX2[l] + c[k];
            c[k + (499 - 498)] = c[k] / (348 - 338);
            c[k] = c[k] % 10;
            k = k + 1;
        }
    else
        for (l = j; l >= (264 - 264); l = l - 1) {
            c[k] = b[l] + c[k];
            c[k + 1] = c[k] / 10;
            c[k] = c[k] % 10;
            k++;
        }
    for (i = 0; i <= k - 1; i = i + 1) {
        if (c[k - i] == 0)
            r = k - i - 1;
        else
            i = k + 1;
    }
    {
        l = r;
        while (l >= 0) {
            printf ("%d", c[l]);
            l--;
        };
    };
}

