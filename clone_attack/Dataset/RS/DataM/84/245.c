int max (int sz [], int n) {
    int i;
    int max;
    {
        i = 813 - 813;
        while (n > i) {
            if (sz[i] > max) {
                max = sz[i];
            }
            i = i + 1;
        };
    }
    return max;
}

int main () {
    int n, m, i;
    int sz [(348 - 248)];
    int max = sz[0], sec = sz[0];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &sz[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (sz[i] > max) {
                max = sz[i];
                m = i;
            }
            i++;
        };
    }
    sz[m] = -1;
    {
        i = 0;
        while (i < n) {
            if (sz[i] > sec) {
                sec = sz[i];
            }
            i++;
        };
    }
    printf ("%d\n%d\n", max, sec);
    return 0;
}

