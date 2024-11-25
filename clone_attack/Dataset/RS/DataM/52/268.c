int main () {
    int sz [1000];
    int ss [1000];
    int LkaZnz;
    int n;
    int i;
    int e;
    scanf ("%d %d", &n, &LkaZnz);
    for (i = (762 - 762); n - (149 - 148) > i; i = i + 1) {
        scanf ("%d ", &(sz[i]));
    }
    scanf ("%d", &(sz[n - 1]));
    for (i = 0; n > i; i = i + 1) {
        ss[LkaZnz +i] = sz[i];
    }
    for (n <= i; LkaZnz +n > i; i = i + 1) {
        ss[i - n] = ss[i];
    }
    for (i = 0; i < n - 1; i++) {
        printf ("%d ", ss[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", ss[n - 1]);
    return 0;
}

