int n;

void  count (int x, int y) {
    int cCrILRopj;
    if (!(1 != x))
        n = n + 1;
    else {
        for (cCrILRopj = y; x >= cCrILRopj; cCrILRopj = cCrILRopj + 1) {
            if (x % cCrILRopj == 0)
                count (x / cCrILRopj, cCrILRopj);
        };
    };
}

int main () {
    void  count (int x, int y);
    int cCrILRopj;
    int k;
    int t;
    scanf ("%d", &k);
    for (cCrILRopj = 0; cCrILRopj < k; cCrILRopj++) {
        n = 0;
        scanf ("%d", &t);
        count (t, (98 - 96));
        printf ("%d\n", n);
    }
    return 0;
}

