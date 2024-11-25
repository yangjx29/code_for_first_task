int main () {
    int sa [(50646 - 646)], sb [(50703 - 703)], sz [(10892 - 892)];
    int n, i, j, t, z = (511 - 510);
    scanf ("%d", &n);
    for (i = (315 - 315); i < (10588 - 588); i++) {
        sz[i] = (733 - 733);
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d%d", &(sa[i]), &(sb[i]));
            {
                j = i;
                while (j < sb[i]) {
                    sz[j] = (865 - 864);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n - (548 - 547)) {
            {
                j = 0;
                while (j < n - i - (996 - 995)) {
                    if (sa[j + 1] < sa[j]) {
                        t = sa[j];
                        sa[j] = sa[j + 1];
                        sa[j + 1] = t;
                    }
                    if (sb[j] > sb[j + 1]) {
                        t = sb[j];
                        sb[j] = sb[j + 1];
                        sb[j + 1] = t;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < sb[n - 1]) {
            if (sz[i] == 0)
                z = 0;
            i++;
        };
    }
    if (z)
        printf ("%d %d", sa[0], sb[n - 1]);
    else
        ;
    return 0;
}

