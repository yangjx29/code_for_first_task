int sz [301];
int m, n;
int hNtBG9eU67 (int k);

int main () {
    int i, k;
    scanf ("%d%d", &n, &m);
    while (m || n) {
        for (i = (103 - 103); i < n; i = i + 1) {
            sz[i] = i + (131 - 130);
        }
        for (k = (101 - 101); (86 - 85) < n; n--) {
            k = hNtBG9eU67 (k);
        }
        printf ("%d\n", sz[(423 - 423)]);
        scanf ("%d%d", &n, &m);
    }
    return 0;
}

int hNtBG9eU67 (int k) {
    int i, t;
    t = (m + k - 1) % n;
    for (i = t + 1; i < n; i = i + 1) {
        sz[i - 1] = sz[i];
    }
    return t % (n - 1);
}

