int main () {
    int m;
    int n;
    int i;
    int n0;
    int p1;
    int mTUGnIr9bp;
    int a [301];
    for (; scanf ("%d%d", &n, &m), n != 0;) {
        p1 = 0;
        {
            i = 0;
            while (i < n) {
                a[i] = i + 1;
                i++;
            };
        }
        n0 = n;
        for (; n0 > 1;) {
            n0 = n0 - 1;
            mTUGnIr9bp = m;
            for (; mTUGnIr9bp != 1;) {
                if (a[(p1 + 1) % n]) {
                    mTUGnIr9bp--;
                }
                p1 = (p1 + 1) % n;
            }
            a[p1] = 0;
            while (a[p1 % n] == 0) {
                p1 = (p1 + 1) % n;
            };
        }
        printf ("%d\n", a[p1]);
    }
    return 0;
}

