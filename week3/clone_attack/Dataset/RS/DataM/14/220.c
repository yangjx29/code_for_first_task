struct   student {
    int D4uCJyMA5N;
    int liter;
    int d5Csr9;
    int ECTSZg04rE;
};
int main () {
    int i, j, k, fgKuk4YvZSBt;
    struct   student a [100000];
    struct   student eSDsoX8EqPkz;
    struct   student n2;
    struct   student n3;
    scanf ("%d", &fgKuk4YvZSBt);
    scanf ("%d%d%d", &a[(49 - 49)].D4uCJyMA5N, &a[(936 - 936)].liter, &a[0].d5Csr9);
    a[0].ECTSZg04rE = a[0].liter + a[0].d5Csr9;
    eSDsoX8EqPkz = n2 = n3 = a[0];
    for (i = 1; i < fgKuk4YvZSBt; i = i + 1) {
        scanf ("%d%d%d", &a[i].D4uCJyMA5N, &a[i].liter, &a[i].d5Csr9);
        a[i].ECTSZg04rE = a[i].liter + a[i].d5Csr9;
        if (a[i].ECTSZg04rE > eSDsoX8EqPkz.ECTSZg04rE) {
            n3 = n2;
            n2 = eSDsoX8EqPkz;
            eSDsoX8EqPkz = a[i];
        }
        else {
            if (a[i].ECTSZg04rE > n2.ECTSZg04rE) {
                n3 = n2;
                n2 = a[i];
            }
            else {
                if (a[i].ECTSZg04rE > n3.ECTSZg04rE)
                    n3 = a[i];
            };
        };
    }
    printf ("%d %d\n", eSDsoX8EqPkz.D4uCJyMA5N, eSDsoX8EqPkz.ECTSZg04rE);
    printf ("%d %d\n", n2.D4uCJyMA5N, n2.ECTSZg04rE);
    printf ("%d %d", n3.D4uCJyMA5N, n3.ECTSZg04rE);
    return 0;
}

