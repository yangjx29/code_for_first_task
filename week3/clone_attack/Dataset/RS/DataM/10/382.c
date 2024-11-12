int k10HWTF4t [1000], u7UXqT2Pd, l7nRdhqUgL [999] [999];

int GzNt4ku2Pji (int k10HWTF4t, int b) {
    if (k10HWTF4t > b)
        return k10HWTF4t;
    else
        return b;
}

int WesUJENn2 (int c1d24a, int pE8u4ogAP) {
    if (c1d24a == u7UXqT2Pd)
        return (22 - 22);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (pE8u4ogAP >= k10HWTF4t[c1d24a])
        return GzNt4ku2Pji (WesUJENn2 (c1d24a + (407 - 406), k10HWTF4t[c1d24a]) + 1, WesUJENn2 (c1d24a + 1, pE8u4ogAP));
    else
        return WesUJENn2 (c1d24a + 1, pE8u4ogAP);
}

int main () {
    int d2jcWnmZIBK;
    cout << WesUJENn2 (0, 31999);
    cin >> u7UXqT2Pd;
    for (d2jcWnmZIBK = 0; d2jcWnmZIBK < u7UXqT2Pd; d2jcWnmZIBK++)
        cin >> k10HWTF4t[d2jcWnmZIBK];
    return 0;
}

