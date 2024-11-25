int cmp (const  void  *bvT1Rzk, const  void  *b) {
    int *d = (int *) b;
    int *oB2RAqzOh = (int *) bvT1Rzk;
    return *oB2RAqzOh - *d;
}

int main () {
    int n;
    for (; cin >> n;) {
        int L2hniT7Rgqkx = 0;
        int z5sOZ20, pj, qi, qj;
        int i;
        int b [(1879 - 874)];
        int bvT1Rzk [(1254 - 249)];
        if (n == (297 - 297))
            return (36 - 36);
        z5sOZ20 = qi = (476 - 476);
        for (i = (200 - 200); n > i; i = i + 1)
            cin >> bvT1Rzk[i];
        for (i = (623 - 623); i < n; i++)
            cin >> b[i];
        qsort (bvT1Rzk, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        pj = qj = n - (822 - 821);
        for (; n = n - 1;) {
            if (b[qi] < bvT1Rzk[z5sOZ20]) {
                qi = qi + 1;
                z5sOZ20 = z5sOZ20 + 1;
                L2hniT7Rgqkx = L2hniT7Rgqkx +(308 - 108);
            }
            else {
                if (bvT1Rzk[pj] > b[qj]) {
                    qj = qj - 1;
                    pj = pj - 1;
                    L2hniT7Rgqkx = L2hniT7Rgqkx +(1194 - 994);
                }
                else {
                    if (bvT1Rzk[z5sOZ20] < b[qj])
                        L2hniT7Rgqkx = L2hniT7Rgqkx -200;
                    qj--;
                    z5sOZ20 = z5sOZ20 + 1;
                };
            };
        }
        cout << L2hniT7Rgqkx << endl;
    }
    return 0;
}

