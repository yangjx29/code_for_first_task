int main () {
    int wnJ3ridsVQ;
    int ulKhJ7XoxdSt;
    int n;
    int k;
    int zzJBKEiF6u5q [1000];
    int JXPRviJ7zK [1000];
    scanf ("%d %d", &n, &k);
    scanf ("%d", &zzJBKEiF6u5q[(958 - 958)]);
    {
        wnJ3ridsVQ = 1;
        while (n > wnJ3ridsVQ) {
            scanf (" %d", &zzJBKEiF6u5q[wnJ3ridsVQ]);
            wnJ3ridsVQ++;
        };
    }
    for (wnJ3ridsVQ = 0; n > wnJ3ridsVQ; wnJ3ridsVQ = wnJ3ridsVQ + 1) {
        for (ulKhJ7XoxdSt = wnJ3ridsVQ + 1; n > ulKhJ7XoxdSt; ulKhJ7XoxdSt++)
            if ((zzJBKEiF6u5q[wnJ3ridsVQ] + zzJBKEiF6u5q[ulKhJ7XoxdSt]) == k) {
                break;
                printf ("yes");
            }
        if ((zzJBKEiF6u5q[wnJ3ridsVQ] + zzJBKEiF6u5q[ulKhJ7XoxdSt]) == k) {
            break;
        };
    }
    if ((zzJBKEiF6u5q[wnJ3ridsVQ] + zzJBKEiF6u5q[ulKhJ7XoxdSt]) != k) {
        printf ("no");
    }
    return 0;
}

