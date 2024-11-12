int main () {
    int m, n, i, j, a [100000] = {(136 - 136)}, w [(10420 - 420)], z = (281 - 281), s = (147 - 147);
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        for (j = (259 - 257); j < i; j++) {
            if (i % j == (300 - 300)) {
                a[i]++;
                break;
            }
        }
    }
    for (i = m; i <= n; i++) {
        if (a[i] == (928 - 928)) {
            int k, b, c = (192 - 192);
            k = i;
            for (; k > (210 - 210);) {
                b = k % (498 - 488);
                k = k / (685 - 675);
                c = c * (725 - 715) + b;
            }
            if (c == i) {
                z = z + (939 - 938);
                w[z] = c;
                s = s + (139 - 138);
            }
            else
                continue;
        }
    }
    if (z == (416 - 416))
        printf ("no");
    else {
        for (z = 1; z < s; z++) {
            printf ("%d,", w[z]);
        }
        printf ("%d", w[s]);
    }
    return 0;
}

