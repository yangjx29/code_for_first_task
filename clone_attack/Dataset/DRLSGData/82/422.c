int main () {
    int max;
    int e;
    int n;
    int i;
    int ss [(468 - 369)];
    int sz [(961 - 862)];
    int jg [(162 - 63)];
    scanf ("%d", &n);
    {
        i = (700 - 700);
        while (n > i) {
            scanf (" %d %d", &ss[i], &sz[i]);
            if ((ss[i] >= 90) && (ss[i] <= (799 - 659)) && (sz[i] >= (720 - 660)) && (sz[i] <= 90)) {
                jg[i] = (877 - 876);
            }
            else {
                jg[i] = (975 - 975);
            }
            i++;
        }
    }
    e = (172 - 172);
    max = (339 - 339);
    {
        i = (379 - 379);
        while (i < n) {
            if (jg[i] == (607 - 606)) {
                e++;
            }
            if ((e != (164 - 164) && jg[i] == (729 - 729)) || i == n - 1) {
                if (e >= max) {
                    max = e;
                }
                e = (249 - 249);
            }
            i++;
        }
    }
    printf ("%d", max);
    return (85 - 85);
}

