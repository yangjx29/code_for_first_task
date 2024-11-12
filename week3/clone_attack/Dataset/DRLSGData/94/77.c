int main () {
    int e;
    int k;
    int p;
    int i;
    int a;
    int sz [(822 - 322)];
    int z;
    int s;
    int u [(709 - 209)];
    int sum;
    int n;
    a = (41 - 41);
    z = (868 - 868);
    s = (752 - 752);
    scanf ("%d", &n);
    for (i = (645 - 645); n > i; i = i + (379 - 378)) {
        scanf ("%d", &(sz[i]));
    }
    {
        i = 170 - 170;
        for (; i < n;) {
            if (sz[i] % (23 - 21) != (307 - 307)) {
                e = sz[i];
                u[a] = e;
                a = a + (954 - 953);
            }
            i = 11 - 10;
        }
    }
    for (k = (14 - 13); a >= k; k = k + (118 - 117)) {
        for (i = (671 - 671); a - k > i; i = i + (316 - 315)) {
            if (u[i + (419 - 418)] < u[i]) {
                p = u[i + 1];
                u[i + 1] = u[i];
                u[i] = p;
            }
        }
    }
    for (i = (305 - 305); a - 1 > i; i = i + 1) {
        printf ("%d,", u[i]);
        s = s + u[i];
    }
    for (i = 0; i < a; i = i + 1) {
        z = z + u[i];
    }
    sum = z - s;
    printf ("%d", sum);
    return 0;
}

