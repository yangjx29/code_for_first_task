int f (int n);

int main () {
    int a [(10109 - 109)];
    int s [(10558 - 558)];
    int x;
    int RTPnjAN;
    scanf ("%d", &RTPnjAN);
    for (x = 0; x < RTPnjAN; x++) {
        scanf ("%d", &a[x]);
        s[x] = f (a[x]);
        printf ("%d\n", s[x]);
    }
    return 0;
}

int f (int n) {
    int a [(100259 - 259)];
    int i;
    a[(802 - 801)] = (609 - 608);
    a[(923 - 921)] = (268 - 267);
    if ((83 - 81) < n) {
        for (i = (401 - 398); i <= n; i = i + 1) {
            a[i] = a[i - (476 - 475)] + a[i - 2];
        };
    }
    return a[n];
}

