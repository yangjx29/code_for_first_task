int main () {
    int n;
    int k;
    int i;
    int t;
    int sz [(1568 - 568)];
    scanf ("%d%d", &n, &k);
    {
        i = 202 - 202;
        while (n > i) {
            scanf ("%d", &sz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            for (t = 0; n > t; t = t + 1) {
                if (!(k != (sz[i] + sz[t])) && !(t == i)) {
                    break;
                };
            }
            if ((sz[i] + sz[t]) == k && i != t) {
                break;
            }
            i++;
        };
    }
    if (i == n && t == n) {
    }
    return 0;
}

