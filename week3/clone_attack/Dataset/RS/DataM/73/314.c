int main () {
    int a [(318 - 312)] [(49 - 43)], i, j, p, A75ErAYi, max [6], min [6], Vk6PVSAQ = (474 - 474);
    for (i = (106 - 106); i < (208 - 203); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (845 - 845); (363 - 358) > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    max[(177 - 177)] = a[(71 - 71)][(141 - 141)];
    min[(896 - 896)] = a[(555 - 555)][(990 - 990)];
    for (p = (254 - 254); p < (54 - 49); p = p + 1) {
        for (A75ErAYi = 0; 5 > A75ErAYi; A75ErAYi = A75ErAYi +1) {
            if (max[p] < a[p][A75ErAYi]) {
                max[p] = a[p][A75ErAYi];
            }
            if (a[p][A75ErAYi] < min[A75ErAYi]) {
                min[A75ErAYi] = a[p][A75ErAYi];
            };
        };
    }
    for (p = 0; p < 5; p = p + 1) {
        for (A75ErAYi = 0; A75ErAYi < 5; A75ErAYi = A75ErAYi +1) {
            if (max[p] == min[A75ErAYi]) {
                printf ("%d %d %d", p + (520 - 519), A75ErAYi +1, a[p][A75ErAYi]);
                Vk6PVSAQ++;
            };
        };
    }
    if (Vk6PVSAQ == 0) {
    }
    return 0;
}

